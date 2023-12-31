//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIHalfScreenViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCFinderFeedContentVMExt-Protocol.h"

@class MMUIButton, NSMutableArray, NSString, UIButton, UILabel, UITableView, WCFinderAnimationLoadingView, WCFinderFeedContentVM;

@interface WCFinderDislikeSelectionHalfViewController : MMUIHalfScreenViewController <UITableViewDelegate, UITableViewDataSource, WCFinderFeedContentVMExt>
{
    MMUIButton *_closeBtn;
    UILabel *_titleLabel;
    MMUIButton *_submitBtn;
    UITableView *_tableView;
    WCFinderAnimationLoadingView *_loadingView;
    UIButton *_retryBtn;
    WCFinderFeedContentVM *_contentVM;
    unsigned long long _commentScene;
    double _heightRatio;
    NSMutableArray *_selectedEntries;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *selectedEntries; // @synthesize selectedEntries=_selectedEntries;
@property(nonatomic) double heightRatio; // @synthesize heightRatio=_heightRatio;
@property(nonatomic) unsigned long long commentScene; // @synthesize commentScene=_commentScene;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(retain, nonatomic) UIButton *retryBtn; // @synthesize retryBtn=_retryBtn;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MMUIButton *submitBtn; // @synthesize submitBtn=_submitBtn;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
- (void)_onFeedbackReasonFetchStateUpdateWith:(id)arg1;
- (void)onFeedContentFeedbackReasonFetchFail:(id)arg1;
- (void)onFeedContentFeedbackReasonChanged:(id)arg1;
- (void)reportCellEventWithIndexPath:(id)arg1 event:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onSubmitButtonClicked:(id)arg1;
- (void)onRetryButtonClicked:(id)arg1;
- (void)onCloseButtonClicked:(id)arg1;
- (id)wordingEntryAtIndex:(unsigned long long)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (double)getMaxHalfScreenHeight;
- (void)removeLoadingView;
- (void)showLoadingView;
- (void)removeRetryButton;
- (void)showRetryButon;
- (void)updateDataState;
- (void)updateUI;
- (void)setupUI;
- (void)dealloc;
- (void)viewDidLoad;
- (void)baseInit;
- (id)initWithContentVM:(id)arg1 commentScene:(unsigned long long)arg2;
- (id)initWithContentVM:(id)arg1;
- (_Bool)isForbidPanGesture;
- (_Bool)useTransparentNavibar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

