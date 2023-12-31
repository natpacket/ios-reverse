//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSArray, NSData, NSMutableDictionary, NSString, OrderedDictionary;

@interface WCFinderGroupLiveChatHistoryModel : NSObject <PBCoding>
{
    NSData *_lastBuffer;
    OrderedDictionary *_cacheChatHistoryDict;
    NSMutableDictionary *_tempClientIdAndSeqDict;
    NSArray *_cacheChatHistoryItemList;
    NSArray *_cacheChatHistoryItemKeyList;
}

+ (void)initialize;
+ (void)PBArrayAdd_cacheChatHistoryItemKeyList;
+ (void)PBArrayAdd_cacheChatHistoryItemList;
+ (void)PBArrayAdd_tempClientIdAndSeqDict;
+ (void)PBArrayAdd_lastBuffer;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *cacheChatHistoryItemKeyList; // @synthesize cacheChatHistoryItemKeyList=_cacheChatHistoryItemKeyList;
@property(retain, nonatomic) NSArray *cacheChatHistoryItemList; // @synthesize cacheChatHistoryItemList=_cacheChatHistoryItemList;
@property(retain, nonatomic) NSMutableDictionary *tempClientIdAndSeqDict; // @synthesize tempClientIdAndSeqDict=_tempClientIdAndSeqDict;
@property(retain, nonatomic) OrderedDictionary *cacheChatHistoryDict; // @synthesize cacheChatHistoryDict=_cacheChatHistoryDict;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

