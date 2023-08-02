//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FavSightViewDelegate-Protocol.h"
#import "WCPlayerConfigDelegate-Protocol.h"

@class MMUILabel, MMWebImageView, NSString, SightIconView, SimpleImgInfo;
@protocol FavPlayerViewProtocol, MMFullScreenItemViewDelegate;

@interface MMFullScreenItemView : UIView <FavSightViewDelegate, WCPlayerConfigDelegate>
{
    SightIconView *m_sightIconView;
    MMUILabel *m_hintLabel;
    _Bool m_isItemShowing;
    MMWebImageView *m_imageView;
    _Bool m_hasPlayVideo;
    _Bool m_sightToolViewHidden;
    id <MMFullScreenItemViewDelegate> _delegate;
    SimpleImgInfo *_imgInfo;
    UIView<FavPlayerViewProtocol> *_playerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView<FavPlayerViewProtocol> *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) SimpleImgInfo *imgInfo; // @synthesize imgInfo=_imgInfo;
@property(nonatomic) __weak id <MMFullScreenItemViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onPlayerClickCloseButton;
- (void)onGetVideoViewBottomLineCenterY:(double *)arg1 leftPartOffset:(double *)arg2 rightPartWidth:(double *)arg3;
- (void)onPlayerStartPlay;
- (void)onToolViewAutoClose;
- (void)onTapCloseButton:(id)arg1;
- (void)onTapSightIconView;
- (void)onFavSightSizeDidChange:(id)arg1;
- (void)onScreenDragCancel;
- (void)onScreenDragBegin;
- (_Bool)isNeedLazyDownload;
- (void)onSingleTap;
- (void)updateImage:(id)arg1;
- (_Bool)isReady;
- (void)HideDataExpiredView;
- (void)FavDataExpiredViewResize;
- (void)showFavDataExpiredView;
- (void)releaseContentView;
- (_Bool)isItemShowing;
- (void)onHide;
- (void)onShow;
- (void)onWilAnimateClose;
- (void)setAnimateFrame:(struct CGRect)arg1;
- (void)onWillAnimateShow;
- (void)tryPlaySight;
- (void)initContentView:(id)arg1;
- (void)setContentMode:(long long)arg1;
- (void)resize;
- (void)setFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
