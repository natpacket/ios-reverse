//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWindow.h>

@interface KindaWindow : UIWindow
{
}

+ (id)shareInstance;
- (void)keyboardDidHide;
- (void)keyboardWillHide;
- (void)keyboardDidShow;
- (void)keyboardWillShow;
- (void)didResignKey;
- (void)didBecomeKey;
- (void)didBecomeHidden;
- (void)didBecomeVisible;
- (void)didAddSubview:(id)arg1;
- (void)willRemoveSubview:(id)arg1;
- (void)setRootViewController:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)init;

@end

