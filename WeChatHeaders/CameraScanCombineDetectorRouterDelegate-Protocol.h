//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CameraScanCombineReportActionBaseInfo, CameraScanGoodsItemViewModel, NSString;

@protocol CameraScanCombineDetectorRouterDelegate <NSObject>
- (CameraScanCombineReportActionBaseInfo *)curCombineReportBaseInfo;
- (void)onSendImageInfoFail:(CameraScanGoodsItemViewModel *)arg1 errorCode:(long long)arg2 errorMsg:(NSString *)arg3 isNetworkError:(_Bool)arg4;
- (void)onDetectScanGoodItemFromAlbum:(CameraScanGoodsItemViewModel *)arg1;
- (void)onDetectScanGoodItemFail:(CameraScanGoodsItemViewModel *)arg1 errCode:(unsigned int)arg2;
- (void)onDetectScanGoodItemRetrieval:(CameraScanGoodsItemViewModel *)arg1;
- (void)onDetectScanGoodItemAskForPreload:(CameraScanGoodsItemViewModel *)arg1;
- (void)onDetectScanGoodItemUpload:(CameraScanGoodsItemViewModel *)arg1;
- (void)onDetectScanGoodItemFound:(CameraScanGoodsItemViewModel *)arg1;
@end
