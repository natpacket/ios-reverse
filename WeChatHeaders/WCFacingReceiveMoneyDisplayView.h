//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "CAAnimationDelegate-Protocol.h"

@class NSString, UIView;

@interface WCFacingReceiveMoneyDisplayView : MMUIView <CAAnimationDelegate>
{
    UIView *backgroundView;
    id userInfo;
    struct CGRect m_frame;
    _Bool _bShowActionBar;
    unsigned int _codeType;
    NSString *_accessTips;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int codeType; // @synthesize codeType=_codeType;
@property(nonatomic) _Bool bShowActionBar; // @synthesize bShowActionBar=_bShowActionBar;
@property(retain, nonatomic) NSString *accessTips; // @synthesize accessTips=_accessTips;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo;
- (void)closeView;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)showEndAnimation:(struct CGPoint)arg1;
- (void)showStartAnimation;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setupDescContentWithDisplayName:(id)arg1 totalMoney:(id)arg2 startY:(double)arg3;
- (double)setupBackgroundViewWithFrame:(struct CGRect)arg1;
- (id)initWithUserDisplayName:(id)arg1 TotalMoney:(id)arg2 HeadImgUrl:(id)arg3 Frame:(struct CGRect)arg4 codeType:(unsigned int)arg5 showActionBar:(_Bool)arg6;
- (id)initWithUserName:(id)arg1 DisplayName:(id)arg2 TotalMoney:(id)arg3 Frame:(struct CGRect)arg4 codeType:(unsigned int)arg5 showActionBar:(_Bool)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

