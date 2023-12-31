//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ILinkEventExt-Protocol.h"
#import "IWARichTextViewHelper-Protocol.h"

@class NSString, RichTextView, UIColor, UIFont, UIView;
@protocol WARichTextViewHelperDelegate;

@interface WARichTextViewHelper : NSObject <ILinkEventExt, IWARichTextViewHelper>
{
    RichTextView *_internalView;
    NSString *_content;
    id <WARichTextViewHelperDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WARichTextViewHelperDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
- (double)getHeightForContent:(id)arg1 font:(id)arg2 width:(double)arg3 parserType:(unsigned long long)arg4;
- (void)onTextClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
@property(retain, nonatomic) NSString *truncatedTrailingLinkUrl;
@property(retain, nonatomic) UIColor *truncatedTrailingLinkColor;
@property(retain, nonatomic) NSString *truncatedTrailingLinkText;
@property(nonatomic) _Bool lineBreakByClipping;
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
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

