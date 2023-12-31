//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSString, WCFinderDataItem, WCFinderLiveShareItem;

@interface MMFinderLiveMinimizationData : MMObject <PBCoding>
{
    unsigned long long _liveId;
    WCFinderDataItem *_finderDataItem;
    WCFinderLiveShareItem *_finderLiveShareItem;
}

+ (void)initialize;
+ (void)PBArrayAdd_finderLiveShareItem;
+ (void)PBArrayAdd_finderDataItem;
+ (void)PBArrayAdd_liveId;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveShareItem *finderLiveShareItem; // @synthesize finderLiveShareItem=_finderLiveShareItem;
@property(retain, nonatomic) WCFinderDataItem *finderDataItem; // @synthesize finderDataItem=_finderDataItem;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;
- (id)initWithLiveId:(unsigned long long)arg1 dataItem:(id)arg2;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

