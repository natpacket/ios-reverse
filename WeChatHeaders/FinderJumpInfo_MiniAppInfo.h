//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface FinderJumpInfo_MiniAppInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (unsigned long long)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)archivedWCTValue;

// Remaining properties
@property(retain, nonatomic) NSString *appId; // @dynamic appId;
@property(retain, nonatomic) NSString *appUsername; // @dynamic appUsername;
@property(retain, nonatomic) NSData *extraData; // @dynamic extraData;
@property(retain, nonatomic) NSString *fetchInfoId; // @dynamic fetchInfoId;
@property(nonatomic) _Bool hideDefaultBar; // @dynamic hideDefaultBar;
@property(nonatomic) _Bool hideDragBar; // @dynamic hideDragBar;
@property(nonatomic) unsigned int launchAnimationType; // @dynamic launchAnimationType;
@property(retain, nonatomic) NSString *path; // @dynamic path;
@property(retain, nonatomic) NSString *productPathCookie; // @dynamic productPathCookie;
@property(retain, nonatomic) NSString *requestId; // @dynamic requestId;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *sceneNote; // @dynamic sceneNote;
@property(nonatomic) unsigned int versionType; // @dynamic versionType;

@end

