//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMKView-Protocol.h"

@class MMDynamicColor, NSString;

@protocol MMKOpenIMInfoView <MMKView>
- (NSString *)getBusinessNameText;
- (void)setBusinessNameText:(NSString *)arg1;
- (NSString *)getTrueNameText;
- (void)setTrueNameText:(NSString *)arg1;
- (NSString *)getNickNameText;
- (void)setNickNameText:(NSString *)arg1;
- (NSString *)getFormatText;
- (void)setFormatText:(NSString *)arg1;
- (MMDynamicColor *)getTextColor;
- (void)setTextColor:(MMDynamicColor *)arg1;
- (long long)getTextAlign;
- (void)setTextAlign:(long long)arg1;
- (float)getTextSize;
- (void)setTextSize:(float)arg1;
- (void)updateContent;
@end

