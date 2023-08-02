//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TAVMediaViewProtocol-Protocol.h"

@class AVPlayer, MTKView, NSLayoutConstraint, NSString;

@interface TAVMediaMetalView : UIView <TAVMediaViewProtocol>
{
    _Bool _shouldAnimation;
    _Bool _readyForDisplay;
    unsigned long long _fillMode;
    AVPlayer *_player;
    MTKView *_mtkView;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_heightConstraint;
    NSLayoutConstraint *_centerXConstraint;
    NSLayoutConstraint *_centerYConstraint;
    struct CGSize _nextMTKViewSize;
    struct CGRect _videoRect;
}

+ (_Bool)requiresConstraintBasedLayout;
- (void).cxx_destruct;
@property(nonatomic) struct CGRect videoRect; // @synthesize videoRect=_videoRect;
@property(nonatomic) struct CGSize nextMTKViewSize; // @synthesize nextMTKViewSize=_nextMTKViewSize;
@property(retain, nonatomic) NSLayoutConstraint *centerYConstraint; // @synthesize centerYConstraint=_centerYConstraint;
@property(retain, nonatomic) NSLayoutConstraint *centerXConstraint; // @synthesize centerXConstraint=_centerXConstraint;
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property(nonatomic, getter=isReadyForDisplay) _Bool readyForDisplay; // @synthesize readyForDisplay=_readyForDisplay;
@property(retain, nonatomic) MTKView *mtkView; // @synthesize mtkView=_mtkView;
@property(nonatomic) _Bool shouldAnimation; // @synthesize shouldAnimation=_shouldAnimation;
@property(nonatomic) __weak AVPlayer *player; // @synthesize player=_player;
@property(nonatomic) unsigned long long fillMode; // @synthesize fillMode=_fillMode;
- (void)refreshView;
@property(nonatomic, getter=isPaused) _Bool paused;
- (void)updateConstraints;
- (void)updateInputTextureSize:(struct CGSize)arg1;
- (void)updateConstraintsAnimation;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

