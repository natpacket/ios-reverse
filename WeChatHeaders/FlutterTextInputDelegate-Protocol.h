//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FlutterTextInputView, NSDictionary, NSString;

@protocol FlutterTextInputDelegate <NSObject>
- (void)flutterTextInputView:(FlutterTextInputView *)arg1 hideKeyBoardWithConfig:(NSDictionary *)arg2;
- (void)flutterTextInputView:(FlutterTextInputView *)arg1 showKeyBoardWithConfig:(NSDictionary *)arg2;
- (void)flutterTextInputView:(FlutterTextInputView *)arg1 removeTextPlaceholder:(int)arg2;
- (void)flutterTextInputView:(FlutterTextInputView *)arg1 insertTextPlaceholderWithSize:(struct CGSize)arg2 withClient:(int)arg3;
- (void)flutterTextInputViewScribbleInteractionFinished:(FlutterTextInputView *)arg1;
- (void)flutterTextInputViewScribbleInteractionBegan:(FlutterTextInputView *)arg1;
- (void)flutterTextInputView:(FlutterTextInputView *)arg1 showToolbar:(int)arg2;
- (void)flutterTextInputView:(FlutterTextInputView *)arg1 showAutocorrectionPromptRectForStart:(unsigned long long)arg2 end:(unsigned long long)arg3 withClient:(int)arg4;
- (void)flutterTextInputView:(FlutterTextInputView *)arg1 updateFloatingCursor:(long long)arg2 withClient:(int)arg3 withPosition:(NSDictionary *)arg4;
- (void)flutterTextInputView:(FlutterTextInputView *)arg1 performAction:(long long)arg2 withClient:(int)arg3;
- (void)flutterTextInputView:(FlutterTextInputView *)arg1 updateEditingClient:(int)arg2 withDelta:(NSDictionary *)arg3;
- (void)flutterTextInputView:(FlutterTextInputView *)arg1 updateEditingClient:(int)arg2 withState:(NSDictionary *)arg3 withTag:(NSString *)arg4;
- (void)flutterTextInputView:(FlutterTextInputView *)arg1 updateEditingClient:(int)arg2 withState:(NSDictionary *)arg3;
@end

