//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSMutableDictionary, NSRecursiveLock, NSString;

@interface ChatLogDataStat : NSObject <PBCoding>
{
    NSMutableDictionary *_dicFileInfo;
    NSMutableDictionary *_dicMsgTimeInfo;
    NSRecursiveLock *_markLock;
}

+ (_Bool)saveChatLogStat:(id)arg1;
+ (id)loadChatLogStatFromFile;
+ (void)initialize;
+ (void)PBArrayAdd_dicFileInfo;
- (void).cxx_destruct;
@property(retain, nonatomic) NSRecursiveLock *markLock; // @synthesize markLock=_markLock;
@property(retain, nonatomic) NSMutableDictionary *dicMsgTimeInfo; // @synthesize dicMsgTimeInfo=_dicMsgTimeInfo;
@property(retain, nonatomic) NSMutableDictionary *dicFileInfo; // @synthesize dicFileInfo=_dicFileInfo;
- (void)saveObject:(id)arg1 withKey:(id)arg2;
- (id)getObjectForKey:(id)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

