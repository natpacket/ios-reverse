//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, WxaMigrateInfo;

@interface LaunchAction : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int actionCode; // @dynamic actionCode;
@property(retain, nonatomic) NSString *alertMsg; // @dynamic alertMsg;
@property(retain, nonatomic) NSString *alertTitle; // @dynamic alertTitle;
@property(retain, nonatomic) WxaMigrateInfo *migrateInfo; // @dynamic migrateInfo;
@property(nonatomic) _Bool needHistoryList; // @dynamic needHistoryList;
@property(retain, nonatomic) NSString *openUrl; // @dynamic openUrl;

@end

