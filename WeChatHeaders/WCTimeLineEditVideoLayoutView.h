//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCEditVideoLayoutView.h"

@class NSMutableArray;

@interface WCTimeLineEditVideoLayoutView : WCEditVideoLayoutView
{
    _Bool _shouldRecoverLyricsWidget;
    NSMutableArray *_currentMusicLyrics;
    double _currentLyricTotalTime;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldRecoverLyricsWidget; // @synthesize shouldRecoverLyricsWidget=_shouldRecoverLyricsWidget;
@property(nonatomic) double currentLyricTotalTime; // @synthesize currentLyricTotalTime=_currentLyricTotalTime;
@property(retain, nonatomic) NSMutableArray *currentMusicLyrics; // @synthesize currentMusicLyrics=_currentMusicLyrics;
- (void)setPlayerTimeControlStatusChangeBlock;
- (void)EditVideoBGMViewLyricUpdate:(id)arg1 totalTime:(double)arg2;
- (void)editImageViewLyricsWidgetHadBeenDoubleTap;
- (void)editImageViewLyricsWidgetHadBeenDeleted;
- (unsigned long long)setBGMViewButtonOption;
- (void)onEditSuccess:(_Bool)arg1 withTimeRange:(CDStruct_e83c9415)arg2;
- (void)EditVideoBGMViewLyricOnOffStateChange:(_Bool)arg1;
- (void)_recoverLyricsWidget;
- (_Bool)recoverBGMViewForEditVideoAttr:(id)arg1;
- (void)initEditImageView;

@end

