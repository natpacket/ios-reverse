//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderPushProfileViewParams : NSObject
{
    unsigned int _enterType;
    NSString *_lastSeenTid;
    unsigned long long _reportCommentScene;
    NSString *_redPacketLinkUrl;
    NSString *_redPacketCoverId;
    long long _redPacketJumpFrom;
}

- (void).cxx_destruct;
@property(nonatomic) long long redPacketJumpFrom; // @synthesize redPacketJumpFrom=_redPacketJumpFrom;
@property(retain, nonatomic) NSString *redPacketCoverId; // @synthesize redPacketCoverId=_redPacketCoverId;
@property(retain, nonatomic) NSString *redPacketLinkUrl; // @synthesize redPacketLinkUrl=_redPacketLinkUrl;
@property(nonatomic) unsigned int enterType; // @synthesize enterType=_enterType;
@property(nonatomic) unsigned long long reportCommentScene; // @synthesize reportCommentScene=_reportCommentScene;
@property(copy, nonatomic) NSString *lastSeenTid; // @synthesize lastSeenTid=_lastSeenTid;
- (id)init;

@end
