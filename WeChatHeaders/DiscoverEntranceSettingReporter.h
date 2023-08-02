//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KvReportBaseItem.h"

@class NSString;

@interface DiscoverEntranceSettingReporter : KvReportBaseItem
{
    NSString *_sessionId;
    unsigned long long _action;
    unsigned long long _entranceType;
    unsigned long long _switchType;
    NSString *_exposedItemsString;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *exposedItemsString; // @synthesize exposedItemsString=_exposedItemsString;
@property(nonatomic) unsigned long long switchType; // @synthesize switchType=_switchType;
@property(nonatomic) unsigned long long entranceType; // @synthesize entranceType=_entranceType;
@property(nonatomic) unsigned long long action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (void)doReport;
- (id)reportOrderedFieldNameArr;
- (unsigned int)reportKvId;
- (void)setExposedItems:(id)arg1;

@end

