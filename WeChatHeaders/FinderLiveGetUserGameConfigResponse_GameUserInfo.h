//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveGetUserGameConfigResponse_GameActivityBanner, FinderLiveGetUserGameConfigResponse_GameAppInfo, FinderLiveGetUserGameConfigResponse_GameLiveInfo, FinderLiveGetUserGameConfigResponse_GeneralCreateLivePrepareInfo, FinderLiveGetUserGameConfigResponse_UserStat, NSString;

@interface FinderLiveGetUserGameConfigResponse_GameUserInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderLiveGetUserGameConfigResponse_GameAppInfo *appInfo; // @dynamic appInfo;
@property(retain, nonatomic) NSString *errorMsg; // @dynamic errorMsg;
@property(retain, nonatomic) FinderLiveGetUserGameConfigResponse_GameActivityBanner *gameActivityBanner; // @dynamic gameActivityBanner;
@property(retain, nonatomic) FinderLiveGetUserGameConfigResponse_GameLiveInfo *gameLiveInfo; // @dynamic gameLiveInfo;
@property(retain, nonatomic) FinderLiveGetUserGameConfigResponse_GeneralCreateLivePrepareInfo *prepareInfo; // @dynamic prepareInfo;
@property(retain, nonatomic) FinderLiveGetUserGameConfigResponse_UserStat *userStat; // @dynamic userStat;

@end
