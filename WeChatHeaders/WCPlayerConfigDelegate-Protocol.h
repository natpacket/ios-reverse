//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIButton, WCDownloadArgsWrap;

@protocol WCPlayerConfigDelegate <NSObject>

@optional
- (void)onDataSourceChangeSuccessWithDownloadArgsWrap:(WCDownloadArgsWrap *)arg1;
- (void)onHiddenBufferingView;
- (void)onShowBufferingView;
- (void)onSeekToTime:(double)arg1;
- (void)onGetVideoSize:(struct CGSize)arg1;
- (void)onLoopPlayToEnd;
- (void)onPlayToEnd;
- (void)onVideoPause;
- (void)onToolViewAutoClose;
- (void)onVideoPlay;
- (void)onPlayerCreated;
- (void)onClickShareButton:(NSString *)arg1;
- (void)onTapAttachButton:(UIButton *)arg1;
- (void)onTapCloseButton:(UIButton *)arg1;
- (void)onTapSightIconView;
- (void)onSightIconProgressEnd;
@end

