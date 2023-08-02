//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class EmoticonStoreReportInfo;

@protocol MMEmoticonStoreDownloadLogicDelegate <NSObject>

@optional
- (double)downloadViewMaxWidth;
- (void)onStoreDownloadLogicDisplayViewChanged;
- (_Bool)shouldShowWeCoinLongType;
- (EmoticonStoreReportInfo *)downloadLogicReportInfo;
- (void)handleUse;
- (void)handleReward;
- (void)onUninstall;
- (void)onDownloadCancel;
- (void)onDownloadFinished;
- (void)onTapGetEmoticonBtnFor:(unsigned long long)arg1;
@end
