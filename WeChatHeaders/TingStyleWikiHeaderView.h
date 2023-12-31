//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class BTRichTextTagView, MMListenCategoryItem, MMUILabel, UIView;

@interface TingStyleWikiHeaderView : MMUIView
{
    CDUnknownBlockType _onMoreClickBlock;
    UIView *_containerView;
    MMUILabel *_nameLabel;
    UIView *_descContainerView;
    BTRichTextTagView *_descTextTagView;
    MMUILabel *_descMoreLabel;
    MMListenCategoryItem *_category;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMListenCategoryItem *category; // @synthesize category=_category;
@property(retain, nonatomic) MMUILabel *descMoreLabel; // @synthesize descMoreLabel=_descMoreLabel;
@property(retain, nonatomic) BTRichTextTagView *descTextTagView; // @synthesize descTextTagView=_descTextTagView;
@property(retain, nonatomic) UIView *descContainerView; // @synthesize descContainerView=_descContainerView;
@property(retain, nonatomic) MMUILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(copy, nonatomic) CDUnknownBlockType onMoreClickBlock; // @synthesize onMoreClickBlock=_onMoreClickBlock;
- (void)onMoreDescClick;
- (struct CGSize)moreLabelSize;
- (double)maxWidth;
- (_Bool)shouldShowMoreLabel;
- (struct CGSize)titleLabelSize:(id *)arg1;
- (id)genTextLabelStyles;
- (void)updateTextTagView;
- (id)textLabelFont;
- (void)updateDisplayWithItem:(id)arg1;
- (void)configureLayout;
- (void)adjustContentHeight;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

