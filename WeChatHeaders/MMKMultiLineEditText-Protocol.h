//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMKView-Protocol.h"

@class MMDynamicColor, MMVoidBoolCallback, MMVoidCallback, MMVoidStringCallback, NSString;

@protocol MMKMultiLineEditText <MMKView>
- (_Bool)getEnabled;
- (void)setEnabled:(_Bool)arg1;
- (int)getMaxLength;
- (void)setMaxLength:(int)arg1;
- (_Bool)getFocus;
- (void)setFocus:(_Bool)arg1;
- (MMDynamicColor *)getHintColor;
- (void)setHintColor:(MMDynamicColor *)arg1;
- (NSString *)getHint;
- (void)setHint:(NSString *)arg1;
- (long long)getTextAlign;
- (void)setTextAlign:(long long)arg1;
- (NSString *)getTextFont;
- (void)setTextFont:(NSString *)arg1;
- (MMDynamicColor *)getTextColor;
- (void)setTextColor:(MMDynamicColor *)arg1;
- (float)getTextSize;
- (void)setTextSize:(float)arg1;
- (NSString *)getText;
- (void)setText:(NSString *)arg1;
- (void)setOnTextEndEditingImpl:(MMVoidCallback *)arg1;
- (void)setOnFocusChangedImpl:(MMVoidBoolCallback *)arg1;
- (void)setOnTextChangedImpl:(MMVoidStringCallback *)arg1;
@end
