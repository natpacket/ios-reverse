//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewControllerDelegate-Protocol.h"

@class MMSessionInfo, MainFrameCellData, NSIndexPath, NSString;

@protocol MainSessionEditingLogicDelegate <MMUIViewControllerDelegate>
- (void)onLogicOpenSession:(MMSessionInfo *)arg1;
- (void)onLogicDeleteSessionByUsername:(NSString *)arg1;
- (void)onLogicHideSession:(MMSessionInfo *)arg1;
- (long long)logicGetCountForSection:(long long)arg1;
- (void)logicUpdateSession:(MMSessionInfo *)arg1;
- (MainFrameCellData *)logicGetCellDataAtIndexPath:(NSIndexPath *)arg1;
- (MMSessionInfo *)logicGetSessionAtIndexPath:(NSIndexPath *)arg1;
@end

