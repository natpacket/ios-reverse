//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "ContactTagNameEditViewControllerDelegate-Protocol.h"
#import "MMMenuControllerExt-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MMTableView, NSArray, NSMutableArray, NSString;
@protocol FavSearchExtendFilterPanelDelegate;

@interface FavSearchExtendFilterPanel : MMUIView <UITableViewDelegate, UITableViewDataSource, ContactTagNameEditViewControllerDelegate, MMMenuControllerExt>
{
    MMTableView *m_tableView;
    NSMutableArray *m_tags;
    NSMutableArray *m_selectedTags;
    NSString *m_tagTitle;
    NSArray *m_types;
    NSString *m_selectedType;
    NSString *m_typeTitle;
    double m_rowHeight;
    double m_titleHeight;
    NSString *m_editingTag;
    id <FavSearchExtendFilterPanelDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FavSearchExtendFilterPanelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateEditingTagTo:(id)arg1;
- (void)updateTag:(id)arg1 to:(id)arg2;
- (void)onTagNameEditViewControllerRetWithTagName:(id)arg1;
- (void)onMenuControllerDidHide;
- (void)onHidePanel:(id)arg1;
- (void)deleteTag:(id)arg1;
- (void)renameTag:(id)arg1;
- (_Bool)canBecomeFirstResponder;
- (void)clearLongPressBtnState;
- (void)showMenuOnBtn:(id)arg1;
- (void)onLongPressBtn:(id)arg1;
- (void)onClickBtn:(id)arg1;
- (id)getButtonTitle:(id)arg1;
- (void)updateBtn:(id)arg1 selected:(_Bool)arg2;
- (id)genBtnWithTitle:(id)arg1;
- (void)tryAddLongPressGesture:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)clearSelection;
- (void)cancelType;
- (void)setTypes:(id)arg1 withTitle:(id)arg2;
- (void)selectType:(id)arg1;
- (void)setTag:(id)arg1 selected:(_Bool)arg2;
- (void)setTags:(id)arg1 withTitle:(id)arg2;
- (void)updateContentHeight;
- (void)initTableView;
- (void)updateWithWidth:(double)arg1;
- (id)initWithWidth:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

