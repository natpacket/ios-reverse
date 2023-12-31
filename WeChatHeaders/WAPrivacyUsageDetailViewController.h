//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZZFLEXTableViewController.h"

#import "WAPrivacyUsageDetailCgiDelegate-Protocol.h"

@class NSMutableArray, NSString, UILabel, UIView, WAContact;

@interface WAPrivacyUsageDetailViewController : ZZFLEXTableViewController <WAPrivacyUsageDetailCgiDelegate>
{
    WAContact *_contact;
    NSMutableArray *_cellDataList;
    unsigned int _minUpdateTime;
    _Bool _hasNoMore;
    UIView *_emptyView;
    UILabel *_emptyLabel;
    UIView *_footerView;
}

- (void).cxx_destruct;
- (id)navigationBarBackgroundColor;
- (void)getPrivacyUsageDetailCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)getPrivacyUsageDetailCgi:(id)arg1 didGetUsageDetailRecordList:(id)arg2 hasNoMore:(_Bool)arg3;
- (void)requestNextPagePrivacyUsageRecord;
- (void)initRefreshControl;
- (id)makeFooterMarginView;
- (void)initEmptyView;
- (void)updateListData;
- (void)viewDidLoad;
- (id)initWithContact:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

