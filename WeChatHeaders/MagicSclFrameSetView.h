//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "_TtP6WeChat24ICommonCoverViewProvider_-Protocol.h"

@class NSMutableArray, NSString, WACanvasCoverViewContainer, _TtC6WeChat16MagicSclFrameSet;

@interface MagicSclFrameSetView : UIView <_TtP6WeChat24ICommonCoverViewProvider_>
{
    _Bool _isOutOfBounds;
    _Bool _hasSetup;
    _Bool _unbindFrameSetOnDealloc;
    int _viewId;
    _TtC6WeChat16MagicSclFrameSet *_frameSet;
    WACanvasCoverViewContainer *_coverView;
    NSMutableArray *_canvasIds;
    NSString *_frameSetName;
}

- (void).cxx_destruct;
@property(nonatomic) int viewId; // @synthesize viewId=_viewId;
@property(retain, nonatomic) NSString *frameSetName; // @synthesize frameSetName=_frameSetName;
@property(nonatomic) _Bool unbindFrameSetOnDealloc; // @synthesize unbindFrameSetOnDealloc=_unbindFrameSetOnDealloc;
@property(nonatomic) _Bool hasSetup; // @synthesize hasSetup=_hasSetup;
@property(nonatomic) _Bool isOutOfBounds; // @synthesize isOutOfBounds=_isOutOfBounds;
@property(retain, nonatomic) NSMutableArray *canvasIds; // @synthesize canvasIds=_canvasIds;
@property(retain, nonatomic) WACanvasCoverViewContainer *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) _TtC6WeChat16MagicSclFrameSet *frameSet; // @synthesize frameSet=_frameSet;
- (id)provideContainerView;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)addSubview:(id)arg1;
- (void)unbind;
- (void)bind:(id)arg1;
- (void)initFrameSet:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)layoutSubviews;
- (id)description;
- (void)invalidate;
- (void)dealloc;
- (void)resetViewId:(int)arg1;
- (void)resetFrameSet:(id)arg1;
- (id)init:(id)arg1;

@end

