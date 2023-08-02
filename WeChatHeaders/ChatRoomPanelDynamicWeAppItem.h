//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSDictionary, NSString;

@interface ChatRoomPanelDynamicWeAppItem : NSObject <PBCoding>
{
    unsigned int _redDotFlag;
    unsigned int _jumpType;
    unsigned int _weAppVersion;
    unsigned int _weAppDebugMode;
    unsigned int _businessType;
    NSString *_enterId;
    NSString *_weAppUserName;
    NSString *_weAppPagePath;
    NSString *_h5Url;
    NSDictionary *_weAppTitleDic;
    NSDictionary *_weAppDescDic;
    NSString *_weAppIconUrl;
    NSString *_weAppDarkIconUrl;
    NSString *_weAppId;
}

+ (void)initialize;
+ (void)PBArrayAdd_weAppId;
+ (void)PBArrayAdd_businessType;
+ (void)PBArrayAdd_weAppDarkIconUrl;
+ (void)PBArrayAdd_weAppIconUrl;
+ (void)PBArrayAdd_weAppDescDic;
+ (void)PBArrayAdd_weAppTitleDic;
+ (void)PBArrayAdd_h5Url;
+ (void)PBArrayAdd_weAppDebugMode;
+ (void)PBArrayAdd_weAppPagePath;
+ (void)PBArrayAdd_weAppVersion;
+ (void)PBArrayAdd_weAppUserName;
+ (void)PBArrayAdd_jumpType;
+ (void)PBArrayAdd_redDotFlag;
+ (void)PBArrayAdd_enterId;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *weAppId; // @synthesize weAppId=_weAppId;
@property(nonatomic) unsigned int businessType; // @synthesize businessType=_businessType;
@property(retain, nonatomic) NSString *weAppDarkIconUrl; // @synthesize weAppDarkIconUrl=_weAppDarkIconUrl;
@property(retain, nonatomic) NSString *weAppIconUrl; // @synthesize weAppIconUrl=_weAppIconUrl;
@property(retain, nonatomic) NSDictionary *weAppDescDic; // @synthesize weAppDescDic=_weAppDescDic;
@property(retain, nonatomic) NSDictionary *weAppTitleDic; // @synthesize weAppTitleDic=_weAppTitleDic;
@property(retain, nonatomic) NSString *h5Url; // @synthesize h5Url=_h5Url;
@property(nonatomic) unsigned int weAppDebugMode; // @synthesize weAppDebugMode=_weAppDebugMode;
@property(retain, nonatomic) NSString *weAppPagePath; // @synthesize weAppPagePath=_weAppPagePath;
@property(nonatomic) unsigned int weAppVersion; // @synthesize weAppVersion=_weAppVersion;
@property(retain, nonatomic) NSString *weAppUserName; // @synthesize weAppUserName=_weAppUserName;
@property(nonatomic) unsigned int jumpType; // @synthesize jumpType=_jumpType;
@property(nonatomic) unsigned int redDotFlag; // @synthesize redDotFlag=_redDotFlag;
@property(retain, nonatomic) NSString *enterId; // @synthesize enterId=_enterId;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

