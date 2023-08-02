//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AppDetailDelegate-Protocol.h"
#import "WCNetworkMediaPlayerDelegate-Protocol.h"

@class CMessageWrap, MMUIViewController, MMUIWindow, NSString, UIImageView;
@protocol ViewAppMsgControllerDelegate;

@interface ViewAppMsgController : NSObject <AppDetailDelegate, WCNetworkMediaPlayerDelegate>
{
    MMUIViewController *m_fromVC;
    id <ViewAppMsgControllerDelegate> m_delegate;
    MMUIWindow *m_fullScreenWindow;
    CMessageWrap *m_curWrapMsg;
    struct CGRect m_originFrame;
    UIImageView *m_thumbImageVew;
}

- (void).cxx_destruct;
- (void)onShareVideoToTimeline:(_Bool)arg1;
- (void)onShareVideoToFriend:(id)arg1;
- (void)onClickFavVideoMenu;
- (void)onClosePlayerForViewDetail:(id)arg1;
- (void)jumpToDetail:(id)arg1;
- (void)onClosePlayer;
- (_Bool)stopAtLastVideoFrameWhenPlayEnd;
- (void)OnAppDataPreview:(id)arg1 MsgWrap:(id)arg2;
- (void)viewAppMsg:(id)arg1 msg:(id)arg2 originFrame:(struct CGRect)arg3 thumbImageView:(id)arg4 delegate:(id)arg5;
- (void)viewAppMsg:(id)arg1 msg:(id)arg2 originFrame:(struct CGRect)arg3 delegate:(id)arg4;
- (void)viewAppMsg:(id)arg1;
- (void)PreviewAppMsg:(id)arg1 Pop:(_Bool)arg2;
- (void)JumpToViewStreamVideo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

