//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface WCPayPluginTopMsgItem : NSObject <PBCoding>
{
    unsigned int _msgCreateTime;
    long long _msgSvrId;
    NSString *_msgContent;
    NSString *_username;
}

+ (void)initialize;
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_msgCreateTime;
+ (void)PBArrayAdd_msgContent;
+ (void)PBArrayAdd_msgSvrId;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) unsigned int msgCreateTime; // @synthesize msgCreateTime=_msgCreateTime;
@property(retain, nonatomic) NSString *msgContent; // @synthesize msgContent=_msgContent;
@property(nonatomic) long long msgSvrId; // @synthesize msgSvrId=_msgSvrId;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
