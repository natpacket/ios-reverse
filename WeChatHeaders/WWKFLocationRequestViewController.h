//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMPageSheetBaseViewController.h"

#import "WWKFLocationRequestViewDelegate-Protocol.h"
#import "WWKFReportLocationMgrExt-Protocol.h"

@class CContact, NSString, WWKFLocationRequestView;

@interface WWKFLocationRequestViewController : MMPageSheetBaseViewController <WWKFLocationRequestViewDelegate, WWKFReportLocationMgrExt>
{
    CContact *_contact;
    WWKFLocationRequestView *_contentView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WWKFLocationRequestView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
- (void)onSetAllowReportLocation:(id)arg1 allowReport:(_Bool)arg2 success:(_Bool)arg3;
- (void)onWWKFLocationRequestLearnMore;
- (void)onWWKFLocationRequestApprove;
- (void)onWWKFLocationRequestReject;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)dealloc;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

