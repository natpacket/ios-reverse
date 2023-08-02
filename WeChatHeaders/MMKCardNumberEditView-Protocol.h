//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMKView-Protocol.h"

@class MMDynamicColor, MMKCardNumberEditViewOnTextChangedCallback, MMKCardNumberEditViewOnTextEndEditingCallback, NSString;

@protocol MMKCardNumberEditView <MMKView>
- (void)setOnTextEndEditingCallback:(MMKCardNumberEditViewOnTextEndEditingCallback *)arg1;
- (void)setOnTextChangedCallback:(MMKCardNumberEditViewOnTextChangedCallback *)arg1;
- (MMDynamicColor *)getTextColor;
- (void)setTextColor:(MMDynamicColor *)arg1;
- (_Bool)getFocus;
- (void)setFocus:(_Bool)arg1;
- (MMDynamicColor *)getHintColor;
- (void)setHintColor:(MMDynamicColor *)arg1;
- (NSString *)getHint;
- (void)setHint:(NSString *)arg1;
- (void)setText:(NSString *)arg1;
- (int)getInputTextLength;
- (_Bool)isBankCardNumber;
- (NSString *)getValue;
@end

