//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMLiveConnectMicAudienceCameraOperationPageSheet;

@protocol MMLiveConnectMicAudienceCameraOperationPanelDelegate <NSObject>

@optional
- (void)onMMLiveConnectMicAudienceCameraOperationPanelLayoutUpdated:(MMLiveConnectMicAudienceCameraOperationPageSheet *)arg1;
- (void)onMMLiveConnectMicAudienceCameraOperationPanel:(MMLiveConnectMicAudienceCameraOperationPageSheet *)arg1 didCloseWithNextState:(unsigned long long)arg2;
- (void)onMMLiveConnectMicAudienceCameraOperationPanel:(MMLiveConnectMicAudienceCameraOperationPageSheet *)arg1 willCloseWithNextState:(unsigned long long)arg2;
- (void)onMMLiveConnectMicAudienceCameraOperationPanelSwitchCameraInvoked:(MMLiveConnectMicAudienceCameraOperationPageSheet *)arg1 completionBlock:(void (^)(_Bool))arg2;
- (void)onMMLiveConnectMicAudienceCameraOperationPanelMirrorFrontCameraInvoked:(MMLiveConnectMicAudienceCameraOperationPageSheet *)arg1;
- (void)onMMLiveConnectMicAudienceCameraOperationPanelWillShow:(MMLiveConnectMicAudienceCameraOperationPageSheet *)arg1;
@end

