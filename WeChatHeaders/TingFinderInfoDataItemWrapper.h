//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class MMListenFinderInfo, NSError, WCFinderDataItem;

@interface TingFinderInfoDataItemWrapper : MMObject
{
    WCFinderDataItem *_dataItem;
    NSError *_error;
    MMListenFinderInfo *_finderInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMListenFinderInfo *finderInfo; // @synthesize finderInfo=_finderInfo;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;

@end
