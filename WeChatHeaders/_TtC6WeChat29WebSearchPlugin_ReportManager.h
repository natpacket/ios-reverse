//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WebSearchPluginBase.h"

@interface _TtC6WeChat29WebSearchPlugin_ReportManager : WebSearchPluginBase
{
    // Error parsing type: , name: $__lazy_storage_$_featureReporter
    // Error parsing type: , name: $__lazy_storage_$_stayTimeReporter
    // Error parsing type: , name: $__lazy_storage_$_menuActionReporter
}

- (void).cxx_destruct;
- (id)init;
- (void)reportMenuActionWithType:(long long)arg1;
- (void)reportExitWithType:(unsigned long long)arg1;
- (void)reportExposedWithFeatureItemsStr:(id)arg1;
- (void)reportClickWithFeatureItem:(unsigned long long)arg1;
- (void)handleEvent:(id)arg1 userInfo:(id)arg2;
- (void)updateWithSearchId:(id)arg1 requestId:(id)arg2;

@end

