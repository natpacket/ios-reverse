//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMIUIModal : NSObject
{
    struct Handle<std::shared_ptr<kinda::IUIModal>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (float)animationCutLinePosition;
- (_Bool)forceShowInLightMode;
- (_Bool)useImmediateKeyboardAnimation;
- (_Bool)useKeyboardCoverMode;
- (_Bool)usePanelModalMode;
- (void)onFirstRenderFinish;
- (id)navigationBarColor;
- (id)statusbarColor;
- (_Bool)isShowAndroidCenterPadding;
- (id)getReportUrl;
- (void)onClickAndroidBack;
- (void)onDestroy;
- (void)onModalEnterForeground;
- (void)onModalEnterBackground;
- (void)viewDidTransitionToNewSize;
- (void)keyboardWillHide;
- (void)keyboardWillShow:(float)arg1;
- (void)setPlatformDelegate:(id)arg1;
- (id)getFuncDelegate;
- (void)setFuncDelegate:(id)arg1;
- (void)onCreateLayout:(id)arg1;
- (id)initWithCpp:(const void *)arg1;

@end

