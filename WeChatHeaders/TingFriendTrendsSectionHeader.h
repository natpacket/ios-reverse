//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

#import "ILinkEventExt-Protocol.h"

@class MMUIButton, MMUILabel, NSString, RichTextView, UIView;

@interface TingFriendTrendsSectionHeader : UICollectionReusableView <ILinkEventExt>
{
    _Bool _isFirstCard;
    CDUnknownBlockType _onClickPlay;
    CDUnknownBlockType _onClickUsername;
    MMUILabel *_titleLabel;
    MMUIButton *_playBtn;
    RichTextView *_recommendRichTextView;
    UIView *_secondLineView;
}

+ (id)reuseIdentifier;
+ (double)headerViewHeightWithCell;
+ (double)headerViewHeightDefault;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *secondLineView; // @synthesize secondLineView=_secondLineView;
@property(retain, nonatomic) RichTextView *recommendRichTextView; // @synthesize recommendRichTextView=_recommendRichTextView;
@property(retain, nonatomic) MMUIButton *playBtn; // @synthesize playBtn=_playBtn;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool isFirstCard; // @synthesize isFirstCard=_isFirstCard;
@property(copy, nonatomic) CDUnknownBlockType onClickUsername; // @synthesize onClickUsername=_onClickUsername;
@property(copy, nonatomic) CDUnknownBlockType onClickPlay; // @synthesize onClickPlay=_onClickPlay;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onClickedPlay;
- (void)configLayout;
- (void)updateDisplay:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
