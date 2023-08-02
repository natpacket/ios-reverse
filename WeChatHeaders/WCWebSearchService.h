//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WSTemplateBaseMgr.h"

#import "IWSSearchUtilExtension-Protocol.h"
#import "MMMenuControllerExt-Protocol.h"
#import "YYWebviewProtectorExtension-Protocol.h"

@class CMessageWrap, NSString, WCFingertipSearchReportModel, WCImageSearchEntity, WCTextSearchEntity, _TtC6WeChat19ReusablePageManager;

@interface WCWebSearchService : WSTemplateBaseMgr <MMMenuControllerExt, IWSSearchUtilExtension, YYWebviewProtectorExtension>
{
    CMessageWrap *_sessionMsgWrap;
    WCFingertipSearchReportModel *_fingertipSearchReportModel;
    WCTextSearchEntity *_sessionTextSearchEntity;
    WCImageSearchEntity *_sessionImageSearchEntity;
    WCImageSearchEntity *_originImageSearchEntity;
    _TtC6WeChat19ReusablePageManager *_reusableWebPageManager;
}

+ (_Bool)IsImageSearchScene:(unsigned long long)arg1;
+ (_Bool)IsFingertipSearchScene:(unsigned long long)arg1;
+ (id)FingertipSearchExpressHintWord;
- (void).cxx_destruct;
@property(retain, nonatomic) _TtC6WeChat19ReusablePageManager *reusableWebPageManager; // @synthesize reusableWebPageManager=_reusableWebPageManager;
@property(retain, nonatomic) WCImageSearchEntity *originImageSearchEntity; // @synthesize originImageSearchEntity=_originImageSearchEntity;
@property(retain, nonatomic) WCImageSearchEntity *sessionImageSearchEntity; // @synthesize sessionImageSearchEntity=_sessionImageSearchEntity;
@property(retain, nonatomic) WCTextSearchEntity *sessionTextSearchEntity; // @synthesize sessionTextSearchEntity=_sessionTextSearchEntity;
@property(retain, nonatomic) WCFingertipSearchReportModel *fingertipSearchReportModel; // @synthesize fingertipSearchReportModel=_fingertipSearchReportModel;
@property(retain, nonatomic) CMessageWrap *sessionMsgWrap; // @synthesize sessionMsgWrap=_sessionMsgWrap;
- (void)appDidTerminateWKWebviewNetworkProcess;
- (void)onCloseSearchPreloadWebview;
- (void)onMenuControllerDidShow;
- (void)reloadPackageConfig:(unsigned long long)arg1;
- (unsigned long long)localJSBizType;
- (unsigned int)packageResouceSubType;
- (unsigned int)packageResouceType;
- (id)templateResouceRootPath;
- (id)appDefaultTemplateResoucePath;
- (void)onServiceEnterBackground;
- (void)onServiceMemoryWarning;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
