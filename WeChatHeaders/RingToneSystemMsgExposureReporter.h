//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KvReportBaseItem.h"

@class NSString;

@interface RingToneSystemMsgExposureReporter : KvReportBaseItem
{
    unsigned int _titleType;
    unsigned long long _type;
    unsigned long long _action;
    NSString *_wording;
    NSString *_feedID;
    NSString *_uin;
    NSString *_userName;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int titleType; // @synthesize titleType=_titleType;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *uin; // @synthesize uin=_uin;
@property(copy, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;
@property(copy, nonatomic) NSString *wording; // @synthesize wording=_wording;
@property(nonatomic) unsigned long long action; // @synthesize action=_action;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)doReport;
- (unsigned int)reportKvId;
- (id)reportOrderedFieldNameArr;
- (unsigned int)reportNSStringPreprocessType;

@end

