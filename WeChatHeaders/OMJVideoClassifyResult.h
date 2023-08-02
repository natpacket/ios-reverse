//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface OMJVideoClassifyResult : NSObject
{
    NSArray *_visionTaskOutLabels;
    NSArray *_visionTaskExceedsThreshold;
    NSArray *_visionTaskOutScores;
    NSArray *_audioTaskOutLabels;
    NSArray *_audioTaskOutScores;
    NSArray *_lastVersionOutScores;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *lastVersionOutScores; // @synthesize lastVersionOutScores=_lastVersionOutScores;
@property(readonly, nonatomic) NSArray *audioTaskOutScores; // @synthesize audioTaskOutScores=_audioTaskOutScores;
@property(readonly, nonatomic) NSArray *audioTaskOutLabels; // @synthesize audioTaskOutLabels=_audioTaskOutLabels;
@property(readonly, nonatomic) NSArray *visionTaskOutScores; // @synthesize visionTaskOutScores=_visionTaskOutScores;
@property(readonly, nonatomic) NSArray *visionTaskExceedsThreshold; // @synthesize visionTaskExceedsThreshold=_visionTaskExceedsThreshold;
@property(readonly, nonatomic) NSArray *visionTaskOutLabels; // @synthesize visionTaskOutLabels=_visionTaskOutLabels;
- (id)initWithVisionTaskOutLabels:(id)arg1 visionTaskExceedsThreshold:(id)arg2 visionTaskOutScores:(id)arg3 audioTaskOutLabels:(id)arg4 audioTaskOutScores:(id)arg5 lastVersionOutScores:(id)arg6;

@end

