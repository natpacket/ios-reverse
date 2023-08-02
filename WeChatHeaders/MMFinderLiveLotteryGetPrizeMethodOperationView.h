//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMPageSheetBaseView.h"

#import "MMFinderLiveLotteryGetPrizeMethodDelegate-Protocol.h"

@class CAShapeLayer, MMFinderLiveLotteryGetPrizeMethodDataItem, MMFinderLiveLotteryGetPrizeMethodViewModel, MMFinderLiveLotteryMethodOperationViewNavBar, MMTableView, NSIndexPath, NSString, UIView;
@protocol MMFinderLiveLotteryGetPrizeMethodOperationViewDelegate;

@interface MMFinderLiveLotteryGetPrizeMethodOperationView : MMPageSheetBaseView <MMFinderLiveLotteryGetPrizeMethodDelegate>
{
    MMFinderLiveLotteryGetPrizeMethodDataItem *_selectItem;
    id <MMFinderLiveLotteryGetPrizeMethodOperationViewDelegate> _operationDelegate;
    MMFinderLiveLotteryGetPrizeMethodViewModel *_lotteryGetPrizeMethodViewModel;
    CAShapeLayer *_shapeLayer;
    UIView *_contentView;
    MMFinderLiveLotteryMethodOperationViewNavBar *_navBar;
    MMTableView *_lotteryMethodTableView;
    NSIndexPath *_selectIndexPath;
    long long _previousOrientation;
}

- (void).cxx_destruct;
@property(nonatomic) long long previousOrientation; // @synthesize previousOrientation=_previousOrientation;
@property(retain, nonatomic) NSIndexPath *selectIndexPath; // @synthesize selectIndexPath=_selectIndexPath;
@property(retain, nonatomic) MMTableView *lotteryMethodTableView; // @synthesize lotteryMethodTableView=_lotteryMethodTableView;
@property(retain, nonatomic) MMFinderLiveLotteryMethodOperationViewNavBar *navBar; // @synthesize navBar=_navBar;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) MMFinderLiveLotteryGetPrizeMethodViewModel *lotteryGetPrizeMethodViewModel; // @synthesize lotteryGetPrizeMethodViewModel=_lotteryGetPrizeMethodViewModel;
@property(nonatomic) __weak id <MMFinderLiveLotteryGetPrizeMethodOperationViewDelegate> operationDelegate; // @synthesize operationDelegate=_operationDelegate;
@property(retain, nonatomic) MMFinderLiveLotteryGetPrizeMethodDataItem *selectItem; // @synthesize selectItem=_selectItem;
- (void)didSelectRowWithItem:(id)arg1 indexPath:(id)arg2;
- (id)lotteryMethodTableViewModel;
- (double)getLotteryTableHeight;
- (double)contentViewHeight;
- (void)updateSelfViewShapeClip;
- (void)setupPageSheetConfig;
- (void)layoutUI;
- (void)updateData:(id)arg1;
- (void)createUI;
- (void)layoutSubviews;
- (id)initWithLotteryMethodData:(id)arg1;
- (void)pageSheetDidRotation;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

