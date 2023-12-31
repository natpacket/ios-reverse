//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class EmoticonBoardView, NSString, UIView;
@protocol EmoticonBoardViewDelegate><BaseEmoticonViewDelegate;

@interface WSEmoticonPadViewController : MMUIViewController <UIGestureRecognizerDelegate>
{
    _Bool _emoticonBoardUp;
    id <EmoticonBoardViewDelegate><BaseEmoticonViewDelegate> _delegate;
    UIView *_contentBGView;
    EmoticonBoardView *_emoticonPad;
    UIView *_guideView;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isEmoticonBoardUp) _Bool emoticonBoardUp; // @synthesize emoticonBoardUp=_emoticonBoardUp;
@property(retain, nonatomic) UIView *guideView; // @synthesize guideView=_guideView;
@property(retain, nonatomic) EmoticonBoardView *emoticonPad; // @synthesize emoticonPad=_emoticonPad;
@property(retain, nonatomic) UIView *contentBGView; // @synthesize contentBGView=_contentBGView;
@property(nonatomic) __weak id <EmoticonBoardViewDelegate><BaseEmoticonViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)animateHideWithCompleteBlock:(CDUnknownBlockType)arg1;
- (void)touchDownInsideMask:(id)arg1;
- (void)animatShowOnView:(id)arg1 refFrame:(struct CGRect)arg2 exterInfo:(id)arg3;
- (void)initViews;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

