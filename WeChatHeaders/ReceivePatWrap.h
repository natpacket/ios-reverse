//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface ReceivePatWrap : NSObject <PBCoding>
{
    long long _serverId;
    NSString *_chatUserName;
    unsigned long long _createTime;
}

+ (void)initialize;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_chatUserName;
+ (void)PBArrayAdd_serverId;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *chatUserName; // @synthesize chatUserName=_chatUserName;
@property(nonatomic) long long serverId; // @synthesize serverId=_serverId;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

