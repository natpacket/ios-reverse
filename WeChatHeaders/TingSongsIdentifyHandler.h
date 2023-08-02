//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "TingSongsIdentifyManagerExt-Protocol.h"

@class NSString;

@interface TingSongsIdentifyHandler : MMObject <TingSongsIdentifyManagerExt>
{
    unsigned int _cutTimeStamp;
    unsigned int _sessionId;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _errorBlock;
    CDUnknownBlockType _peakPowerBlock;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) unsigned int cutTimeStamp; // @synthesize cutTimeStamp=_cutTimeStamp;
@property(copy, nonatomic) CDUnknownBlockType peakPowerBlock; // @synthesize peakPowerBlock=_peakPowerBlock;
@property(copy, nonatomic) CDUnknownBlockType errorBlock; // @synthesize errorBlock=_errorBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void)onGetTingSongsError:(int)arg1 andSessionId:(unsigned int)arg2;
- (void)onGetTingSongsSuccess:(id)arg1 andSessionId:(unsigned int)arg2;
- (void)onOutputPeakPower:(float)arg1;
- (_Bool)stopSearch;
- (int)startSearch;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

