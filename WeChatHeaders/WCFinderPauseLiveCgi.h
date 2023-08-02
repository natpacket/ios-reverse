//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderLiveBaseCgi.h"

@class MMFinderLiveTaskId, NSString;

@interface WCFinderPauseLiveCgi : WCFinderLiveBaseCgi
{
    int _action;
    MMFinderLiveTaskId *_taskId;
    NSString *_finderUsername;
    unsigned long long _liveId;
    unsigned long long _finderId;
    NSString *_finderNonceId;
    double _duration;
    unsigned long long _scene;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) int action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *finderNonceId; // @synthesize finderNonceId=_finderNonceId;
@property(nonatomic) unsigned long long finderId; // @synthesize finderId=_finderId;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithTaskId:(id)arg1 finderUsername:(id)arg2 liveId:(unsigned long long)arg3 finderId:(unsigned long long)arg4 finderNonceId:(id)arg5 action:(int)arg6 duration:(double)arg7 scene:(unsigned long long)arg8 successBlock:(CDUnknownBlockType)arg9 failureBlock:(CDUnknownBlockType)arg10;

@end

