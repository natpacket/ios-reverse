//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPlayerControlView.h"

@interface WCFinderLiveReplayPreviewPlayerControlView : WCPlayerControlView
{
    _Bool _startLoaded;
    CDUnknownBlockType _seekEndCallback;
    CDUnknownBlockType _startLoadedCompletion;
    CDUnknownBlockType _prepareToPlayCallback;
    CDUnknownBlockType _videoSizeChangeCallback;
    CDUnknownBlockType _onReceiveAllDataCallback;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType onReceiveAllDataCallback; // @synthesize onReceiveAllDataCallback=_onReceiveAllDataCallback;
@property(copy, nonatomic) CDUnknownBlockType videoSizeChangeCallback; // @synthesize videoSizeChangeCallback=_videoSizeChangeCallback;
@property(copy, nonatomic) CDUnknownBlockType prepareToPlayCallback; // @synthesize prepareToPlayCallback=_prepareToPlayCallback;
@property(copy, nonatomic) CDUnknownBlockType startLoadedCompletion; // @synthesize startLoadedCompletion=_startLoadedCompletion;
@property(copy, nonatomic) CDUnknownBlockType seekEndCallback; // @synthesize seekEndCallback=_seekEndCallback;
@property(nonatomic) _Bool startLoaded; // @synthesize startLoaded=_startLoaded;
- (void)onStartLoadedChanged;
- (void)onReceiveAllVideoData;
- (void)onVideoSizeChange:(struct CGSize)arg1;
- (void)onVideoPrepareToPlay:(id)arg1;
- (void)onDownloadProgressChange:(unsigned long long)arg1 total:(unsigned long long)arg2;
- (void)onPlayerProcessStateChanged:(unsigned long long)arg1;
- (void)onPlayerCreated;
- (void)onPlayerStateChanged:(unsigned long long)arg1;
- (void)onVideoPlayFail:(unsigned long long)arg1 errorCode:(int)arg2 LocalizedErrorDes:(id)arg3;
- (void)onPlayerSeekFail:(float)arg1;
- (void)onPlayerSeekCompelete:(double)arg1;

@end

