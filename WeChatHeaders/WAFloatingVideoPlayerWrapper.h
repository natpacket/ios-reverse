//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAFloatingViewBaseWrapper.h"

@protocol WAStreamPlayerInterface;

@interface WAFloatingVideoPlayerWrapper : WAFloatingViewBaseWrapper
{
    _Bool _originEnablePageGesture;
    _Bool _originEnablePageGestureFull;
    _Bool _originShowDanmu;
    _Bool _originHideCoverMask;
    unsigned int _originControlParam;
    id <WAStreamPlayerInterface> _videoPlayerView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WAStreamPlayerInterface> videoPlayerView; // @synthesize videoPlayerView=_videoPlayerView;
@property(nonatomic) _Bool originHideCoverMask; // @synthesize originHideCoverMask=_originHideCoverMask;
@property(nonatomic) unsigned int originControlParam; // @synthesize originControlParam=_originControlParam;
@property(nonatomic) _Bool originShowDanmu; // @synthesize originShowDanmu=_originShowDanmu;
@property(nonatomic) _Bool originEnablePageGestureFull; // @synthesize originEnablePageGestureFull=_originEnablePageGestureFull;
@property(nonatomic) _Bool originEnablePageGesture; // @synthesize originEnablePageGesture=_originEnablePageGesture;
- (id)videoURL;
- (id)getCurrentSnapShotImage;
- (_Bool)isLoading;
- (_Bool)canFloat;
- (void)stop;
- (void)play;
- (void)pause;
- (id)playerView;
- (void)resetParams;
- (void)setParams;
- (void)updateFromDic:(id)arg1;

@end

