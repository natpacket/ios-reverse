//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface MMFPSReportData : NSObject <PBCoding>
{
    double _totalTime;
    double _dropFrameTime;
}

+ (void)initialize;
+ (void)PBArrayAdd_dropFrameTime;
+ (void)PBArrayAdd_totalTime;
@property(nonatomic) double dropFrameTime; // @synthesize dropFrameTime=_dropFrameTime;
@property(nonatomic) double totalTime; // @synthesize totalTime=_totalTime;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
