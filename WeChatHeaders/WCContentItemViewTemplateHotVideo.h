//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCContentItemBaseView.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCImageViewDelegate-Protocol.h"
#import "WCPlayerConfigViewControllerDelegate-Protocol.h"

@class NSString, WCDataItem, WCImageView, WCMediaItem, WCPlayerConfigViewController;

@interface WCContentItemViewTemplateHotVideo : WCContentItemBaseView <WCImageViewDelegate, WCPlayerConfigViewControllerDelegate, WCActionSheetDelegate, UIGestureRecognizerDelegate>
{
    WCDataItem *m_oDataItem;
    WCMediaItem *m_oMediaItem;
    WCImageView *m_oWCCoverImage;
    WCPlayerConfigViewController *_videoPlayerVC;
    unsigned long long _legalityType;
}

+ (double)heightForMedia:(id)arg1 showDetail:(_Bool)arg2;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long legalityType; // @synthesize legalityType=_legalityType;
@property(retain, nonatomic) WCPlayerConfigViewController *videoPlayerVC; // @synthesize videoPlayerVC=_videoPlayerVC;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onTapAttachButton:(id)arg1;
- (void)onCloseFullScreenPlayComplete:(id)arg1;
- (void)onCloseFullScreenPlay:(id)arg1;
- (void)onForwardSuccess:(id)arg1;
- (void)onForwardCancle:(id)arg1;
- (id)generateFavWithMediaWrap:(id)arg1;
- (id)generateMsgWithMediaWrap:(id)arg1;
- (void)onLongPress:(id)arg1;
- (void)OnDownloadSuccessForFavoriteAdd;
- (id)getImage;
- (id)getPlayerInfoWith:(_Bool)arg1;
- (void)playHotVideo;
- (void)onLongPressedWCImage:(id)arg1;
- (void)onClickWCImage:(id)arg1;
- (void)onLongTouch;
- (void)throwUrlMessage;
- (void)initViewsWithWCDataItem:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

