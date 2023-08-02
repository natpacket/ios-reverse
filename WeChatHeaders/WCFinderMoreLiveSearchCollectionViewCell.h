//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "WCFinderFeedContentVMExt-Protocol.h"

@class FavAttributeCPLabel, MMLiveCDNPlayerView, NSString, UILabel, UIView, WCFinderAuthInfoIconView, WCFinderHeadImageView, WCFinderSearchHighLightItemModel;
@protocol WCFinderMoreLiveSearchCollectionViewCellDelegate;

@interface WCFinderMoreLiveSearchCollectionViewCell : UICollectionViewCell <WCFinderFeedContentVMExt>
{
    id <WCFinderMoreLiveSearchCollectionViewCellDelegate> _delegate;
    MMLiveCDNPlayerView *_playerView;
    UIView *_endMaskView;
    UIView *_endTipsView;
    UIView *_gradientView;
    UILabel *_recommendReasonLabel;
    UIView *_recommendReasonView;
    FavAttributeCPLabel *_descLabel;
    UIView *_authorView;
    UIView *_avatorContainer;
    WCFinderHeadImageView *_avatorImageView;
    UILabel *_nicknameLabel;
    WCFinderAuthInfoIconView *_authInfoIconView;
    UILabel *_audienceNumLabel;
    WCFinderSearchHighLightItemModel *_itemModel;
}

+ (double)cellHeightInWidth:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderSearchHighLightItemModel *itemModel; // @synthesize itemModel=_itemModel;
@property(retain, nonatomic) UILabel *audienceNumLabel; // @synthesize audienceNumLabel=_audienceNumLabel;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authInfoIconView; // @synthesize authInfoIconView=_authInfoIconView;
@property(retain, nonatomic) UILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *avatorImageView; // @synthesize avatorImageView=_avatorImageView;
@property(retain, nonatomic) UIView *avatorContainer; // @synthesize avatorContainer=_avatorContainer;
@property(retain, nonatomic) UIView *authorView; // @synthesize authorView=_authorView;
@property(retain, nonatomic) FavAttributeCPLabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UIView *recommendReasonView; // @synthesize recommendReasonView=_recommendReasonView;
@property(retain, nonatomic) UILabel *recommendReasonLabel; // @synthesize recommendReasonLabel=_recommendReasonLabel;
@property(retain, nonatomic) UIView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) UIView *endTipsView; // @synthesize endTipsView=_endTipsView;
@property(retain, nonatomic) UIView *endMaskView; // @synthesize endMaskView=_endMaskView;
@property(retain, nonatomic) MMLiveCDNPlayerView *playerView; // @synthesize playerView=_playerView;
@property(nonatomic) __weak id <WCFinderMoreLiveSearchCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFeedLiveCoverInfoUpdate:(id)arg1;
- (void)onFeedLiveOnlineCountChange:(long long)arg1 participantWording:(id)arg2;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (void)removeBlurEffectIfNeed;
- (void)addBlurEffectIfNeed;
- (id)getAudienceNumWordingWithDataItem:(id)arg1;
- (void)onAuthorViewDidClick;
- (void)layoutUI;
- (void)updateWithItemModel:(id)arg1;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

