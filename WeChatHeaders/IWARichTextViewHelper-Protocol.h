//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIColor, UIFont, UIView;
@protocol WARichTextViewHelperDelegate;

@protocol IWARichTextViewHelper <NSObject>
@property(nonatomic) _Bool lineBreakByClipping;
@property(retain, nonatomic) NSString *truncatedTrailingLinkUrl;
@property(retain, nonatomic) UIColor *truncatedTrailingLinkColor;
@property(retain, nonatomic) NSString *truncatedTrailingLinkText;
@property(retain, nonatomic) UIColor *linkColor;
@property(nonatomic) _Bool bHandleTextClick;
@property(nonatomic) long long textAlignment;
@property(nonatomic) double lineNumber;
@property(nonatomic) double lineSpacing;
@property(nonatomic) double maxWidth;
@property(nonatomic) unsigned long long parserType;
@property(retain, nonatomic) UIColor *textColor;
@property(retain, nonatomic) UIFont *textFont;
@property(nonatomic) _Bool shouldHandleLongPress;
@property(nonatomic) _Bool isTouchesPassOn;
@property(readonly, nonatomic) UIView *internalView;
- (double)getHeightForContent:(NSString *)arg1 font:(UIFont *)arg2 width:(double)arg3 parserType:(unsigned long long)arg4;
- (void)setDelegate:(id <WARichTextViewHelperDelegate>)arg1;
- (void)setContent:(NSString *)arg1;
@end
