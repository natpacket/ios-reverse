//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "ContactTagNameEditViewControllerDelegate-Protocol.h"
#import "FavTagEditViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class FavTagListView, MMUIButton, NSArray, NSMutableArray, NSString, UILabel;
@protocol FavTagSearchFilterDelegate;

@interface FavTagSearchFilter : MMUIView <ContactTagNameEditViewControllerDelegate, FavTagEditViewDelegate, UIScrollViewDelegate>
{
    UILabel *m_label;
    MMUIButton *m_tagEditButton;
    FavTagListView *m_tagListView;
    NSMutableArray *m_currentTags;
    NSMutableArray *m_allTags;
    NSArray *m_keyword;
    id <FavTagSearchFilterDelegate> m_delegate;
    _Bool m_isCenterAlign;
    double _btnCornerRadius;
}

- (void).cxx_destruct;
@property(nonatomic) double btnCornerRadius; // @synthesize btnCornerRadius=_btnCornerRadius;
@property(nonatomic) __weak id <FavTagSearchFilterDelegate> m_delegate; // @synthesize m_delegate;
- (void)onTagNameEditViewControllerRetWithTagName:(id)arg1;
- (void)showMenu;
- (void)onLongPressTagBtn:(id)arg1;
- (void)onDeleteButton:(id)arg1;
- (void)onAddButton:(id)arg1;
- (void)willHideEditMenu:(id)arg1;
- (_Bool)canBecomeFirstResponder;
- (void)deleteTag:(id)arg1;
- (void)renameTag:(id)arg1;
- (void)removeSelectedTag;
- (void)removeAllTags;
- (void)removeLastTag;
- (id)getAllTagList;
- (id)getTagList;
- (void)setTitle:(id)arg1;
- (void)setTag:(id)arg1 isSelected:(_Bool)arg2;
- (void)reloadTagView;
- (long long)indexOfTag:(id)arg1;
- (void)updateTag:(id)arg1 to:(id)arg2;
- (void)initLabel;
- (void)updateWithTagList:(id)arg1 highlightKeyWords:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 alignCenter:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

