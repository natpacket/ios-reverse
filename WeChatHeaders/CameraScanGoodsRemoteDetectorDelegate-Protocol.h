//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CameraScanGoodsItemViewModel, CameraScanGoodsRemoteDetector, NSString;

@protocol CameraScanGoodsRemoteDetectorDelegate <NSObject>

@optional
- (void)onSendImageInfoFail:(CameraScanGoodsItemViewModel *)arg1 errorCode:(long long)arg2 errorMsg:(NSString *)arg3 isNetworkError:(_Bool)arg4;
- (void)detector:(CameraScanGoodsRemoteDetector *)arg1 didDetectRemoteItemFromAlbum:(CameraScanGoodsItemViewModel *)arg2;
@end

