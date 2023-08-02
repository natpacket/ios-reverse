//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MsgNewTipsBarReporter : NSObject
{
    NSString *_chatName;
    unsigned long long _userRole;
    unsigned long long _roomMemberCount;
    unsigned long long _tipsBarCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long tipsBarCount; // @synthesize tipsBarCount=_tipsBarCount;
@property(nonatomic) unsigned long long roomMemberCount; // @synthesize roomMemberCount=_roomMemberCount;
@property(nonatomic) unsigned long long userRole; // @synthesize userRole=_userRole;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;
- (unsigned long long)reportTypeForTipsItem:(id)arg1;
- (void)reportAction:(unsigned long long)arg1 userRole:(unsigned long long)arg2 chatName:(id)arg3 chatRoomUV:(unsigned long long)arg4 barItemType:(unsigned long long)arg5 barPositionIndex:(unsigned long long)arg6 barListLength:(unsigned long long)arg7 barCloseScene:(unsigned long long)arg8 topItemId:(id)arg9 liveId:(id)arg10 topMsgType:(unsigned long long)arg11 topMsgSubType:(unsigned long long)arg12 topMsgBizType:(unsigned long long)arg13 topMsgId:(long long)arg14 topMsgRechableType:(unsigned long long)arg15 actionTs:(unsigned long long)arg16;
- (void)reportAction:(unsigned long long)arg1 barItemType:(unsigned long long)arg2 barPositionIndex:(unsigned long long)arg3 barCloseScene:(unsigned long long)arg4 topItemId:(id)arg5 liveId:(id)arg6 topMsgType:(unsigned long long)arg7 topMsgSubType:(unsigned long long)arg8 topMsgBizType:(unsigned long long)arg9 topMsgId:(long long)arg10 topMsgRechableType:(unsigned long long)arg11;
- (void)reportTopMessageRelatedAction:(unsigned long long)arg1 topItemId:(id)arg2 topMsgWrap:(id)arg3 barPositionIndex:(unsigned long long)arg4 barCloseScene:(unsigned long long)arg5 topMsgRechableType:(unsigned long long)arg6;
- (void)reportTopMessageRelatedAction:(unsigned long long)arg1 topItemId:(id)arg2 topMsgWrap:(id)arg3;
- (void)reportBarRelatedAction:(unsigned long long)arg1 tipsItem:(id)arg2 barPositionIndex:(unsigned long long)arg3 barCloseScene:(unsigned long long)arg4;
- (void)reportBarCloseActionWithTipsItem:(id)arg1 barPositionIndex:(unsigned long long)arg2 barCloseScene:(unsigned long long)arg3;
- (void)reportBarRelatedAction:(unsigned long long)arg1 tipsItem:(id)arg2 barPositionIndex:(unsigned long long)arg3;
- (void)reportSimpleAction:(unsigned long long)arg1;
- (void)reportTipsBarExpandViewActionHide;
- (void)reportTipsBarExpandViewActionShow;

@end

