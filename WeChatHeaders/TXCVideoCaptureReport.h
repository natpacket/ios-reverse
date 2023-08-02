//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TXCVideoReportBase.h"

#import "TXICameraCapturerInterfaceDelegate-Protocol.h"
#import "TXIScreenCaptureDelegate-Protocol.h"

@class NSString;
@protocol TXCVideoCaptureReportDelegate;

@interface TXCVideoCaptureReport : TXCVideoReportBase <TXICameraCapturerInterfaceDelegate, TXIScreenCaptureDelegate>
{
    id <TXCVideoCaptureReportDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <TXCVideoCaptureReportDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onScreenSizeChange:(struct CGSize)arg1;
- (void)onCapturerDidResume;
- (void)onCapturerDidPause;
- (void)onCapturerDidStop;
- (void)onCapturerDidStart;
- (void)onCameraInterruptionEnd;
- (void)onCameraInterrupted:(long long)arg1;
- (void)onCameraStateChanged:(id)arg1 isConnected:(_Bool)arg2;
- (void)onProcessFrame:(id)arg1 isFirstFrame:(_Bool)arg2;
- (void)onTickLog:(long long)arg1 inDuration:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
