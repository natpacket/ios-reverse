//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface MusicLiveCheckPermissionResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *finderunicommentAppname; // @dynamic finderunicommentAppname;
@property(retain, nonatomic) NSString *finderunicommentEntityId; // @dynamic finderunicommentEntityId;
@property(nonatomic) unsigned long long permissionBits; // @dynamic permissionBits;
@property(retain, nonatomic) NSString *songid; // @dynamic songid;
@property(retain, nonatomic) NSString *statusVerifyInfo; // @dynamic statusVerifyInfo;

@end

