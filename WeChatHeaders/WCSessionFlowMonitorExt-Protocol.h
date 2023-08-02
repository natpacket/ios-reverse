//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMUIViewController, NSString, UIEvent, UITapGestureRecognizer, UIViewController;

@protocol WCSessionFlowMonitorExt <NSObject>

@optional
- (void)onGesture:(UITapGestureRecognizer *)arg1 withTarget:(NSString *)arg2 withAction:(NSString *)arg3;
- (void)onSendAction:(SEL)arg1 to:(id)arg2 from:(id)arg3 forEvent:(UIEvent *)arg4;
- (void)onSendEvent:(UIEvent *)arg1;
- (void)onEnterForeground;
- (void)onEnterBackground;
- (void)onTabDisappear:(UIViewController *)arg1;
- (void)onTabAppear:(UIViewController *)arg1;
- (void)onDisappearPage:(NSString *)arg1 withVC:(MMUIViewController *)arg2 withHashCode:(unsigned long long)arg3;
- (void)onAppearPage:(NSString *)arg1 withVC:(MMUIViewController *)arg2 withHashCode:(unsigned long long)arg3;
- (void)onQuitPage:(NSString *)arg1 withVC:(MMUIViewController *)arg2 withHashCode:(unsigned long long)arg3;
- (void)onEnterPage:(NSString *)arg1 withVC:(MMUIViewController *)arg2 withHashCode:(unsigned long long)arg3;
@end

