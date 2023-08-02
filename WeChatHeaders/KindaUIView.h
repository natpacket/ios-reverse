//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMKViewOnClickCallback, MMKViewOnTouchCallback;
@protocol KindaUIViewDelegate;

@interface KindaUIView : UIView
{
    unsigned long long m_cornerType;
    float m_radiusValue;
    _Bool m_cornerChange;
    _Bool _enableHighlight;
    id <KindaUIViewDelegate> _delegate;
    UIView *_hightLightMask;
    MMKViewOnTouchCallback *_touchCallback;
    MMKViewOnClickCallback *_clickCallback;
    long long _expandHitWidth;
    long long _expandHitHeight;
    struct CGRect _previousBounds;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect previousBounds; // @synthesize previousBounds=_previousBounds;
@property(nonatomic) _Bool enableHighlight; // @synthesize enableHighlight=_enableHighlight;
@property(nonatomic) long long expandHitHeight; // @synthesize expandHitHeight=_expandHitHeight;
@property(nonatomic) long long expandHitWidth; // @synthesize expandHitWidth=_expandHitWidth;
@property(retain, nonatomic) MMKViewOnClickCallback *clickCallback; // @synthesize clickCallback=_clickCallback;
@property(retain, nonatomic) MMKViewOnTouchCallback *touchCallback; // @synthesize touchCallback=_touchCallback;
@property(retain, nonatomic) UIView *hightLightMask; // @synthesize hightLightMask=_hightLightMask;
@property(nonatomic) __weak id <KindaUIViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setTopRightCornerRadius:(float)arg1;
- (void)setTopLeftCornerRadius:(float)arg1;
- (void)setBottomRightCornerRadius:(float)arg1;
- (void)setBottomLeftCornerRadius:(float)arg1;
- (float)getBottomRightCornerRadius;
- (float)getBottomLeftCornerRadius;
- (float)getTopRightCornerRadius;
- (float)getTopLeftCornerRadius;
- (void)layoutSubviews;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

