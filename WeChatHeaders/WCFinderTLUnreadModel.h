//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCFinderRedDotNotifyExt-Protocol.h"

@class NSString;

@interface WCFinderTLUnreadModel : NSObject <WCFinderRedDotNotifyExt>
{
    _Bool _hiddenAllBubble;
    _Bool _showPrivateMSGTips;
    double _topBlankHeight;
    long long _unReadMSGCount;
}

@property(nonatomic) _Bool showPrivateMSGTips; // @synthesize showPrivateMSGTips=_showPrivateMSGTips;
@property(nonatomic) long long unReadMSGCount; // @synthesize unReadMSGCount=_unReadMSGCount;
@property(nonatomic) _Bool hiddenAllBubble; // @synthesize hiddenAllBubble=_hiddenAllBubble;
@property(nonatomic) double topBlankHeight; // @synthesize topBlankHeight=_topBlankHeight;
- (void)onFinderNotifyPrivateMsgTipsChange;
- (void)onFinderNotifyWechatUnreadMentionCountNeedReload;
- (id)getCurCommentFailTidArray;
- (id)getCurMsgBubbleShowStateInfo;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

