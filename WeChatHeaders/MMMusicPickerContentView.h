//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class MMUIActivityIndicatorView, NSString, RecommendedMusicInfo, UIImageView, UILabel, WCFlowLyricsView, WCStoryLyricWaveView;

@interface MMMusicPickerContentView : MMUIView
{
    _Bool _isFromBgmSearch;
    UIImageView *_musicLogoView;
    WCStoryLyricWaveView *_soundShapeView;
    WCFlowLyricsView *_flowLyricsView;
    MMUIActivityIndicatorView *_loadingView;
    UILabel *_songNameAndSingerNameView;
    RecommendedMusicInfo *_musicInfo;
    NSString *_musicLogoName;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *musicLogoName; // @synthesize musicLogoName=_musicLogoName;
@property(nonatomic) _Bool isFromBgmSearch; // @synthesize isFromBgmSearch=_isFromBgmSearch;
@property(retain, nonatomic) RecommendedMusicInfo *musicInfo; // @synthesize musicInfo=_musicInfo;
@property(retain, nonatomic) UILabel *songNameAndSingerNameView; // @synthesize songNameAndSingerNameView=_songNameAndSingerNameView;
@property(retain, nonatomic) MMUIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) WCFlowLyricsView *flowLyricsView; // @synthesize flowLyricsView=_flowLyricsView;
@property(retain, nonatomic) WCStoryLyricWaveView *soundShapeView; // @synthesize soundShapeView=_soundShapeView;
@property(retain, nonatomic) UIImageView *musicLogoView; // @synthesize musicLogoView=_musicLogoView;
- (void)setContentViewData:(id)arg1 withFromeBgmSearch:(_Bool)arg2;
- (_Bool)isAnimating;
- (void)startLoading;
- (void)replayFromFlowInMs:(unsigned long long)arg1;
- (void)replay;
- (void)readyToPlay;
- (void)setSelectState:(_Bool)arg1;
- (void)stopLoading;
- (void)addSongNameAndSingerNameView;
- (void)addFlowLyricsView;
- (void)addSoundShapeView;
- (void)addMusicLogo;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1 musicLogoName:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
