//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "ICdnComMgrExt-Protocol.h"
#import "IMMLanguageMgrExt-Protocol.h"
#import "MMConfigMgrExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class EnhanceTranslatingUtil, MMURLHandler, NSMutableDictionary, NSNumber, NSString;

@interface OCRTransMgr : MMUserService <ICdnComMgrExt, MMConfigMgrExt, IMMLanguageMgrExt, MMServiceProtocol, PBMessageObserverDelegate>
{
    NSNumber *_isBottomBarAvaliable;
    NSNumber *_isNewOCRTransAvaliable;
    NSMutableDictionary *_clientMsgID2ContextMap;
    EnhanceTranslatingUtil *_util;
    _Bool _isDetectModelWorkable;
    MMURLHandler *_urlHandler;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isDetectModelWorkable; // @synthesize isDetectModelWorkable=_isDetectModelWorkable;
@property(retain, nonatomic) MMURLHandler *urlHandler; // @synthesize urlHandler=_urlHandler;
- (void)detectDocumentArea:(id)arg1 cropRect:(struct CGRect)arg2 sessionId:(unsigned long long)arg3;
- (void)releaseDetectDocumentModel;
- (void)loadDetectDocumentModel;
- (void)checkDetectDocumentModelUpdate;
- (_Bool)enableScanTranslatingNewStyle;
- (void)handleSendTransImageData:(id)arg1;
- (void)sendTransImageData:(id)arg1 context:(id)arg2;
- (unsigned int)cdnUploadTransImageData:(id)arg1 sessionId:(unsigned int)arg2 scene:(unsigned int)arg3;
- (void)onLanguageChange;
- (void)OnCdnUpload:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)getFromLang;
- (_Bool)setFromLang:(id)arg1;
- (_Bool)isNewOCRTransAvaliable;
- (_Bool)isBottomBarAvaliable;
- (void)onMMDynamicConfigUpdated;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
