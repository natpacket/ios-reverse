//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class CmdList, SKBuiltinBuffer_t;

@interface NewSyncResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) CmdList *cmdList; // @dynamic cmdList;
@property(nonatomic) unsigned int continueFlag; // @dynamic continueFlag;
@property(retain, nonatomic) SKBuiltinBuffer_t *keyBuf; // @dynamic keyBuf;
@property(nonatomic) unsigned int onlineVersion; // @dynamic onlineVersion;
@property(nonatomic) int ret; // @dynamic ret;
@property(nonatomic) unsigned int status; // @dynamic status;
@property(nonatomic) unsigned int svrTime; // @dynamic svrTime;
@property(retain, nonatomic) SKBuiltinBuffer_t *syncUniqKeyBuf; // @dynamic syncUniqKeyBuf;

@end
