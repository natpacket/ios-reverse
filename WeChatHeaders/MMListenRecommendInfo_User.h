//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenUserInfo, NSString;

@interface MMListenRecommendInfo_User : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *headimg; // @dynamic headimg;
@property(retain, nonatomic) NSString *nickname; // @dynamic nickname;
@property(nonatomic) unsigned long long timestamp; // @dynamic timestamp;
@property(nonatomic) unsigned long long uin; // @dynamic uin;
@property(retain, nonatomic) MMListenUserInfo *userInfo; // @dynamic userInfo;
@property(retain, nonatomic) NSString *username; // @dynamic username;

@end

