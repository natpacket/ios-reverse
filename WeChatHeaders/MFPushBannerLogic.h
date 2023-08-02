//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "BannerToastExt-Protocol.h"
#import "IHeadImageExt-Protocol.h"
#import "MMKernelExt-Protocol.h"

@class MFBannerBtn, NSString;
@protocol MFPushBannerDelegate;

@interface MFPushBannerLogic : MMObject <BannerToastExt, IHeadImageExt, MMKernelExt>
{
    MFBannerBtn *m_bannerBtn;
    id <MFPushBannerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MFPushBannerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) MFBannerBtn *bannerBtn; // @synthesize bannerBtn=m_bannerBtn;
- (void)onInitOK;
- (void)onReceiveSecurityBannerMsg:(id)arg1 withData:(id)arg2;
- (void)onReceiveNewFriendRecommandMsg:(id)arg1;
- (void)onBannerUpdate;
- (void)onHeadImageChange:(id)arg1;
- (void)updatePushBanner;
- (void)openMassSend:(id)arg1;
- (void)jumpToMoment:(id)arg1;
- (void)jumpToGame:(id)arg1;
- (void)jumpToStickerShop:(id)arg1;
- (void)setHeaderImage:(id)arg1;
- (void)checkSurroundingPeople:(id)arg1;
- (void)uploadContact:(id)arg1;
- (void)openPermission:(id)arg1;
- (void)bindPhone:(id)arg1;
- (void)showBannerBtn:(int)arg1;
- (void)initRecommandSurroundingBtn;
- (void)initOpenMomentBtn;
- (void)initOpenMassSendBtn;
- (void)initOpenGameBtn;
- (void)initOpenStickerShopBtn;
- (void)initSetHeadBtn;
- (void)initAddBookPermissonBtn;
- (void)initUploadContactBtn;
- (void)initBindPhoneBtn;
- (void)createBannerBtn;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

