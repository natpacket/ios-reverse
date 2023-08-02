//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString, WCAdAppGiftPackCodeInfo, WCAdAppointmentInfo, WCAdBrandProfileInfo, WCAdClickActionCanvasInfo, WCAdCouponInfo, WCAdCustomerServiceInfo, WCAdFinderFollowInfo, WCAdFinderInfo, WCAdFinderLiveInfo, WCAdFinderLiveNoticeInfo, WCAdFinderProfileInfo, WCAdFinderTopicInfo, WCAdOpenAppHalfScreenInfo, WCAdQrCodeScanInfo, WCAdQuicklyAddBrandInfo, WCAdSearchH5Info, WCAdStatePublishInfo;

@interface WCAdCardBtnInfo : NSObject <NSCoding>
{
    _Bool _bInternalJumpAppStore;
    _Bool _hasSubscribeSuc;
    unsigned int _weappVersion;
    int _miniProgramType;
    int _appType;
    NSString *_btnTitle;
    NSString *_btnFontColor;
    NSString *_btnBgColor;
    NSString *_iconUrl;
    long long _clickActionType;
    NSString *_clickActionLink;
    NSString *_weappUserName;
    NSString *_weappPath;
    NSString *_appJumpUrl;
    NSString *_openSdkAppId;
    NSString *_appPageUrl;
    WCAdOpenAppHalfScreenInfo *_openAppHalfScreenInfo;
    NSString *_cardTpId;
    NSString *_cardExt;
    NSString *_tempId;
    NSString *_btnTitleAfterSubscribe;
    NSString *_subscribeTitle;
    NSString *_subscribeContent;
    NSString *_subscribeSubmitBtnTitle;
    NSString *_appId;
    NSString *_subscribeSucTip;
    NSString *_subscribeFailedTip;
    NSString *_subscribeHeadImage;
    NSString *_subscribeNickname;
    unsigned long long _subscribeExpiredTime;
    NSString *_subscribeExpiredTip;
    WCAdQuicklyAddBrandInfo *_quicklyAddBrandInfo;
    WCAdCouponInfo *_adCouponInfo;
    WCAdFinderLiveNoticeInfo *_adFinderLiveNoticeInfo;
    WCAdFinderLiveInfo *_adFinderLiveInfo;
    WCAdFinderTopicInfo *_adFinderTopicInfo;
    WCAdFinderInfo *_adFinderFeedInfo;
    WCAdFinderFollowInfo *_adFinderFollowInfo;
    WCAdFinderProfileInfo *_adFinderProfileInfo;
    WCAdAppGiftPackCodeInfo *_adAppGiftPackCodeInfo;
    WCAdAppointmentInfo *_adAppointmentInfo;
    WCAdSearchH5Info *_adSearchH5Info;
    WCAdCustomerServiceInfo *_adCustomerServiceInfo;
    WCAdBrandProfileInfo *_adBrandProfileInfo;
    WCAdClickActionCanvasInfo *_adClickActionCanvasInfo;
    WCAdStatePublishInfo *_adStatePublishInfo;
    WCAdQrCodeScanInfo *_adQrCodeScanInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAdQrCodeScanInfo *adQrCodeScanInfo; // @synthesize adQrCodeScanInfo=_adQrCodeScanInfo;
@property(retain, nonatomic) WCAdStatePublishInfo *adStatePublishInfo; // @synthesize adStatePublishInfo=_adStatePublishInfo;
@property(retain, nonatomic) WCAdClickActionCanvasInfo *adClickActionCanvasInfo; // @synthesize adClickActionCanvasInfo=_adClickActionCanvasInfo;
@property(retain, nonatomic) WCAdBrandProfileInfo *adBrandProfileInfo; // @synthesize adBrandProfileInfo=_adBrandProfileInfo;
@property(retain, nonatomic) WCAdCustomerServiceInfo *adCustomerServiceInfo; // @synthesize adCustomerServiceInfo=_adCustomerServiceInfo;
@property(retain, nonatomic) WCAdSearchH5Info *adSearchH5Info; // @synthesize adSearchH5Info=_adSearchH5Info;
@property(retain, nonatomic) WCAdAppointmentInfo *adAppointmentInfo; // @synthesize adAppointmentInfo=_adAppointmentInfo;
@property(retain, nonatomic) WCAdAppGiftPackCodeInfo *adAppGiftPackCodeInfo; // @synthesize adAppGiftPackCodeInfo=_adAppGiftPackCodeInfo;
@property(retain, nonatomic) WCAdFinderProfileInfo *adFinderProfileInfo; // @synthesize adFinderProfileInfo=_adFinderProfileInfo;
@property(retain, nonatomic) WCAdFinderFollowInfo *adFinderFollowInfo; // @synthesize adFinderFollowInfo=_adFinderFollowInfo;
@property(retain, nonatomic) WCAdFinderInfo *adFinderFeedInfo; // @synthesize adFinderFeedInfo=_adFinderFeedInfo;
@property(retain, nonatomic) WCAdFinderTopicInfo *adFinderTopicInfo; // @synthesize adFinderTopicInfo=_adFinderTopicInfo;
@property(retain, nonatomic) WCAdFinderLiveInfo *adFinderLiveInfo; // @synthesize adFinderLiveInfo=_adFinderLiveInfo;
@property(retain, nonatomic) WCAdFinderLiveNoticeInfo *adFinderLiveNoticeInfo; // @synthesize adFinderLiveNoticeInfo=_adFinderLiveNoticeInfo;
@property(retain, nonatomic) WCAdCouponInfo *adCouponInfo; // @synthesize adCouponInfo=_adCouponInfo;
@property(retain, nonatomic) WCAdQuicklyAddBrandInfo *quicklyAddBrandInfo; // @synthesize quicklyAddBrandInfo=_quicklyAddBrandInfo;
@property(retain, nonatomic) NSString *subscribeExpiredTip; // @synthesize subscribeExpiredTip=_subscribeExpiredTip;
@property(nonatomic) unsigned long long subscribeExpiredTime; // @synthesize subscribeExpiredTime=_subscribeExpiredTime;
@property(nonatomic) _Bool hasSubscribeSuc; // @synthesize hasSubscribeSuc=_hasSubscribeSuc;
@property(retain, nonatomic) NSString *subscribeNickname; // @synthesize subscribeNickname=_subscribeNickname;
@property(retain, nonatomic) NSString *subscribeHeadImage; // @synthesize subscribeHeadImage=_subscribeHeadImage;
@property(retain, nonatomic) NSString *subscribeFailedTip; // @synthesize subscribeFailedTip=_subscribeFailedTip;
@property(retain, nonatomic) NSString *subscribeSucTip; // @synthesize subscribeSucTip=_subscribeSucTip;
@property(nonatomic) int appType; // @synthesize appType=_appType;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *subscribeSubmitBtnTitle; // @synthesize subscribeSubmitBtnTitle=_subscribeSubmitBtnTitle;
@property(retain, nonatomic) NSString *subscribeContent; // @synthesize subscribeContent=_subscribeContent;
@property(retain, nonatomic) NSString *subscribeTitle; // @synthesize subscribeTitle=_subscribeTitle;
@property(retain, nonatomic) NSString *btnTitleAfterSubscribe; // @synthesize btnTitleAfterSubscribe=_btnTitleAfterSubscribe;
@property(retain, nonatomic) NSString *tempId; // @synthesize tempId=_tempId;
@property(retain, nonatomic) NSString *cardExt; // @synthesize cardExt=_cardExt;
@property(retain, nonatomic) NSString *cardTpId; // @synthesize cardTpId=_cardTpId;
@property(retain, nonatomic) WCAdOpenAppHalfScreenInfo *openAppHalfScreenInfo; // @synthesize openAppHalfScreenInfo=_openAppHalfScreenInfo;
@property(nonatomic) _Bool bInternalJumpAppStore; // @synthesize bInternalJumpAppStore=_bInternalJumpAppStore;
@property(retain, nonatomic) NSString *appPageUrl; // @synthesize appPageUrl=_appPageUrl;
@property(retain, nonatomic) NSString *openSdkAppId; // @synthesize openSdkAppId=_openSdkAppId;
@property(retain, nonatomic) NSString *appJumpUrl; // @synthesize appJumpUrl=_appJumpUrl;
@property(nonatomic) int miniProgramType; // @synthesize miniProgramType=_miniProgramType;
@property(nonatomic) unsigned int weappVersion; // @synthesize weappVersion=_weappVersion;
@property(retain, nonatomic) NSString *weappPath; // @synthesize weappPath=_weappPath;
@property(retain, nonatomic) NSString *weappUserName; // @synthesize weappUserName=_weappUserName;
@property(retain, nonatomic) NSString *clickActionLink; // @synthesize clickActionLink=_clickActionLink;
@property(nonatomic) long long clickActionType; // @synthesize clickActionType=_clickActionType;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *btnBgColor; // @synthesize btnBgColor=_btnBgColor;
@property(retain, nonatomic) NSString *btnFontColor; // @synthesize btnFontColor=_btnFontColor;
@property(retain, nonatomic) NSString *btnTitle; // @synthesize btnTitle=_btnTitle;
- (id)getWeAppInfo;
- (_Bool)isValidForJumpToWeApp;
- (id)fetchAdClickActionLink;
- (unsigned int)fetchAdClickActionType;
- (_Bool)isValidForShowActionBtn;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

