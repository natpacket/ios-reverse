//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewControllerDelegate-Protocol.h"

@class CMessageWrap, ImageScrollView, MsgImgFullScreenViewController, UIView;

@protocol IntelligentMsgImgFullScreenMsgImgClickLogicDelegate <MMUIViewControllerDelegate>
- (void)onIntelligentClickShowImgMsgLocate:(CMessageWrap *)arg1 imageScrollView:(ImageScrollView *)arg2 vc:(MsgImgFullScreenViewController *)arg3;
- (UIView *)getMsgImgFullScreenMsgInView;
- (UIView *)getMediaViewWithMsgWrap:(CMessageWrap *)arg1;
- (struct CGRect)getMediaFrameWithMsgWrap:(CMessageWrap *)arg1;
@end

