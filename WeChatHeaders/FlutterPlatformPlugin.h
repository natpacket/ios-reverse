//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FlutterPlatformPlugin : NSObject
{
    WeakPtr_193805a4 _engine;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)clipboardHasStrings;
- (void)setClipboardData:(id)arg1;
- (id)getClipboardData:(id)arg1;
- (void)popSystemNavigator:(_Bool)arg1;
- (void)setSystemChromeSystemUIOverlayStyle:(id)arg1;
- (void)restoreSystemChromeSystemUIOverlays;
- (void)setSystemChromeEnabledSystemUIMode:(id)arg1;
- (void)setSystemChromeEnabledSystemUIOverlays:(id)arg1;
- (void)setSystemChromeApplicationSwitcherDescription:(id)arg1;
- (void)setSystemChromePreferredOrientations:(id)arg1;
- (void)vibrateHapticFeedback:(id)arg1;
- (void)playSystemSound:(id)arg1;
- (void)handleMethodCall:(id)arg1 result:(CDUnknownBlockType)arg2;
- (id)initWithEngine:(WeakPtr_193805a4)arg1;

@end
