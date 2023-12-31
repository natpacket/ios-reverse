//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMKView-Protocol.h"

@class MMDynamicColor, MMKSecureEditTextOnTextChangedCallback, NSString;

@protocol MMKSecureEditText <MMKView>
- (void)setOnTextChangedCallback:(MMKSecureEditTextOnTextChangedCallback *)arg1;
- (_Bool)getIsCommonText;
- (void)setIsCommonText:(_Bool)arg1;
- (long long)getEncryptType;
- (void)setEncryptType:(long long)arg1;
- (int)getMaxLength;
- (void)setMaxLength:(int)arg1;
- (_Bool)getEnabled;
- (void)setEnabled:(_Bool)arg1;
- (NSString *)getDefaultValue;
- (void)setDefaultValue:(NSString *)arg1;
- (MMDynamicColor *)getTextColor;
- (void)setTextColor:(MMDynamicColor *)arg1;
- (long long)getClearButtonMode;
- (void)setClearButtonMode:(long long)arg1;
- (MMDynamicColor *)getTintColor;
- (void)setTintColor:(MMDynamicColor *)arg1;
- (_Bool)getFocus;
- (void)setFocus:(_Bool)arg1;
- (NSString *)getText;
- (void)setText:(NSString *)arg1;
- (NSString *)getHint;
- (void)setHint:(NSString *)arg1;
- (long long)getKeyboardType;
- (void)setKeyboardType:(long long)arg1;
- (void)setTextSize:(float)arg1;
- (_Bool)isCardFromatValid:(int)arg1;
@end

