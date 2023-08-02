//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMLivePivotItemViewController.h"

@class MMFinderLiveContentVM, MMFinderLiveReplayTask, MMFinderLiveReplayViewController;

@interface MMFinderLiveReplayContainItemViewController : MMLivePivotItemViewController
{
    _Bool _isPreviewMuted;
    MMFinderLiveReplayViewController *_replayController;
    MMFinderLiveReplayTask *_replayTask;
    MMFinderLiveContentVM *_contentVM;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isPreviewMuted; // @synthesize isPreviewMuted=_isPreviewMuted;
@property(retain, nonatomic) MMFinderLiveContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(retain, nonatomic) MMFinderLiveReplayTask *replayTask; // @synthesize replayTask=_replayTask;
@property(retain, nonatomic) MMFinderLiveReplayViewController *replayController; // @synthesize replayController=_replayController;
- (void)registerYReportSdk;
- (struct CGRect)getWindowBounds;
- (void)checkAndResumeLive;
- (void)onLiveComplete;
- (void)endLive;
- (void)startLive;
- (void)stopPreview;
- (void)startPreviewMuted:(_Bool)arg1 isInScroll:(_Bool)arg2;
- (void)startPreview;
- (void)layoutController;
- (void)prepareController;
- (void)prepareLiveTask;
- (id)controller;
- (id)liveTask;
- (void)updateSafeAreaInsets;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithContentVM:(id)arg1;

// Remaining properties
@property(nonatomic) _Bool isInPreview;

@end

