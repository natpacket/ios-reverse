//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString, WCGameLifeProfileJumpInfo;

@interface GameLifeContact : NSObject <WCTTableCoding>
{
    _Bool _isValid;
    unsigned int _accountType;
    unsigned int _sex;
    NSString *_username;
    NSString *_nickname;
    NSString *_avatarUrl;
    NSString *_tag;
    WCGameLifeProfileJumpInfo *_jumpInfo;
    unsigned long long _updateTime;
}

+ (void)__wcdb_column_constraint_8:(void *)arg1;
+ (id)swift_updateTime;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)updateTime;
+ (id)swift_jumpInfo;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)jumpInfo;
+ (id)swift_tag;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)tag;
+ (id)swift_sex;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)sex;
+ (id)swift_avatarUrl;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)avatarUrl;
+ (id)swift_nickname;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)nickname;
+ (id)swift_accountType;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)accountType;
+ (id)swift_username;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)username;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
@property(nonatomic) unsigned long long updateTime; // @synthesize updateTime=_updateTime;
@property(retain, nonatomic) WCGameLifeProfileJumpInfo *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(retain, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(nonatomic) unsigned int sex; // @synthesize sex=_sex;
@property(retain, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(nonatomic) unsigned int accountType; // @synthesize accountType=_accountType;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
- (id)toCContact;
@property(readonly, copy) NSString *description;
- (id)getJumpUrl;
- (id)initWithUsername:(id)arg1;
- (id)initWithChatUserInfo:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;
@property(readonly) Class superclass;

@end

