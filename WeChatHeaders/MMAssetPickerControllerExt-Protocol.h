//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMAssetInfo, NSDictionary, NSString;

@protocol MMAssetPickerControllerExt <NSObject>

@optional
- (void)onAssetPickerControllerDidRemoveAssetId:(NSString *)arg1;
- (void)onAssetPickerControllerDidAddAssetId:(NSString *)arg1;
- (void)onAssetPickerControllerFinishDragSelect;
- (void)onAssetPickerControllerFinishEditAssetInfo:(MMAssetInfo *)arg1;
- (void)onAssetPickerControllerChangeSelectInfosOrder;
- (void)onAssetPickerControllerChangeSelectInfoDict:(NSDictionary *)arg1 index:(long long)arg2;
- (void)onAssetPickerControllerChangeSelectInfo:(MMAssetInfo *)arg1 index:(long long)arg2;
@end

