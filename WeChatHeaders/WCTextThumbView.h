//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "RichTextLayoutDelegate-Protocol.h"

@class NSString, RichTextView;

@interface WCTextThumbView : UIView <RichTextLayoutDelegate>
{
    _Bool _needsUpdateTextContent;
    RichTextView *_richTextView;
    NSString *_text;
    long long _textVerticalAlignment;
    struct UIEdgeInsets _textPadding;
}

- (void).cxx_destruct;
@property(nonatomic) long long textVerticalAlignment; // @synthesize textVerticalAlignment=_textVerticalAlignment;
@property(nonatomic) struct UIEdgeInsets textPadding; // @synthesize textPadding=_textPadding;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) RichTextView *richTextView; // @synthesize richTextView=_richTextView;
- (_Bool)shouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2 richTextView:(id)arg3;
- (void)layoutSubviews;
- (struct CGSize)textMaxSize;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

