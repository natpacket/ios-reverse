//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMMusicMVEpisodeItemCellView, MMMusicMVPlayerBgView, NSString, UIGestureRecognizer;

@protocol MMMusicMVPlayerBgViewDelegate <NSObject>

@optional
- (_Bool)mvPlayerBgViewCanPerformDoubletap:(MMMusicMVPlayerBgView *)arg1;
- (_Bool)mvPlayerBgView:(MMMusicMVPlayerBgView *)arg1 shouldTransitToEpisodeIndex:(long long)arg2 fromIndex:(long long)arg3;
- (void)musicMVPlayerOnHideBufferingView;
- (void)musicMVPlayerOnShowBufferingView;
- (void)musicMVPlayerOnLongPress;
- (void)musicMVPlayerOnLikeWithGestureRecognizer:(UIGestureRecognizer *)arg1 inView:(MMMusicMVPlayerBgView *)arg2;
- (void)musicMVPlayerOnVideoAuthorChangedToUsrName:(NSString *)arg1 nickName:(NSString *)arg2;
- (void)musicMVPlayerOnVideoToggleJumpFinderProfileOperation:(NSString *)arg1;
- (void)musicMVPlayerOnVideoTogglePostOperation;
- (void)musicMVPlayerOnTappedVideo;
- (void)muiscMVPlayerOnTryPostVideo;
- (void)musicMVPlayerDidEndDisplayEpisodeView:(MMMusicMVEpisodeItemCellView *)arg1;
- (void)musicMVPlayerWillDisplayEpisodeView:(MMMusicMVEpisodeItemCellView *)arg1 ofIndex:(unsigned long long)arg2;
- (void)musicMVPlayerDidEndDragging;
- (void)musicMVPlayerDidDragWithTranslation:(double)arg1;
- (void)musicMVPlayerWillBeginDragging;
- (double)currentMusicTimeOffsetInMs;
@end

