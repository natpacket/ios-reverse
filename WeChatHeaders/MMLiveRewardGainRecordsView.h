//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMLiveHalfScreenPanelView.h"

#import "MMLiveHalfScreenTitleBarViewDelegate-Protocol.h"
#import "MMLiveRewardGainRecordCellDelegate-Protocol.h"
#import "MMRefreshTableFooterDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MMCPLabel, MMLiveHalfScreenTitleBarView, MMLiveTaskId, MMLoadingView, MMTableView, MMUIButton, MMUILabel, NSData, NSMutableArray, NSString, UIImageView, UIView, WCTimeLineFooterView;
@protocol MMLiveRewardGainRecordsViewDelegate;

@interface MMLiveRewardGainRecordsView : MMLiveHalfScreenPanelView <MMLiveHalfScreenTitleBarViewDelegate, MMLiveRewardGainRecordCellDelegate, UIGestureRecognizerDelegate, UITableViewDelegate, UITableViewDataSource, MMRefreshTableFooterDelegate>
{
    MMTableView *_giftGainRecordsTableView;
    id <MMLiveRewardGainRecordsViewDelegate> _delegate;
    UIView *_statisticsView;
    MMUIButton *_introductionButton;
    UIImageView *_iconView;
    MMUILabel *_totalGiftGainValueLabel;
    MMLoadingView *_loadingView;
    MMCPLabel *_emptyTitleLabel;
    WCTimeLineFooterView *_footerView;
    MMLiveHalfScreenTitleBarView *_titleBar;
    NSMutableArray *_rewardGainsInfoList;
    NSData *_lastBuffer;
    unsigned long long _rewardTotalAmountInWecoin;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long rewardTotalAmountInWecoin; // @synthesize rewardTotalAmountInWecoin=_rewardTotalAmountInWecoin;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) NSMutableArray *rewardGainsInfoList; // @synthesize rewardGainsInfoList=_rewardGainsInfoList;
@property(retain, nonatomic) MMLiveHalfScreenTitleBarView *titleBar; // @synthesize titleBar=_titleBar;
@property(retain, nonatomic) WCTimeLineFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) MMCPLabel *emptyTitleLabel; // @synthesize emptyTitleLabel=_emptyTitleLabel;
@property(retain, nonatomic) MMLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) MMUILabel *totalGiftGainValueLabel; // @synthesize totalGiftGainValueLabel=_totalGiftGainValueLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) MMUIButton *introductionButton; // @synthesize introductionButton=_introductionButton;
@property(retain, nonatomic) UIView *statisticsView; // @synthesize statisticsView=_statisticsView;
@property(nonatomic) __weak id <MMLiveRewardGainRecordsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMTableView *giftGainRecordsTableView; // @synthesize giftGainRecordsTableView=_giftGainRecordsTableView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)fetchRewardGainsInfoList;
- (void)reloadData;
- (void)closeWithAnimation:(_Bool)arg1;
- (void)openWithAnimation:(_Bool)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)onMMLiveHalfScreenTitleBarLeftButtonClicked:(id)arg1;
- (void)onLiveGiftGainRecordCellHeadImageClicked:(id)arg1;
- (void)onIntroductionButtonClick;
- (void)setExtraCellLineHidden:(id)arg1;
- (void)layoutSubviews;
- (void)layoutContentView;
- (void)initView;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1 frame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) MMLiveTaskId *taskId;

@end

