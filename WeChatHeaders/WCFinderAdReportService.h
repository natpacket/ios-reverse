//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"

@class MMLRUCache, NSString;

@interface WCFinderAdReportService : MMUserService <MMServiceProtocol>
{
    MMLRUCache *_adReportMetaCache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLRUCache *adReportMetaCache; // @synthesize adReportMetaCache=_adReportMetaCache;
- (id)_getAndCacheMetaWithTid:(id)arg1 scene:(unsigned long long)arg2;
- (id)_metaKeyWithTid:(id)arg1 scene:(unsigned long long)arg2;
- (void)feedbackCommentAdWithType:(int)arg1 reasonArray:(id)arg2 params:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failBlock:(CDUnknownBlockType)arg5;
- (void)reportAdCommentWithTid:(id)arg1 scene:(unsigned long long)arg2 endExpose:(_Bool)arg3 reportDict:(id)arg4 reportBypData:(id)arg5;
- (void)reportADWithTid:(id)arg1 scene:(unsigned long long)arg2 endExpose:(_Bool)arg3 reportDict:(id)arg4;
- (void)updateAdReportExitActionType:(unsigned long long)arg1 tid:(id)arg2 scene:(unsigned long long)arg3;
- (void)updateAdReportMetaWithTid:(id)arg1 scene:(unsigned long long)arg2 metaBlock:(CDUnknownBlockType)arg3;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

