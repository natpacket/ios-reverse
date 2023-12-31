//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MMFinderLiveGiftResourceMgrExt-Protocol.h"

@class MMFinderLiveRewardWish, MMUIButton, MMUILabel, NSString, UIImageView;
@protocol MMFinderLiveRewardWishSendingViewDelegate;

@interface MMFinderLiveRewardWishSendingView : UIView <MMFinderLiveGiftResourceMgrExt>
{
    UIView *_contentView;
    UIImageView *_thumbnailView;
    MMUILabel *_displayNameLabel;
    MMUILabel *_priceLabel;
    UIImageView *_coinIconView;
    MMUILabel *_countLabel;
    MMUILabel *_fansBadgeLabel;
    MMUIButton *_sendButton;
    MMUILabel *_giftDisableLabel;
    MMFinderLiveRewardWish *_wishGiftItem;
    id <MMFinderLiveRewardWishSendingViewDelegate> _operationDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMFinderLiveRewardWishSendingViewDelegate> operationDelegate; // @synthesize operationDelegate=_operationDelegate;
@property(retain, nonatomic) MMFinderLiveRewardWish *wishGiftItem; // @synthesize wishGiftItem=_wishGiftItem;
@property(retain, nonatomic) MMUILabel *giftDisableLabel; // @synthesize giftDisableLabel=_giftDisableLabel;
@property(retain, nonatomic) MMUIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) MMUILabel *fansBadgeLabel; // @synthesize fansBadgeLabel=_fansBadgeLabel;
@property(retain, nonatomic) MMUILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UIImageView *coinIconView; // @synthesize coinIconView=_coinIconView;
@property(retain, nonatomic) MMUILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) MMUILabel *displayNameLabel; // @synthesize displayNameLabel=_displayNameLabel;
@property(retain, nonatomic) UIImageView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)onLiveGiftResDownloadCompleted:(id)arg1 retry:(unsigned long long)arg2 totalLength:(unsigned long long)arg3 resType:(long long)arg4 productId:(id)arg5 downloadUrl:(id)arg6;
- (void)onClickSendButton:(id)arg1;
- (void)layoutSubviews;
- (void)initUI;
- (id)getDefaultGiftThumbImage;
- (void)clearCurrentWishGiftItem;
- (void)updateWithWishGiftItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

