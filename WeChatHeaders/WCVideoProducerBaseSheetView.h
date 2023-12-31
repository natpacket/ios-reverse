//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, WCVideoProducerBaseSheetViewConfig;
@protocol WCVideoProducerBaseSheetViewDelegate;

@interface WCVideoProducerBaseSheetView : UIView
{
    id <WCVideoProducerBaseSheetViewDelegate> _delegate;
    UIView *_topView;
    UIButton *_leftButton;
    UIButton *_rightButton;
    UIView *_contentView;
    UIView *_bottomView;
    WCVideoProducerBaseSheetViewConfig *_viewConfig;
    UIView *_containerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) WCVideoProducerBaseSheetViewConfig *viewConfig; // @synthesize viewConfig=_viewConfig;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(nonatomic) __weak id <WCVideoProducerBaseSheetViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_initContentView;
- (void)_initBottomView;
- (void)_initTopBarView;
- (void)_initContainerView;
- (void)_initView;
- (void)_relayoutViews;
- (void)_onClickRightButton;
- (void)_onClickLeftButton;
- (double)getContentHeight;
- (void)_loadViewConfig:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 viewConfig:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

