//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MinimizeReportOpInfo : NSObject
{
    unsigned long long _opType;
    NSString *_miniSessionId;
    NSString *_aggreSessionId;
    unsigned long long _taskIdleTime;
    unsigned long long _aggreWindowExistTime;
    unsigned long long _singleTaskExistTime;
    unsigned long long _taskType;
    long long _taskOrder;
    unsigned long long _taskForegroundTime;
    unsigned long long _taskFoldTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long taskFoldTime; // @synthesize taskFoldTime=_taskFoldTime;
@property(nonatomic) unsigned long long taskForegroundTime; // @synthesize taskForegroundTime=_taskForegroundTime;
@property(nonatomic) long long taskOrder; // @synthesize taskOrder=_taskOrder;
@property(nonatomic) unsigned long long taskType; // @synthesize taskType=_taskType;
@property(nonatomic) unsigned long long singleTaskExistTime; // @synthesize singleTaskExistTime=_singleTaskExistTime;
@property(nonatomic) unsigned long long aggreWindowExistTime; // @synthesize aggreWindowExistTime=_aggreWindowExistTime;
@property(nonatomic) unsigned long long taskIdleTime; // @synthesize taskIdleTime=_taskIdleTime;
@property(retain, nonatomic) NSString *aggreSessionId; // @synthesize aggreSessionId=_aggreSessionId;
@property(retain, nonatomic) NSString *miniSessionId; // @synthesize miniSessionId=_miniSessionId;
@property(nonatomic) unsigned long long opType; // @synthesize opType=_opType;

@end

