//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, WXGBackupMMDB;

@interface WXGRoamMsgProducer : NSObject
{
    unsigned int _fromTimeSec;
    unsigned int _toTimeSec;
    NSString *_userName;
    unsigned long long _trueOffset;
    unsigned long long _lastRowID;
    unsigned long long _filterMsgCnt;
    WXGBackupMMDB *_backupMMDB;
    NSMutableArray *_msgArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *msgArray; // @synthesize msgArray=_msgArray;
@property(retain, nonatomic) WXGBackupMMDB *backupMMDB; // @synthesize backupMMDB=_backupMMDB;
@property(nonatomic) unsigned long long filterMsgCnt; // @synthesize filterMsgCnt=_filterMsgCnt;
@property(nonatomic) unsigned long long lastRowID; // @synthesize lastRowID=_lastRowID;
@property(nonatomic) unsigned long long trueOffset; // @synthesize trueOffset=_trueOffset;
@property(nonatomic) unsigned int toTimeSec; // @synthesize toTimeSec=_toTimeSec;
@property(nonatomic) unsigned int fromTimeSec; // @synthesize fromTimeSec=_fromTimeSec;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (id)getMsgOffset:(unsigned long long)arg1;
- (id)init;

@end

