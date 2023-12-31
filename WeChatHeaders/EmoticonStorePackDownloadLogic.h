//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ICdnComMgrExt-Protocol.h"
#import "StoreEmotionExchangeEmotionPackCgiDelegate-Protocol.h"

@class EmoticonStoreItem, NSString, StoreEmotionExchangeEmotionPackCgi;
@protocol EmoticonStorePackDownloadLogicDelegate;

@interface EmoticonStorePackDownloadLogic : NSObject <StoreEmotionExchangeEmotionPackCgiDelegate, ICdnComMgrExt>
{
    id <EmoticonStorePackDownloadLogicDelegate> _delegate;
    EmoticonStoreItem *_item;
    StoreEmotionExchangeEmotionPackCgi *_packCgi;
}

- (void).cxx_destruct;
@property(retain, nonatomic) StoreEmotionExchangeEmotionPackCgi *packCgi; // @synthesize packCgi=_packCgi;
@property(retain, nonatomic) EmoticonStoreItem *item; // @synthesize item=_item;
@property(nonatomic) __weak id <EmoticonStorePackDownloadLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)IsCdnEmoticonPackageDownlaodFromClientID:(id)arg1;
- (id)mediaInfoForEmoticonItem:(id)arg1;
- (id)getReportStr:(id)arg1;
- (void)OnCdnDownload:(id)arg1;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)OnSetCdnDnsInfo;
- (void)onExchangeEmotionPackCgiFailedWithPid:(id)arg1 AndRet:(int)arg2 ErroMsg:(id)arg3;
- (void)onExchangeEmotionPackCgiFailedForNoResponseWithPid:(id)arg1;
- (void)onExchangeEmotionPackCgiOkWithDesignerSetKey:(id)arg1 needUpdatePids:(id)arg2;
- (void)onExchangeEmotionPackCgiOkWithPid:(id)arg1 DownloadInfo:(id)arg2;
- (_Bool)downloadAndInstallEmoticon;
- (_Bool)createExchangeCgiWithScence:(int)arg1 isAutomatic:(_Bool)arg2;
- (_Bool)cancelDownload;
- (_Bool)tryDownloadWithScence:(int)arg1 isAutomatic:(_Bool)arg2;
- (void)dealloc;
- (id)initWithStoreItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

