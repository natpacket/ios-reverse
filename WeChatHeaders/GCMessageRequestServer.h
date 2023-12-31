//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GCChatRoomServer;

@interface GCMessageRequestServer : NSObject
{
    GCChatRoomServer *_chatRoomServer;
    long long _channelId;
    long long _requestSeq;
}

- (void).cxx_destruct;
@property(nonatomic) long long requestSeq; // @synthesize requestSeq=_requestSeq;
@property(nonatomic) long long channelId; // @synthesize channelId=_channelId;
@property(retain, nonatomic) GCChatRoomServer *chatRoomServer; // @synthesize chatRoomServer=_chatRoomServer;
- (void)clearMinAndMaxMsgSeq;
- (void)getChatRoomMsg:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)loadMessageGtSeq:(unsigned long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)loadMessageLtSeq:(unsigned long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)invalidatePreviousRequest;
- (id)initWithChatRoomServer:(id)arg1;

@end

