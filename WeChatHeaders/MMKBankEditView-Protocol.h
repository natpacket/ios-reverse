//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMKView-Protocol.h"

@class MMDynamicColor, MMITransmitKvData, MMKBankEditViewOnSeletBankCallback, NSString;

@protocol MMKBankEditView <MMKView>
- (void)setOnSeletBankCallback:(MMKBankEditViewOnSeletBankCallback *)arg1;
- (long long)getFontStyle;
- (void)setFontStyle:(long long)arg1;
- (float)getTextSize;
- (void)setTextSize:(float)arg1;
- (MMDynamicColor *)getTextColor;
- (void)setTextColor:(MMDynamicColor *)arg1;
- (_Bool)getFocus;
- (void)setFocus:(_Bool)arg1;
- (void)openBankSelectView;
- (NSString *)getSelectedBankType;
- (void)setSelected:(NSString *)arg1;
- (void)setData:(MMITransmitKvData *)arg1;
@end

