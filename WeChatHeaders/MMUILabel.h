//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UILongPressGestureRecognizer;

@interface MMUILabel : UILabel <UIGestureRecognizerDelegate>
{
    _Bool _useRedesignLinespacing;
    _Bool _enableLongPressCopy;
    unsigned long long _textStyle;
    double _linespacingFactor;
    NSString *_textToCopy;
    UILongPressGestureRecognizer *_longPressCopyGesture;
}

+ (id)DynamicLabel:(id)arg1 textStyle:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressCopyGesture; // @synthesize longPressCopyGesture=_longPressCopyGesture;
@property(retain, nonatomic) NSString *textToCopy; // @synthesize textToCopy=_textToCopy;
@property(nonatomic) _Bool enableLongPressCopy; // @synthesize enableLongPressCopy=_enableLongPressCopy;
@property(nonatomic) double linespacingFactor; // @synthesize linespacingFactor=_linespacingFactor;
@property(nonatomic) _Bool useRedesignLinespacing; // @synthesize useRedesignLinespacing=_useRedesignLinespacing;
@property(nonatomic) unsigned long long textStyle; // @synthesize textStyle=_textStyle;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)onLongPressCopy:(id)arg1;
- (void)longPressToCopy:(id)arg1;
- (void)menuItemHidden:(id)arg1;
- (double)calcLineSpacing;
- (void)setAttributedText:(id)arg1;
- (void)setText:(id)arg1;
- (void)setNumberOfLines:(long long)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithTextStyle:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)setText:(id)arg1 lineSpacing:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

