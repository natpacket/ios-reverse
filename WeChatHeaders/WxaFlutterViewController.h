//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FlutterViewController.h"

#import "WxaFlutterViewControllerDelegate-Protocol.h"

@class NSMutableDictionary, NSString, WxaFlutterViewLifeCycle;

@interface WxaFlutterViewController : FlutterViewController <WxaFlutterViewControllerDelegate>
{
    int _engineId;
    NSString *_activityId;
    NSString *_pageName;
    NSMutableDictionary *_params;
    WxaFlutterViewLifeCycle *_lifeCycle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WxaFlutterViewLifeCycle *lifeCycle; // @synthesize lifeCycle=_lifeCycle;
@property(retain, nonatomic) NSMutableDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(retain, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
@property(nonatomic) int engineId; // @synthesize engineId=_engineId;
- (id)getFlutterEngine;
- (id)generateParams;
- (id)getFlutterViewParams;
- (id)getFlutterViewName;
- (id)getActivityId;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

