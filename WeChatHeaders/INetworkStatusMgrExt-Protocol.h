//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString;

@protocol INetworkStatusMgrExt

@optional
- (void)onNetworkWeakChanged:(_Bool)arg1 currentRTT:(unsigned int)arg2;
- (void)onNetworkCheckFinished:(_Bool)arg1 baseNetOK:(_Bool)arg2 longLinkOK:(_Bool)arg3 kvString:(NSString *)arg4;
- (void)onNetworkStatusChange:(unsigned int)arg1;
@end

