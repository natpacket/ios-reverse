//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMPageSheetBaseView.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, UITableView, UIView;
@protocol MMFinderLiveConnectMicAudienceApplyPageSheetDelegate;

@interface MMFinderLiveConnectMicAudienceApplyPageSheet : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource>
{
    id <MMFinderLiveConnectMicAudienceApplyPageSheetDelegate> _delegate;
    UITableView *_tableView;
    UIView *_separatorBar;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *separatorBar; // @synthesize separatorBar=_separatorBar;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <MMFinderLiveConnectMicAudienceApplyPageSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (void)initializeComponentsWithAutoConnect:(_Bool)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onCameraSettingsTapped;
- (void)pageSheetWillClose:(_Bool)arg1;
- (void)layoutSubviews;
- (void)cancelAnimated:(_Bool)arg1;
- (id)initWithAutoConnect:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

