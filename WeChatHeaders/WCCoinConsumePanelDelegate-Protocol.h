//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WCCoinConsumePanel;

@protocol WCCoinConsumePanelDelegate <NSObject>
- (void)panelDidClickConsumeTips:(WCCoinConsumePanel *)arg1;
- (void)panelDidClose:(WCCoinConsumePanel *)arg1 isManualTrigger:(_Bool)arg2;
- (void)panelDidClickBalanceButton:(WCCoinConsumePanel *)arg1;
- (void)panelDidClickConsume:(WCCoinConsumePanel *)arg1;
@end
