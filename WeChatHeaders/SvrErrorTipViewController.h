//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMWindowViewController.h"

@class NSString, UILabel;

@interface SvrErrorTipViewController : MMWindowViewController
{
    UILabel *_tipsLabel;
    NSString *_errTip;
    NSString *_urlStr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *urlStr; // @synthesize urlStr=_urlStr;
- (void)jumpUrl:(id)arg1;
- (void)setupInfoView;
- (void)viewDidTransitionToNewSize;
- (void)updateErrTip:(id)arg1;
- (void)hideView;
- (void)onDetailBtnClicked;
- (void)onIKnowClicked;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

@end
