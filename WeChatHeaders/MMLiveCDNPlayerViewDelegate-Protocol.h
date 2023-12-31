//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMLiveCommonSEIMsg, NSData, UIImage;

@protocol MMLiveCDNPlayerViewDelegate <NSObject>

@optional
- (void)onPlayEventRecvSEI:(MMLiveCommonSEIMsg *)arg1;
- (void)onPlayViewCoverLoadFinish:(UIImage *)arg1;
- (void)onPlayMuteForExternalPlaybackMode;
- (void)onPlayMuteByNotifyOuter:(_Bool)arg1;
- (void)onPlayMessageReceive:(NSData *)arg1;
- (void)onPlayChangeSize:(struct CGSize)arg1;
- (void)onPlayDisconnect;
- (void)onPlayProgress:(double)arg1;
- (void)onPlayEnd;
- (void)onPlayBegin;
- (void)onPlayLiveConnectSuccessful;
@end

