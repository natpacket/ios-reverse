//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCPayTransferMoneyAntiCheatButtonDelegate <NSObject>

@optional
- (void)onWCPayAntiCheatButtonClickWithH5:(NSString *)arg1;
- (void)onWCPayAntiCheatButtonClickWithNative:(NSString *)arg1;
- (void)onWCPayAntiCheatButtonClickWithMiniProgram:(NSString *)arg1 path:(NSString *)arg2;
- (void)onWCPayAntiCheatButtonClick:(NSString *)arg1 jumpType:(unsigned int)arg2 username:(NSString *)arg3 path:(NSString *)arg4;
@end

