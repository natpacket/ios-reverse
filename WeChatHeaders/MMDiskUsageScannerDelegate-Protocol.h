//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMDiskUsageScanStat;

@protocol MMDiskUsageScannerDelegate <NSObject>
- (void)onDiskUsageScanFinishedWithScanStat:(MMDiskUsageScanStat *)arg1;
- (void)onDiskUsageScanCancel;
- (void)onDiskUsageScanStart;

@optional
- (void)onDiskUsageScanProgress:(float)arg1 isAvailabled:(_Bool)arg2;
@end

