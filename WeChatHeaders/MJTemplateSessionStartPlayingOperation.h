//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MJTemplateSessionBaseOperation.h"

@class NSString;

@interface MJTemplateSessionStartPlayingOperation : MJTemplateSessionBaseOperation
{
    NSString *_specificSegmentId;
    long long _status;
    CDStruct_e83c9415 _timeRange;
}

- (void).cxx_destruct;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *specificSegmentId; // @synthesize specificSegmentId=_specificSegmentId;
- (void)_updateStatus:(long long)arg1;
- (void)_didCompleteWithError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_startPlayingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)boundTemplateId;
- (long long)currentStatus;
- (void)start;
- (void)dealloc;
- (id)initWithMaasSession:(id)arg1 sessionKey:(id)arg2 timeRange:(CDStruct_e83c9415)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

