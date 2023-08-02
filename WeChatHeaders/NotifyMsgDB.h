//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WCTDatabase, WCTTable;

@interface NotifyMsgDB : NSObject
{
    WCTDatabase *_database;
    WCTTable *_notifyMsgTable;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCTTable *notifyMsgTable; // @synthesize notifyMsgTable=_notifyMsgTable;
@property(retain, nonatomic) WCTDatabase *database; // @synthesize database=_database;
- (id)getDBPath;
- (void)willRecoverDatabase;
- (void)didRecoverDatabase;
- (void)cleanTipsIDToMsgIDMapping;
- (void)cleanForbidMapping;
- (void)cleanDBXmlInfo;
- (void)cleanTimeoutMapping;
- (void)deleteNotifyInfoWithTipsID:(id)arg1;
- (id)getAllUnReadLiveEndNotifyInfo;
- (long long)getMsgSvrIDWithTipsID:(id)arg1;
- (void)updateAllToRead;
- (void)updateLiveEndWithTipsID:(id)arg1;
- (_Bool)isForbidWithTipsID:(id)arg1;
- (void)forbidMsgShowWithTipsID:(id)arg1;
- (id)getRequestNotifyList;
- (id)getMessageWrapWithTipID:(id)arg1;
- (id)getXmlInfoWithTipsID:(id)arg1;
- (void)addNotifyWithXmlInfo:(id)arg1;
- (_Bool)createNotifyMsgTable;
- (void)createTables;
- (_Bool)initDataBase;
- (void)dealloc;
- (id)init;

@end

