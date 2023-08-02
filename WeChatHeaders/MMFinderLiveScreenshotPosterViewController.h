//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMFinderLiveQrCodeViewController.h"

#import "MMFinderLiveQrCodeReporter-Protocol.h"

@class MMFinderLiveScreenshotPosterImages, NSString;

@interface MMFinderLiveScreenshotPosterViewController : MMFinderLiveQrCodeViewController <MMFinderLiveQrCodeReporter>
{
    MMFinderLiveScreenshotPosterImages *_images;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveScreenshotPosterImages *images; // @synthesize images=_images;
- (id)liveTask;
- (void)onSharedSuccessfullyToMiscellaneousTargets;
- (void)onSharedSuccessfullyToMoments;
- (void)onSharedSuccessfullyToChatWithUsernames:(id)arg1;
- (void)onShareButtonInvoked;
- (void)onSaveImageButtonInvoked;
- (void)onCancelButtonInvoked;
- (_Bool)supportsLandscape;
- (id)reporter;
- (void)willAppear;
- (id)createQrCodeView;
- (void)fetchScreenshotPosterInfoWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)backdropColor;
- (id)initWithTaskId:(id)arg1 images:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

