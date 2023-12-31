//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSData, NSString, WAPermissionActionSheetInfo, WAPermissionLaunchAction, WAPermissionLaunchRuntimeInfo, WAPermissionWeAppBindInfo, WAPublicResInfo, WAStatePermissionBytes;

@interface WAPermissionInfo : NSObject <WCTTableCoding>
{
    unsigned int _requestType;
    WAPublicResInfo *pubResInfo;
    NSString *_appID;
    NSData *_permissionBytes;
    WAPermissionWeAppBindInfo *_weAppBindInfo;
    WAPermissionLaunchAction *_launchAction;
    WAPermissionActionSheetInfo *_actionSheetInfo;
    WAPermissionLaunchRuntimeInfo *_runtimeInfo;
    WAStatePermissionBytes *_statePermissionBytes;
    NSString *_permissionJsonStr;
    NSString *_username;
    NSString *_opConfig;
    unsigned long long _expirationTime;
    NSString *_openId;
}

+ (void)__wcdb_index_13:(void *)arg1;
+ (void)__wcdb_column_constraint_12:(void *)arg1;
+ (id)swift_runtimeInfo;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)runtimeInfo;
+ (id)swift_openId;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)openId;
+ (id)swift_expirationTime;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)expirationTime;
+ (id)swift_opConfig;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)opConfig;
+ (id)swift_username;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)username;
+ (id)swift_permissionJsonStr;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)permissionJsonStr;
+ (id)swift_statePermissionBytes;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)statePermissionBytes;
+ (id)swift_actionSheetInfo;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)actionSheetInfo;
+ (id)swift_launchAction;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)launchAction;
+ (id)swift_weAppBindInfo;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)weAppBindInfo;
+ (id)swift_permissionBytes;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)permissionBytes;
+ (id)swift_appID;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)appID;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *openId; // @synthesize openId=_openId;
@property(nonatomic) unsigned long long expirationTime; // @synthesize expirationTime=_expirationTime;
@property(retain, nonatomic) NSString *opConfig; // @synthesize opConfig=_opConfig;
@property(nonatomic) unsigned int requestType; // @synthesize requestType=_requestType;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *permissionJsonStr; // @synthesize permissionJsonStr=_permissionJsonStr;
@property(retain, nonatomic) WAStatePermissionBytes *statePermissionBytes; // @synthesize statePermissionBytes=_statePermissionBytes;
@property(retain, nonatomic) WAPermissionLaunchRuntimeInfo *runtimeInfo; // @synthesize runtimeInfo=_runtimeInfo;
@property(retain, nonatomic) WAPermissionActionSheetInfo *actionSheetInfo; // @synthesize actionSheetInfo=_actionSheetInfo;
@property(retain, nonatomic) WAPermissionLaunchAction *launchAction; // @synthesize launchAction=_launchAction;
@property(retain, nonatomic) WAPermissionWeAppBindInfo *weAppBindInfo; // @synthesize weAppBindInfo=_weAppBindInfo;
@property(retain, nonatomic) NSData *permissionBytes; // @synthesize permissionBytes=_permissionBytes;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(retain, nonatomic) WAPublicResInfo *pubResInfo; // @synthesize pubResInfo;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;
@property(readonly) Class superclass;

@end

