//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMFinderLiveGlobalRankSignView;

@interface MMFinderLiveGlobalRankSignRecordInfo : NSObject
{
    MMFinderLiveGlobalRankSignView *_rankSignView;
    CDUnknownBlockType _invokeCallback;
    CDUnknownBlockType _autoEndInvokeCallback;
    double _maxDuration;
}

- (void).cxx_destruct;
@property(nonatomic) double maxDuration; // @synthesize maxDuration=_maxDuration;
@property(copy, nonatomic) CDUnknownBlockType autoEndInvokeCallback; // @synthesize autoEndInvokeCallback=_autoEndInvokeCallback;
@property(copy, nonatomic) CDUnknownBlockType invokeCallback; // @synthesize invokeCallback=_invokeCallback;
@property(nonatomic) __weak MMFinderLiveGlobalRankSignView *rankSignView; // @synthesize rankSignView=_rankSignView;
- (void)autoEndInvoke;
- (void)endInvokeAnimation;
- (void)startInvokeAnimation;

@end

