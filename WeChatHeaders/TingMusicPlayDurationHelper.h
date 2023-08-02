//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TingFlowRequestContext, TingItem;

@interface TingMusicPlayDurationHelper : NSObject
{
    TingItem *_tingItem;
    double _duration;
    TingFlowRequestContext *_waitingRequestContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TingFlowRequestContext *waitingRequestContext; // @synthesize waitingRequestContext=_waitingRequestContext;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) TingItem *tingItem; // @synthesize tingItem=_tingItem;
- (void)onPlayingStateChanged:(id)arg1 status:(int)arg2 duration:(double)arg3;
- (void)doBuildRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)buildFeedRequestWithRequest:(id)arg1 isFromLoadMore:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;

@end
