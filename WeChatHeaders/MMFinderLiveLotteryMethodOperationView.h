//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMPageSheetBaseView.h"

#import "MMFinderLiveLotteryMethodOperationTableDataDelegate-Protocol.h"

@class CAShapeLayer, MMFinderLiveLotteryMethodOperationTableViewModel, MMFinderLiveLotteryMethodOperationViewNavBar, MMTableView, NSIndexPath, NSString, UIView;
@protocol MMFinderLiveLotteryMethodOperationViewDelegate;

@interface MMFinderLiveLotteryMethodOperationView : MMPageSheetBaseView <MMFinderLiveLotteryMethodOperationTableDataDelegate>
{
    id <MMFinderLiveLotteryMethodOperationViewDelegate> _operationDelegate;
    MMFinderLiveLotteryMethodOperationTableViewModel *_lotteryMethodTableViewModel;
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
@property(retain, nonatomic) MMFinderLiveLotteryMethodOperationTableViewModel *lotteryMethodTableViewModel; // @synthesize lotteryMethodTableViewModel=_lotteryMethodTableViewModel;
@property(nonatomic) __weak id <MMFinderLiveLotteryMethodOperationViewDelegate> operationDelegate; // @synthesize operationDelegate=_operationDelegate;
- (void)didSelectRowWithItem:(id)arg1 indexPath:(id)arg2;
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
