//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMPageSheetBaseView.h"

@class MMTableView, NSString, UIView;
@protocol UITableViewDelegate><UITableViewDataSource;

@interface MMLiveAnchorMoreFunctionOperationView : MMPageSheetBaseView
{
    CDUnknownBlockType _functionOperationViewWillDisappear;
    id <UITableViewDelegate><UITableViewDataSource> _operationDelegate;
    UIView *_contentView;
    MMTableView *_mainTableView;
    double _contentViewHeight;
    NSString *_title;
    long long _previousOrientation;
    double _customHeight;
}

+ (id)getAnchorMoreFunctionOperationView:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) double customHeight; // @synthesize customHeight=_customHeight;
@property(nonatomic) long long previousOrientation; // @synthesize previousOrientation=_previousOrientation;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) double contentViewHeight; // @synthesize contentViewHeight=_contentViewHeight;
@property(retain, nonatomic) MMTableView *mainTableView; // @synthesize mainTableView=_mainTableView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <UITableViewDelegate><UITableViewDataSource> operationDelegate; // @synthesize operationDelegate=_operationDelegate;
@property(copy, nonatomic) CDUnknownBlockType functionOperationViewWillDisappear; // @synthesize functionOperationViewWillDisappear=_functionOperationViewWillDisappear;
- (void)onCloseButtonTapped;
- (void)pageSheetWillDisappear;
- (void)setupPageSheetConfig;
- (void)layoutUI;
- (void)createUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)reloadDataAtIndexPath:(id)arg1;
- (void)reloadOperationData;
- (void)updateCustomHeight:(double)arg1;
- (void)updateTitle:(id)arg1;
- (void)updateContentViewHeight:(double)arg1;
- (void)updateDelegate:(id)arg1;
- (void)pageSheetWillAppear;
- (void)pageSheetDidRotation;

@end
