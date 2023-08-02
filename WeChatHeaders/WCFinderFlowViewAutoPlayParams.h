//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WCFinderFlowViewAutoPlayParams : NSObject
{
    CDUnknownBlockType _visibleRectProvider;
    CDUnknownBlockType _playableCellsFilterBlock;
    CDUnknownBlockType _preventChangePlayableBlock;
    unsigned long long _maxPlayCount;
}

+ (id)paramsForFollowFlowScene;
+ (id)defaultParams;
+ (CDUnknownBlockType)defaultAutoPlayVisibleRectProvider;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long maxPlayCount; // @synthesize maxPlayCount=_maxPlayCount;
@property(copy, nonatomic) CDUnknownBlockType preventChangePlayableBlock; // @synthesize preventChangePlayableBlock=_preventChangePlayableBlock;
@property(copy, nonatomic) CDUnknownBlockType playableCellsFilterBlock; // @synthesize playableCellsFilterBlock=_playableCellsFilterBlock;
@property(copy, nonatomic) CDUnknownBlockType visibleRectProvider; // @synthesize visibleRectProvider=_visibleRectProvider;

@end
