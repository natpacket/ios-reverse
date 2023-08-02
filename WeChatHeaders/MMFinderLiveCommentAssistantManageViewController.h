//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

@class MMFinderLiveCommentAssitantManageView, MMFinderLiveCommentAssitantManageViewModel, MMFinderLiveTaskId, WCLiveBlurButton;

@interface MMFinderLiveCommentAssistantManageViewController : MMUIViewController
{
    MMFinderLiveCommentAssitantManageView *_manageView;
    MMFinderLiveCommentAssitantManageViewModel *_manageViewModel;
    WCLiveBlurButton *_closeButton;
    MMFinderLiveTaskId *_taskId;
}

+ (void)presentCommentAssitantManageVCFromVC:(id)arg1 taskId:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) WCLiveBlurButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) MMFinderLiveCommentAssitantManageViewModel *manageViewModel; // @synthesize manageViewModel=_manageViewModel;
@property(retain, nonatomic) MMFinderLiveCommentAssitantManageView *manageView; // @synthesize manageView=_manageView;
- (void)onCloseButtonClicked;
- (void)viewDidLayoutSubviews;
- (long long)preferredStatusBarStyle;
- (id)navigationBarBackgroundColor;
- (_Bool)navigationBarBlurEffect;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

