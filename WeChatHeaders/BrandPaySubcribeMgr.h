//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "IExptServiceExt-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"
#import "MPPageRelatedInfoMgrExt-Protocol.h"

@class MemoryMappedKV, NSString;

@interface BrandPaySubcribeMgr : MMUserService <MPPageRelatedInfoMgrExt, IMsgExt, IExptServiceExt, MMServiceProtocol>
{
    _Bool _isPaySubscribeOpen;
    MemoryMappedKV *_mappedKV;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isPaySubscribeOpen; // @synthesize isPaySubscribeOpen=_isPaySubscribeOpen;
@property(retain, nonatomic) MemoryMappedKV *mappedKV; // @synthesize mappedKV=_mappedKV;
- (void)onExptItemListChange;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)onBatchUpdateMPPageRelatedInfoArr:(id)arg1;
- (_Bool)updateMPPageHasPaidWithPayInfoArr:(id)arg1;
- (_Bool)updateMPPagePayStatusWithPageIdentifier:(id)arg1 fullUrl:(id)arg2;
- (void)resetMappedKv;
- (void)unregisterExtension;
- (void)registerExtension;
- (void)dealloc;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)clearAllPayStatus;
- (void)configueShowRedDot:(_Bool)arg1 path:(unsigned long long)arg2;
- (void)diposeRedDotWithPath:(unsigned long long)arg1;
- (_Bool)isShowRedDotWithPath:(unsigned long long)arg1;
- (void)updateUserPaySubcribeEntryInfo:(_Bool)arg1 paySubscribeEntryUrl:(id)arg2;
- (id)paySubscribeEntryUrl;
- (_Bool)hasUserPaySubscribeEntry;
- (_Bool)updateMPPageHasPaidWithFullUrl:(id)arg1;
- (_Bool)isMPPagePaidWithPageIdentifier:(id)arg1;
- (_Bool)isMPPagePaid:(id)arg1;
- (_Bool)isPaySubcribeOpen;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

