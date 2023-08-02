//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class CAShapeLayer, MMLiveTaskId, NSString, UIPanGestureRecognizer;

@interface MMLiveHalfScreenPanelView : UIView <UIGestureRecognizerDelegate>
{
    _Bool _isOpening;
    UIView *_contentView;
    double _maxHeight;
    MMLiveTaskId *_taskId;
    CAShapeLayer *_shapeLayer;
    UIView *_maskView;
    UIPanGestureRecognizer *_panGestureRecognizer;
    double _contentViewTopAtPanBegin;
    double _contentViewPreviousPanPositionY;
}

- (void).cxx_destruct;
@property(nonatomic) double contentViewPreviousPanPositionY; // @synthesize contentViewPreviousPanPositionY=_contentViewPreviousPanPositionY;
@property(nonatomic) double contentViewTopAtPanBegin; // @synthesize contentViewTopAtPanBegin=_contentViewTopAtPanBegin;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) _Bool isOpening; // @synthesize isOpening=_isOpening;
@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)layoutSubviews;
- (void)handleContentViewPanGesture:(id)arg1;
- (void)layoutHalfScreenContentView;
- (void)initContentView;
- (void)setContentViewBackground;
- (_Bool)shouldInstallContentViewPanGesture;
- (void)onPanGestureRecognizerBegan;
- (void)openWithAnimation:(_Bool)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)closeWithAnimation:(_Bool)arg1;
- (void)onHalfScreenPanelLightDismissed;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithTaskId:(id)arg1 frame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

