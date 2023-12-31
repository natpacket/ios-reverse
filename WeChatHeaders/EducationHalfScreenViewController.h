//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMPageSheetBaseViewController.h"

#import "MMPageSheetBottomViewDelegate-Protocol.h"

@class NSString, OrientationSafePageSheetContainer;

@interface EducationHalfScreenViewController : MMPageSheetBaseViewController <MMPageSheetBottomViewDelegate>
{
    NSString *_title;
    NSString *_hint;
    _Bool _isFirstTime;
    _Bool _isLandscape;
    CDUnknownBlockType _confirmCallback;
    unsigned long long _supportedOrientationMask;
    OrientationSafePageSheetContainer *container;
}

- (void).cxx_destruct;
- (long long)styleForPageSheetConfirmButton;
- (double)bottomViewTopMargin;
- (void)onClickPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (void)viewDidLoad;
- (id)pageSheetContainer;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (id)initWithTitle:(id)arg1 withHint:(id)arg2 withIsLandscape:(_Bool)arg3 withIsFirstTime:(_Bool)arg4 withConfirmCallback:(CDUnknownBlockType)arg5 withSupportedOrientationMask:(unsigned long long)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

