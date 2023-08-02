//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSString;
@protocol TingReportService, TingReportServiceDelegate;

@protocol TingReportService <NSObject>
+ (id <TingReportService>)sharedInstance;
- (void)onReachabilityChange;
- (void)onAudioSessionRouteChanged;
- (void)didEnterBackground;
- (void)willEnterForeground;
- (void)markTingPlayResumeAction:(int)arg1;
- (void)markTingPlayPauseAction:(int)arg1;
- (void)markTingPlayStopAction:(int)arg1;
- (void)tryUpdateCurrentSessionId;
- (void)updateTingPlayerSessionId:(NSString *)arg1;
- (void)keepCurrentPlayerSessionId;
- (void)markAudioModuleInterrupted;
- (void)markAudioModuleResume;
- (void)markAudioModulePausePlay;
- (void)markPlayCenterClear;
- (void)markMinimizeCloseButtonClicked;
- (void)onPlayerAction:(int)arg1 context:(NSData *)arg2;
- (void)onClickWithLine:(NSData *)arg1 discoverItem:(NSData *)arg2 scene:(int)arg3;
- (void)onClickWithCategory:(NSData *)arg1 scene:(int)arg2 index:(int)arg3 fillBlock:(NSData * (^)(NSData *))arg4;
- (void)onClickWithItem:(NSData *)arg1 scene:(int)arg2 index:(int)arg3 fillBlock:(NSData * (^)(NSData *))arg4;
- (void)onClickWithItemPlayButton:(NSData *)arg1 scene:(int)arg2 index:(int)arg3 play:(_Bool)arg4 fillBlock:(NSData * (^)(NSData *))arg5;
- (void)onExposedWithLine:(NSData *)arg1 discoverItem:(NSData *)arg2 scene:(int)arg3;
- (void)onExposedWithCategory:(NSData *)arg1 scene:(int)arg2 index:(int)arg3 fillBlock:(NSData * (^)(NSData *))arg4;
- (void)onExposedWithItem:(NSData *)arg1 scene:(int)arg2 index:(int)arg3 fillBlock:(NSData * (^)(NSData *))arg4;
- (void)onActionWithActionAndScene:(int)arg1 scene:(int)arg2 fillBlock:(NSData * (^)(NSData *))arg3;
- (void)onActionWithActionAndContext:(int)arg1 context:(NSData *)arg2;
- (void)onActionWithContext:(NSData *)arg1;
- (void)setDelegate:(id <TingReportServiceDelegate>)arg1;
@end

