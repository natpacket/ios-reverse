//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FlutterViewController.h"

@class FlutterEngine;

@interface WAFlutterViewController : FlutterViewController
{
    _Bool _isRealAppear;
    FlutterEngine *_skylineEngine;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isRealAppear; // @synthesize isRealAppear=_isRealAppear;
@property(retain, nonatomic) FlutterEngine *skylineEngine; // @synthesize skylineEngine=_skylineEngine;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)updateByUIWindow:(id)arg1;
- (void)releaseFlutterEngine;
- (id)initWithEngine:(id)arg1 nibName:(id)arg2 bundle:(id)arg3;

@end

