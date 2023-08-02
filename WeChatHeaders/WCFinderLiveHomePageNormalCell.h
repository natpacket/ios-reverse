//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderLiveHomePageBaseCdnCell.h"

#import "ILinkEventExt-Protocol.h"
#import "WCFinderFeedContentVMExt-Protocol.h"

@class MMFinderLiveActivityView, NSString, RichTextView, UILabel, UIView, WCFinderAuthInfoIconView, WCFinderHeadImageView;
@protocol WCFinderLiveHomePageNormalCellDelegate;

@interface WCFinderLiveHomePageNormalCell : WCFinderLiveHomePageBaseCdnCell <WCFinderFeedContentVMExt, ILinkEventExt>
{
    _Bool _canShowLiveActivityView;
    id <WCFinderLiveHomePageNormalCellDelegate> _delegate;
    RichTextView *_recommendReasonLabel;
    UIView *_recommendReasonView;
    UIView *_authorView;
    UIView *_avatorContainer;
    WCFinderHeadImageView *_avatorImageView;
    RichTextView *_nicknameTV;
    WCFinderAuthInfoIconView *_authInfoIconView;
    UILabel *_audienceNumLabel;
    MMFinderLiveActivityView *_liveActivityView;
}

+ (id)cellIdentifier;
+ (double)cellHeightInWidth:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveActivityView *liveActivityView; // @synthesize liveActivityView=_liveActivityView;
@property(nonatomic) _Bool canShowLiveActivityView; // @synthesize canShowLiveActivityView=_canShowLiveActivityView;
@property(retain, nonatomic) UILabel *audienceNumLabel; // @synthesize audienceNumLabel=_audienceNumLabel;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authInfoIconView; // @synthesize authInfoIconView=_authInfoIconView;
@property(retain, nonatomic) RichTextView *nicknameTV; // @synthesize nicknameTV=_nicknameTV;
@property(retain, nonatomic) WCFinderHeadImageView *avatorImageView; // @synthesize avatorImageView=_avatorImageView;
@property(retain, nonatomic) UIView *avatorContainer; // @synthesize avatorContainer=_avatorContainer;
@property(retain, nonatomic) UIView *authorView; // @synthesize authorView=_authorView;
@property(retain, nonatomic) UIView *recommendReasonView; // @synthesize recommendReasonView=_recommendReasonView;
@property(retain, nonatomic) RichTextView *recommendReasonLabel; // @synthesize recommendReasonLabel=_recommendReasonLabel;
@property(nonatomic) __weak id <WCFinderLiveHomePageNormalCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFeedLiveCoverInfoUpdate:(id)arg1;
- (void)onFeedLiveStatusChanged:(id)arg1 state:(unsigned long long)arg2;
- (void)onFeedLiveOnlineCountChange:(long long)arg1 participantWording:(id)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)updateAllUIElementsShow:(_Bool)arg1 animate:(_Bool)arg2;
- (void)layoutLiveActivityView;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (void)onAuthorViewDidClick;
- (id)getAudienceNumWordingWithDataItem:(id)arg1;
- (void)layoutUI;
- (void)relayoutNickname;
- (void)updateWithElementModel:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

