//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, ShakeGetResponse, ShakeItemBase, ShakeMusicInfo, ShakeReportResponse;

@protocol ShakeLogicProxyDelegate <NSObject>

@optional
- (void)onShakeStop;
- (void)onShakeTvReportFail:(int)arg1 ErrMsg:(NSString *)arg2;
- (void)onShakeTvReportEndWithTvItem:(ShakeItemBase *)arg1;
- (void)onShakeMusicReportFail:(int)arg1 ErrMsg:(NSString *)arg2;
- (void)onShakeMusicReportEndWithMusicItem:(ShakeMusicInfo *)arg1;
- (void)onShakeGetFail:(NSString *)arg1;
- (void)onShakeReportFail:(NSString *)arg1;
- (void)onShakeGetEndWithResult:(ShakeGetResponse *)arg1;
- (void)onShakeReportEndWithResult:(ShakeReportResponse *)arg1;
@end

