//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WCTDatabase, WCTTable;

@interface AdPushMsgDBMgr : NSObject
{
    WCTDatabase *_db;
    WCTTable *_pushMsgTable;
}

+ (id)MagicPushMsgDBPath;
- (void).cxx_destruct;
@property(retain, nonatomic) WCTTable *pushMsgTable; // @synthesize pushMsgTable=_pushMsgTable;
@property(retain, nonatomic) WCTDatabase *db; // @synthesize db=_db;
- (void)dealloc;
- (void)clearOverTimeMsg;
- (void)insertNewPushMsg:(id)arg1;
- (_Bool)clearSpecificSlotMsg:(id)arg1;
- (id)getSpecificSlotMsg:(id)arg1;
- (id)setupTableWithName:(id)arg1 tableClass:(Class)arg2;
- (void)initDB;
- (id)init;

@end

