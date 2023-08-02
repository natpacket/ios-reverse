//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMBarItemCustomView.h"

@class NSMutableArray, UIView, WCFinderNavTabTitleViewLayout;
@protocol WCFinderNavTabTitleViewDelegate;

@interface WCFinderNavTabTitleView : MMBarItemCustomView
{
    id <WCFinderNavTabTitleViewDelegate> _delegate;
    double _cursorProgress;
    WCFinderNavTabTitleViewLayout *_layout;
    UIView *_container;
    NSMutableArray *_titleViews;
    UIView *_cursorView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *cursorView; // @synthesize cursorView=_cursorView;
@property(retain, nonatomic) NSMutableArray *titleViews; // @synthesize titleViews=_titleViews;
@property(retain, nonatomic) UIView *container; // @synthesize container=_container;
@property(retain, nonatomic) WCFinderNavTabTitleViewLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) double cursorProgress; // @synthesize cursorProgress=_cursorProgress;
@property(nonatomic) __weak id <WCFinderNavTabTitleViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)onClickButton:(id)arg1;
- (void)updateSelectedIdx:(long long)arg1;
- (struct CGRect)cursorFrameForView:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)sizeToFitButtons;
- (void)layoutContainer;
- (void)didMoveToWindow;
- (void)updateCursor;
- (void)bindTabDefine:(id)arg1 toBtn:(id)arg2;
- (void)updateLayoutFrom:(id)arg1 to:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

