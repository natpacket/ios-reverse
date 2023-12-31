//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMMusicLiveVCTopBarView, MusicLiveGetSongStatusResp_MusicianInfo, MusicSourceViewInfo, NSString, UIImage;

@protocol MMMusicLiveVCTopBarViewDelegate <NSObject>
- (_Bool)isChannelMusic;
- (void)onTopBarJumpMusician:(MusicLiveGetSongStatusResp_MusicianInfo *)arg1;
- (void)onClickAudioTypeButton;
- (MusicSourceViewInfo *)onMusicLiveTopBarViewRequestSourceViewInfo:(MMMusicLiveVCTopBarView *)arg1;
- (NSString *)requestGetAppName;
- (UIImage *)requestGetAppIconImageWithSize:(struct CGSize)arg1;
- (void)onTopBarOpenApp;
- (void)onTopBarOpenMusicInfoHalfScreen;
- (void)onTopBarTappedBack;
@end

