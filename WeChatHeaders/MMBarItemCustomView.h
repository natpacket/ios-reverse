//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMBadgeView, MMBarButton;

@interface MMBarItemCustomView : UIView
{
    _Bool _showRedDot;
    long long _badgeValue;
    MMBadgeView *_badgeView;
    MMBarButton *_barButton;
    struct UIEdgeInsets _extendTouchEdges;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMBarButton *barButton; // @synthesize barButton=_barButton;
@property(retain, nonatomic) MMBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(nonatomic) struct UIEdgeInsets extendTouchEdges; // @synthesize extendTouchEdges=_extendTouchEdges;
@property(nonatomic) long long badgeValue; // @synthesize badgeValue=_badgeValue;
@property(nonatomic) _Bool showRedDot; // @synthesize showRedDot=_showRedDot;
- (void)addBarItemButton:(id)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateRedDotView;

@end

