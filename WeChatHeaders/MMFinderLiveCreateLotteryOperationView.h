//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMPageSheetBaseView.h"

#import "MMFinderLiveCreateLotteryOperationViewDelegate-Protocol.h"

@class CAShapeLayer, MMFinderLiveChooseClarityViewNavBar, MMFinderLiveCreateLotteryTableHeaderView, MMFinderLiveCreateLotteryViewModel, MMTableView, NSIndexPath, NSString, UIView;
@protocol MMFinderLiveCreateLotteryOperationViewDelegate><UITableViewDelegate><UITableViewDataSource;

@interface MMFinderLiveCreateLotteryOperationView : MMPageSheetBaseView <MMFinderLiveCreateLotteryOperationViewDelegate>
{
    id <MMFinderLiveCreateLotteryOperationViewDelegate><UITableViewDelegate><UITableViewDataSource> _operationDelegate;
    MMFinderLiveCreateLotteryViewModel *_lotteryGetPrizeMethodViewModel;
    CAShapeLayer *_shapeLayer;
    UIView *_contentView;
    MMFinderLiveChooseClarityViewNavBar *_navBar;
    MMTableView *_lotteryMethodTableView;
    NSIndexPath *_selectIndexPath;
    long long _locationId;
    MMFinderLiveCreateLotteryTableHeaderView *_headerView;
    long long _previousOrientation;
}

+ (id)getCreateLotteryOperationView:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long previousOrientation; // @synthesize previousOrientation=_previousOrientation;
@property(retain, nonatomic) MMFinderLiveCreateLotteryTableHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) long long locationId; // @synthesize locationId=_locationId;
@property(retain, nonatomic) NSIndexPath *selectIndexPath; // @synthesize selectIndexPath=_selectIndexPath;
@property(retain, nonatomic) MMTableView *lotteryMethodTableView; // @synthesize lotteryMethodTableView=_lotteryMethodTableView;
@property(retain, nonatomic) MMFinderLiveChooseClarityViewNavBar *navBar; // @synthesize navBar=_navBar;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) MMFinderLiveCreateLotteryViewModel *lotteryGetPrizeMethodViewModel; // @synthesize lotteryGetPrizeMethodViewModel=_lotteryGetPrizeMethodViewModel;
@property(nonatomic) __weak id <MMFinderLiveCreateLotteryOperationViewDelegate><UITableViewDelegate><UITableViewDataSource> operationDelegate; // @synthesize operationDelegate=_operationDelegate;
- (void)createLotteryClick;
- (double)getLotteryTableHeight;
- (double)getCurrentHeight;
- (double)contentViewHeight;
- (void)updateSelfViewShapeClip;
- (void)setupPageSheetConfig;
- (void)layoutUI;
- (void)pageSheetDidAppear;
- (void)createUI;
- (void)layoutSubviews;
- (void)scrollToRowAtIndexPath:(id)arg1;
- (void)pageSheetDidRotation;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateTableviewWithCount:(long long)arg1 locationId:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

