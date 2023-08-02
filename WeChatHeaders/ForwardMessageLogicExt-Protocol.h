//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CBaseContact, CContact, CMessageWrap, CaptureVideoInfo;

@protocol ForwardMessageLogicExt <NSObject>
- (void)onForwardMsgToContact:(CContact *)arg1 scene:(unsigned long long)arg2;
- (void)onPreForwardVideoToContact:(CBaseContact *)arg1 videoInfo:(CaptureVideoInfo *)arg2;
- (void)onPreForwardMsgToContact:(CBaseContact *)arg1 msgWrap:(CMessageWrap *)arg2;

@optional
- (void)onAfterForwardMsgToContact:(CBaseContact *)arg1 msgWrap:(CMessageWrap *)arg2 fromMsg:(CMessageWrap *)arg3;
@end

