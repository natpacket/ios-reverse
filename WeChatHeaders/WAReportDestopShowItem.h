//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAReportBaseItem.h"

@class NSString;

@interface WAReportDestopShowItem : WAReportBaseItem
{
    unsigned long long _destopEnterScene;
    NSString *_appidList;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *appidList; // @synthesize appidList=_appidList;
@property(nonatomic) unsigned long long destopEnterScene; // @synthesize destopEnterScene=_destopEnterScene;
- (id)reportString;

@end

