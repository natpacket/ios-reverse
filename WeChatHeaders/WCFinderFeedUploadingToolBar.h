//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WCFinderDataItemExt-Protocol.h"

@class CAShapeLayer, NSNumber, NSString, UIButton, UIColor, UILabel;
@protocol WCFinderFeedUploadingToolBarDelegate;

@interface WCFinderFeedUploadingToolBar : UIView <WCFinderDataItemExt>
{
    _Bool _hadEncoding;
    id <WCFinderFeedUploadingToolBarDelegate> _delegate;
    UIView *_progressView;
    UIButton *_cancelButton;
    UILabel *_tipsLabel;
    NSString *_tid;
    CAShapeLayer *_ovalShapeLayer;
    NSNumber *_iconsHeight;
    UILabel *_deleteTipsLabel;
    UIColor *_tipsLabelColor;
    UIColor *_normalColor;
    UIColor *_loadingColor;
    double _lastProgress;
}

- (void).cxx_destruct;
@property(nonatomic) double lastProgress; // @synthesize lastProgress=_lastProgress;
@property(retain, nonatomic) UIColor *loadingColor; // @synthesize loadingColor=_loadingColor;
@property(retain, nonatomic) UIColor *normalColor; // @synthesize normalColor=_normalColor;
@property(retain, nonatomic) UIColor *tipsLabelColor; // @synthesize tipsLabelColor=_tipsLabelColor;
@property(retain, nonatomic) UILabel *deleteTipsLabel; // @synthesize deleteTipsLabel=_deleteTipsLabel;
@property(nonatomic) _Bool hadEncoding; // @synthesize hadEncoding=_hadEncoding;
@property(retain, nonatomic) NSNumber *iconsHeight; // @synthesize iconsHeight=_iconsHeight;
@property(retain, nonatomic) CAShapeLayer *ovalShapeLayer; // @synthesize ovalShapeLayer=_ovalShapeLayer;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) __weak id <WCFinderFeedUploadingToolBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFinderDataItemEncodingProgress:(double)arg1;
- (void)onFinderDataItemPostProgressWithTid:(id)arg1 progress:(id)arg2;
- (void)clickCancelAction;
- (void)updateProgress:(double)arg1;
- (void)setupProgressCricle;
- (void)setUpUI;
- (void)dealloc;
- (void)bindTid:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 iconsHeight:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1 iconsHeight:(id)arg2 tipsLabelColor:(id)arg3 progressNormalColor:(id)arg4 progressLoadingColor:(id)arg5;
- (id)initWithFrame:(struct CGRect)arg1 iconHeight:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

