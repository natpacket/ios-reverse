//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMUIViewController, NSString;

@protocol StreamVoiceInputViewControllerDelegate <NSObject>

@optional
- (MMUIViewController *)getViewController;
- (double)getPageSheetModeBottomPadding;
- (double)getInputToolViewHeight;
- (void)showStreamVoiceInputMaskView:(_Bool)arg1;
- (void)streamVoiceInputViewHeightChanged;
- (void)onSendTextMsg:(NSString *)arg1;
- (void)streamVoiceInputFullScreenExit;
- (void)streamVoiceInputFullScreenEnter;
- (void)streamVoiceInputBoardWillHideWithText:(NSString *)arg1;
- (void)streamVoiceInputBoardDidHide;
- (void)streamVoiceInputBoardDidShow;
@end

