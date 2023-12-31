//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class EditVideoAttr, EditVideoBGMSelectedMusicInfo, NSString, UIImage, UIViewController, UIWindow, WCEditVideoLayoutView;

@protocol WCEditVideoLayoutViewDelegate <NSObject>
- (void)postVideoByFinderFromEntrance:(long long)arg1;
- (void)editVideoLayoutViewDidPlayReachEnd:(WCEditVideoLayoutView *)arg1;
- (void)listenPlayProgressWithCMTime:(CDStruct_1b6d18a9)arg1;
- (void)returnToTimelineOrAlbum;
- (void)willMoveToWindow:(UIWindow *)arg1;
- (_Bool)isExceedTimelineTimeLimit;
- (double)getMinDuration;
- (float)getOutputTime;
- (NSString *)getAssetId;
- (NSString *)getAssetUrl;
- (UIImage *)getThumbImage;
- (struct CGSize)getImageRatioSize;
- (struct CGSize)getOriginalAssetSize;
- (EditVideoAttr *)getVideoAttr;
- (CDStruct_e83c9415)getEditedVideoTimeRange;
- (CDStruct_1b6d18a9)videoLayoutViewGetVideoDuration:(WCEditVideoLayoutView *)arg1;
- (void)onClickLaunchMiaoJianButton;
- (void)onClickEditVideoDoneButton;
- (void)onClickEditVideoCancelButton;
- (void)onOriginSoundChange:(_Bool)arg1;
- (void)onChooseVideoBGMDone:(EditVideoBGMSelectedMusicInfo *)arg1;
- (void)onCropTimeChange:(CDStruct_e83c9415)arg1;
- (void)onSeekTime:(double)arg1;
- (void)onCropCancel;
- (void)onCropDone:(CDStruct_e83c9415)arg1;
- (UIViewController *)currentViewController;
@end

