//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, ReceiveChatroomMsgResponse;

@interface GCRoomMessageResponse : NSObject
{
    _Bool _isFromCache;
    NSArray *_messageArray;
    ReceiveChatroomMsgResponse *_roomResponse;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isFromCache; // @synthesize isFromCache=_isFromCache;
@property(retain, nonatomic) ReceiveChatroomMsgResponse *roomResponse; // @synthesize roomResponse=_roomResponse;
@property(retain, nonatomic) NSArray *messageArray; // @synthesize messageArray=_messageArray;

@end
