//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMMusicPlayerErrInfo, NSString;

@protocol ICanvasMusicMgrExt <NSObject>

@optional
- (void)onMusicPlayError:(NSString *)arg1 errorInfo:(MMMusicPlayerErrInfo *)arg2;
- (void)onMusicPlayTimeChanged:(NSString *)arg1 currentTime:(double)arg2 duration:(double)arg3;
- (void)onMusicPlayStatusChanged:(NSString *)arg1 playState:(long long)arg2;
@end
