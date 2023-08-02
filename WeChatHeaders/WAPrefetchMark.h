//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface WAPrefetchMark : NSObject <PBCoding>
{
    unsigned int _reportKey;
    unsigned int _packageType;
    NSString *_username;
    unsigned long long _appVersion;
    NSString *_moduleName;
    NSString *_appid;
}

+ (void)initialize;
+ (void)PBArrayAdd_appid;
+ (void)PBArrayAdd_moduleName;
+ (void)PBArrayAdd_packageType;
+ (void)PBArrayAdd_reportKey;
+ (void)PBArrayAdd_appVersion;
+ (void)PBArrayAdd_username;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(copy, nonatomic) NSString *moduleName; // @synthesize moduleName=_moduleName;
@property(nonatomic) unsigned int packageType; // @synthesize packageType=_packageType;
@property(nonatomic) unsigned int reportKey; // @synthesize reportKey=_reportKey;
@property(nonatomic) unsigned long long appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (id)uniqueKey;
- (id)initWithInfoData:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

