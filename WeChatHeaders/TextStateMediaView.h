//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MMTextStateMediaDownloadImageCdnMgrExt-Protocol.h"
#import "MMTextStateVideoControlViewDelegate-Protocol.h"
#import "TextStateBaseMediaView-Protocol.h"
#import "WCPlayerConfigDelegate-Protocol.h"

@class CADisplayLink, MMTextStateMediaItem, MMTextStateVideoControlView, MMWebImageView, NSString, TextStateIcon, UIImage, UIImageView, WCPlayerView;
@protocol TextStateBaseMediaViewDelegate;

@interface TextStateMediaView : UIView <WCPlayerConfigDelegate, MMTextStateVideoControlViewDelegate, MMTextStateMediaDownloadImageCdnMgrExt, TextStateBaseMediaView>
{
    _Bool _muted;
    _Bool _forceMuted;
    id <TextStateBaseMediaViewDelegate> _textStateDelegate;
    MMTextStateMediaItem *_mediaItem;
    double _transitionProgress;
    UIImage *_defaultImage;
    TextStateIcon *_iconForDefaultImage;
    UIImage *_image;
    UIImageView *_imageView;
    MMWebImageView *_bigIconImageView;
    UIView *_shadowView;
    WCPlayerView *_playerView;
    MMTextStateVideoControlView *_controlView;
    double _imageCurrentTime;
    CADisplayLink *_imageDisplayLink;
    double _timestamp;
}

- (void).cxx_destruct;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) CADisplayLink *imageDisplayLink; // @synthesize imageDisplayLink=_imageDisplayLink;
@property(nonatomic) double imageCurrentTime; // @synthesize imageCurrentTime=_imageCurrentTime;
@property(retain, nonatomic) MMTextStateVideoControlView *controlView; // @synthesize controlView=_controlView;
@property(retain, nonatomic) WCPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) MMWebImageView *bigIconImageView; // @synthesize bigIconImageView=_bigIconImageView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) TextStateIcon *iconForDefaultImage; // @synthesize iconForDefaultImage=_iconForDefaultImage;
@property(retain, nonatomic) UIImage *defaultImage; // @synthesize defaultImage=_defaultImage;
@property(nonatomic) double transitionProgress; // @synthesize transitionProgress=_transitionProgress;
@property(retain, nonatomic) MMTextStateMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(nonatomic) __weak id <TextStateBaseMediaViewDelegate> textStateDelegate; // @synthesize textStateDelegate=_textStateDelegate;
@property(nonatomic, getter=isForceMuted) _Bool forceMuted; // @synthesize forceMuted=_forceMuted;
@property(nonatomic, getter=isMuted) _Bool muted; // @synthesize muted=_muted;
- (void)onTextStateMediaImageDownloadFail:(id)arg1;
- (void)onTextStateMediaImageDownloadSuccess:(id)arg1;
- (void)onTextStateMediaThumbDownloadFail:(id)arg1;
- (void)onTextStateMediaThumbDownloadSuccess:(id)arg1;
- (void)onVideoProgressChange:(double)arg1;
- (void)stopDisplayLink;
- (void)startDisplayLink;
- (void)tick:(id)arg1;
@property(readonly, nonatomic) double mediaAspectRatio;
- (void)resetPlayMedia;
- (void)pausePlayMedia;
- (void)startPlayMedia;
- (void)setMediaItem:(id)arg1 shouldAutoPlay:(_Bool)arg2;
- (void)updateBigIcon;
- (void)layoutSubviews;
- (void)initSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

