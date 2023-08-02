//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface FTSMCSItem : NSObject <PBCoding>
{
    float _score;
    unsigned int _baseTime;
    NSString *_key;
}

+ (void)setDeclineFactor:(float)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_baseTime;
+ (void)PBArrayAdd_score;
+ (void)PBArrayAdd_key;
- (void).cxx_destruct;
@property(nonatomic) unsigned int baseTime; // @synthesize baseTime=_baseTime;
@property(nonatomic) float score; // @synthesize score=_score;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (long long)compareByScoreDesc:(id)arg1;
- (void)updateScoreWithTime:(unsigned int)arg1;
- (void)addScore;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
