//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import "MoveWithTouchAlgorithmDelegate-Protocol.h"

@class MoveWithTouchAlgorithm, NSString;
@protocol WCLiveVideoViewDelegate;

@interface WCLiveVideoView : UIImageView <MoveWithTouchAlgorithmDelegate>
{
    id <WCLiveVideoViewDelegate> _delegate;
    MoveWithTouchAlgorithm *_moveAlgorithm;
    struct CGPoint _currentOrigin;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MoveWithTouchAlgorithm *moveAlgorithm; // @synthesize moveAlgorithm=_moveAlgorithm;
@property(nonatomic) struct CGPoint currentOrigin; // @synthesize currentOrigin=_currentOrigin;
@property(nonatomic) __weak id <WCLiveVideoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)shouldForcePortrait;
- (_Bool)shouldLockToPortrait;
- (id)onMoveWithTouchAlgorithmRequestView;
- (void)onMoveWithTouchAlgorithmTaped:(struct CGPoint)arg1;
- (void)onMoveWithTouchAlgorithmResultMoveTo:(struct CGPoint)arg1;
- (void)onMoveEndWithTouchAlgorithmResultMoveTo:(struct CGPoint)arg1;
- (void)createMoveAlgorithm;
- (void)setHidden:(_Bool)arg1;
- (void)adsorbToWindow;
- (void)unSupportDrag;
- (void)supportDrag;
- (void)supportDragIn:(struct CGRect)arg1 allowAdsorbToWindow:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

