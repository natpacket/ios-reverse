//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BizApi-Protocol.h"
#import "BrandFinderLiveMgrBatchExt-Protocol.h"
#import "BrandFinderLiveMgrExt-Protocol.h"
#import "BrandTimelineMsgMgrExt-Protocol.h"
#import "BrandTimelineNotifyLogicDelegate-Protocol.h"
#import "IContactMgrExt-Protocol.h"
#import "MMFlutterPlugin-Protocol.h"
#import "contactInfoDelegate-Protocol.h"

@class BizCallbackApi, BizEnterStatusInfo, BrandTLExptConfig, BrandTLFlutterViewController, BrandTimelineNotifyLogic, NSMutableSet, NSString;

@interface FlutterBrandTLApiImplementation : NSObject <BrandTimelineNotifyLogicDelegate, BrandTimelineMsgMgrExt, IContactMgrExt, BrandFinderLiveMgrExt, BrandFinderLiveMgrBatchExt, contactInfoDelegate, BizApi, MMFlutterPlugin>
{
    _Bool _canShowPersonalCenter;
    BrandTLExptConfig *_exptConfig;
    BizEnterStatusInfo *_enterInfo;
    BrandTLFlutterViewController *_viewController;
    NSMutableSet *_setFastLoadTemplateType;
    BrandTimelineNotifyLogic *_notifyTipsLogic;
    BizCallbackApi *_flutterApiCallback;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BizCallbackApi *flutterApiCallback; // @synthesize flutterApiCallback=_flutterApiCallback;
@property(retain, nonatomic) BrandTimelineNotifyLogic *notifyTipsLogic; // @synthesize notifyTipsLogic=_notifyTipsLogic;
@property(retain, nonatomic) NSMutableSet *setFastLoadTemplateType; // @synthesize setFastLoadTemplateType=_setFastLoadTemplateType;
@property(nonatomic) __weak BrandTLFlutterViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) _Bool canShowPersonalCenter; // @synthesize canShowPersonalCenter=_canShowPersonalCenter;
@property(retain, nonatomic) BizEnterStatusInfo *enterInfo; // @synthesize enterInfo=_enterInfo;
@property(retain, nonatomic) BrandTLExptConfig *exptConfig; // @synthesize exptConfig=_exptConfig;
- (void)onClickSearchBarWithError:(id *)arg1;
- (void)markLiveBarItemExposuredUserName:(id)arg1 finderId:(id)arg2 error:(id *)arg3;
- (id)isLiveBarItemExposuredUserName:(id)arg1 finderId:(id)arg2 error:(id *)arg3;
- (void)deleteAllMsgByContact:(id)arg1;
- (void)onLiveTaskUpdateStatus:(id)arg1;
- (void)onBatchBrandLivingStatusChange:(id)arg1;
- (void)onGetCacheBrandSubscribeLiveInfo:(id)arg1;
- (void)onGetBrandSubscribeLiveInfo:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)onResortSuccess:(unsigned long long)arg1 pageActiveAfterResort:(_Bool)arg2;
- (void)onModBrandTimelineMsgArr:(id)arg1;
- (void)onDelBrandTimelineMsgBySession:(id)arg1;
- (void)onDelBrandTimelineMsg:(id)arg1 msgWrap:(id)arg2;
- (void)onAddBrandTimelineMsg:(id)arg1;
- (_Bool)isAffModeOpen;
- (void)onNotifyMsgCountChange:(unsigned int)arg1;
- (id)__getCurNotifyTipsInfo;
- (id)genContactInfoFromContact:(id)arg1;
- (id)getContactByUsername:(id)arg1;
- (void)saveLocalOftenReadInfoInfoBuffer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadLocalOftenReadInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateBizFinderLivesInfoUsernameList:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)saveFinderLivesInfoBatchInfos:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getBizFinderLivesInfoBizFinderLiveRedDot:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unfollowFinderContactInfo:(id)arg1 error:(id *)arg2;
- (void)openFinderContactInfo:(id)arg1 error:(id *)arg2;
- (void)onMinimizeFinderInfo:(id)arg1 error:(id *)arg2;
- (void)launchBizFinderFeedInfo:(id)arg1 error:(id *)arg2;
- (id)genRecFinderCardDataFromPigeonInfo:(id)arg1;
- (id)isFinderContactFollowFinderUsername:(id)arg1 error:(id *)arg2;
- (void)getContactInfoBatchUserNames:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createMagicBrandServiceScene:(id)arg1 error:(id *)arg2;
- (void)createMagicAdBrandServiceScene:(id)arg1 error:(id *)arg2;
- (void)onMinimizeArticleInfo:(id)arg1 error:(id *)arg2;
- (void)gotoBizTestUIWithError:(id *)arg1;
- (id)onExpandMsgId:(id)arg1 error:(id *)arg2;
- (id)deleteByMsgIdMsgId:(id)arg1 error:(id *)arg2;
- (id)deleteByTalkerUserName:(id)arg1 error:(id *)arg2;
- (void)enterSessionUserName:(id)arg1 error:(id *)arg2;
- (id)getCdnUrlListWithError:(id *)arg1;
- (id)getBizImgCacheDirectoryWithError:(id *)arg1;
- (id)getBizEnterStatusInfoWithError:(id *)arg1;
- (void)getOftenReadAccountInfoBatchUserNames:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getOftenReadAccountInfoUserName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)__getOftenReadAccountInfoUserName:(id)arg1 error:(id *)arg2;
- (id)getContactInfoUserName:(id)arg1 error:(id *)arg2;
- (void)onExposedMsgId:(id)arg1 userName:(id)arg2 isValidExposed:(id)arg3 publishEnterSession:(id)arg4 error:(id *)arg5;
- (id)getUnReadCountWithError:(id *)arg1;
- (void)resetRedDotWithError:(id *)arg1;
- (void)doSearchWithError:(id *)arg1;
- (id)getNotifyTipsInfoWithError:(id *)arg1;
- (void)onClickNotifyTipsWithError:(id *)arg1;
- (void)setPayStatusUrl:(id)arg1 isPaid:(id)arg2 error:(id *)arg3;
- (id)isPaidUrl:(id)arg1 error:(id *)arg2;
- (void)getMassSendDataLastOrderId:(id)arg1 initData:(id)arg2 resetData:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)openOldSessionList:(id)arg1 source:(id)arg2;
- (void)openPersonalCenter:(id)arg1 source:(id)arg2;
- (void)advanceUpdateMPPageDataWithUrlInfoArr:(id)arg1;
- (void)addToPreloadUrl:(id)arg1 itemShowType:(id)arg2 openScene:(id)arg3 error:(id *)arg4;
- (void)openUrlArticleInfo:(id)arg1 error:(id *)arg2;
- (void)gotoFinderJumpInfo:(id)arg1 error:(id *)arg2;
- (void)gotoProfileUserName:(id)arg1 addContactScene:(id)arg2 openArticleFromScene:(id)arg3 error:(id *)arg4;
- (void)gotoOldListSessionId:(id)arg1 source:(id)arg2 error:(id *)arg3;
- (void)onScreenShot;
- (void)onViewDidBePoped;
- (void)onViewWillBePushed;
- (void)onMoveToTop;
- (void)dealloc;
- (void)onAttachedToEngine:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

