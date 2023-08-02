//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIColor, UIViewController, WAUINavigationController;

@protocol WAUINavigationControllerDelegate <NSObject>

@optional
- (UIColor *)ipadCompatibleModeBottomViewBackgroundColorForNavigationController:(WAUINavigationController *)arg1;
- (_Bool)navigationController:(WAUINavigationController *)arg1 shouldUsePresentWhenPushViewController:(UIViewController *)arg2 animated:(_Bool)arg3 scene:(unsigned long long)arg4;
- (_Bool)navigationControllerShouldForceLightMode:(WAUINavigationController *)arg1;
- (void)navigationController:(WAUINavigationController *)arg1 navigationViewDidDisappear:(_Bool)arg2;
- (void)navigationController:(WAUINavigationController *)arg1 navigationViewWillAppear:(_Bool)arg2;
- (void)navigationController:(WAUINavigationController *)arg1 didShowViewController:(UIViewController *)arg2 animated:(_Bool)arg3;
- (void)navigationController:(WAUINavigationController *)arg1 willShowViewController:(UIViewController *)arg2 animated:(_Bool)arg3;
@end
