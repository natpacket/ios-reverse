//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MinimizeTaskData, NSMutableArray, NSString;

@interface MinimizeTaskNewSessionInfoSmall : NSObject
{
    _Bool _isFold;
    _Bool _isPlaying;
    NSString *_smallSessionId;
    MinimizeTaskData *_taskData;
    NSMutableArray *_stateHistory;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) _Bool isFold; // @synthesize isFold=_isFold;
@property(retain, nonatomic) NSMutableArray *stateHistory; // @synthesize stateHistory=_stateHistory;
@property(retain, nonatomic) MinimizeTaskData *taskData; // @synthesize taskData=_taskData;
@property(retain, nonatomic) NSString *smallSessionId; // @synthesize smallSessionId=_smallSessionId;
- (void)recordStateChangeWithCurrentState;
- (unsigned int)currentState;
- (void)recordStateChangeWithEvent:(unsigned int)arg1 andTaskData:(id)arg2;
- (unsigned long long)calcExpandPlayTime;
- (unsigned long long)calcFoldPlayTime;
- (unsigned long long)calcStayTime;
- (id)init;

@end
