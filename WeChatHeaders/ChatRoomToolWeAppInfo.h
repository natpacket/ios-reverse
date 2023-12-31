//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSString;

@interface ChatRoomToolWeAppInfo : MMObject <PBCoding>
{
    NSString *_userName;
    NSString *_appUserName;
    NSString *_appPagePath;
    NSString *_appNickName;
    NSString *_appIconUrl;
}

+ (void)initialize;
+ (void)PBArrayAdd_appPagePath;
+ (void)PBArrayAdd_appUserName;
+ (void)PBArrayAdd_userName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appIconUrl; // @synthesize appIconUrl=_appIconUrl;
@property(retain, nonatomic) NSString *appNickName; // @synthesize appNickName=_appNickName;
@property(retain, nonatomic) NSString *appPagePath; // @synthesize appPagePath=_appPagePath;
@property(retain, nonatomic) NSString *appUserName; // @synthesize appUserName=_appUserName;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (void)copyFromDBWeAppInfo:(id)arg1;
- (id)genDBContactChatRoomToolWeApp;
- (void)copyFromOtherWeAppInfo:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

