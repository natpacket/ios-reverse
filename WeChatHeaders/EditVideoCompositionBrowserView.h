//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "MAVVideoCompositionPlayerDelegate-Protocol.h"

@class MAVVideoComposition, MAVVideoCompositionPlayer, NSString;
@protocol EditVideoCompositionBrowserViewDelegate;

@interface EditVideoCompositionBrowserView : MMUIView <MAVVideoCompositionPlayerDelegate>
{
    _Bool _isPlayingBeforeEnterBackground;
    id <EditVideoCompositionBrowserViewDelegate> _delegate;
    MAVVideoCompositionPlayer *_videoPlayer;
    MAVVideoComposition *_composition;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isPlayingBeforeEnterBackground; // @synthesize isPlayingBeforeEnterBackground=_isPlayingBeforeEnterBackground;
@property(retain, nonatomic) MAVVideoComposition *composition; // @synthesize composition=_composition;
@property(retain, nonatomic) MAVVideoCompositionPlayer *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
@property(nonatomic) __weak id <EditVideoCompositionBrowserViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onTimelineViewEnterForeground:(id)arg1;
- (void)onTimelineViewEnterBackground:(id)arg1;
- (void)videoCompositionPlayerPlayCompleted:(id)arg1;
- (void)videoCompositionPlayerProgressUpdated:(id)arg1 currentTime:(CDStruct_1b6d18a9)arg2;
- (double)listenTimeIntervalInSection;
- (void)updateComposition:(id)arg1;
- (struct CGRect)getVideoPreviewFrame;
- (void)dealloc;
- (void)refreshSurface;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)setMute:(_Bool)arg1;
- (void)pause;
- (void)replay;
- (void)play;
- (_Bool)isPlaying;
- (void)removeNotificationObserver;
- (void)addNotificationObserver;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

