//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TingNavigationController, UIBarButtonItem, UIColor;

@protocol TingViewController <NSObject>

@optional
- (UIColor *)tingPreferredNavigationItemColor;
- (void)tingViewDidDisappear:(_Bool)arg1;
- (void)tingViewDidAppear:(_Bool)arg1;
- (void)tingViewWillDisappear:(_Bool)arg1;
- (void)tingViewWillAppear:(_Bool)arg1;
- (_Bool)isTingAppHomePage;
- (_Bool)shouldNotShowHomeButton;
- (_Bool)shouldNotShowBackButton;
- (_Bool)shouldDisableTingDismissGesture;
- (UIBarButtonItem *)generateHomeButtonWithColor:(UIColor *)arg1;
- (TingNavigationController *)tingNavigationController;
- (void)handleTingMoreButtonAction;
- (_Bool)showTingMoreButton;
- (struct UIEdgeInsets)tingSafeAreaInsets;
@end

