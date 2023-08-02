//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextInput-Protocol.h"

@class EmoticonParser, MMLiveSlottedTextFieldRange, NSArray, NSCharacterSet, NSDictionary, NSMutableDictionary, NSMutableString, NSString, UIColor, UITextInputPasswordRules, UITextPosition, UITextRange;
@protocol MMLiveSlottedTextFieldDelegate, UITextInputDelegate, UITextInputTokenizer;

@interface MMLiveSlottedTextField : UIView <UITextInput>
{
    id <MMLiveSlottedTextFieldDelegate> _delegate;
    id <UITextInputDelegate> _inputDelegate;
    NSDictionary *_markedTextStyle;
    NSString *_instanceId;
    NSMutableString *_content;
    MMLiveSlottedTextFieldRange *_selectedRange;
    MMLiveSlottedTextFieldRange *_markedRange;
    id <UITextInputTokenizer> _textTokenizer;
    NSCharacterSet *_whitespaceSet;
    EmoticonParser *_wechatEmoticonParser;
    NSMutableDictionary *_wechatEmoticons;
    double _recommendedAspectRatio;
    UIView *_containerView;
    NSArray *_slots;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *slots; // @synthesize slots=_slots;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) double recommendedAspectRatio; // @synthesize recommendedAspectRatio=_recommendedAspectRatio;
@property(retain, nonatomic) NSMutableDictionary *wechatEmoticons; // @synthesize wechatEmoticons=_wechatEmoticons;
@property(retain, nonatomic) EmoticonParser *wechatEmoticonParser; // @synthesize wechatEmoticonParser=_wechatEmoticonParser;
@property(retain, nonatomic) NSCharacterSet *whitespaceSet; // @synthesize whitespaceSet=_whitespaceSet;
@property(retain, nonatomic) id <UITextInputTokenizer> textTokenizer; // @synthesize textTokenizer=_textTokenizer;
@property(retain, nonatomic) MMLiveSlottedTextFieldRange *markedRange; // @synthesize markedRange=_markedRange;
@property(retain, nonatomic) MMLiveSlottedTextFieldRange *selectedRange; // @synthesize selectedRange=_selectedRange;
@property(retain, nonatomic) NSMutableString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *instanceId; // @synthesize instanceId=_instanceId;
@property(copy, nonatomic) NSDictionary *markedTextStyle; // @synthesize markedTextStyle=_markedTextStyle;
@property(nonatomic) __weak id <UITextInputDelegate> inputDelegate; // @synthesize inputDelegate=_inputDelegate;
@property(nonatomic) __weak id <MMLiveSlottedTextFieldDelegate> delegate; // @synthesize delegate=_delegate;
- (void)logState;
- (id)nonWhitespaceSet;
- (id)scanTextForWeChatEmoticons:(id)arg1 result:(id *)arg2;
- (id)imageForWeChatEmoticonInSlot:(long long)arg1;
- (void)placeWeChatEmoticon:(id)arg1 inSlot:(long long)arg2;
- (void)updateSlotsSelection;
- (void)updateSlotsContent;
- (void)initializeComponentsWithSlotCount:(unsigned long long)arg1;
- (void)onTappedWithGesture:(id)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)characterRangeAtPoint:(struct CGPoint)arg1;
- (id)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;
- (id)selectionRectsForRange:(id)arg1;
- (id)closestPositionToPoint:(struct CGPoint)arg1;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (struct CGRect)firstRectForRange:(id)arg1;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (void)unmarkText;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (id)textInRange:(id)arg1;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
- (_Bool)validateSlots;
- (void)insertWeChatEmoticon:(id)arg1;
@property(readonly, nonatomic) id <UITextInputTokenizer> tokenizer;
@property(readonly, nonatomic) UITextPosition *endOfDocument;
@property(readonly, nonatomic) UITextPosition *beginningOfDocument;
@property(readonly, nonatomic) UITextRange *markedTextRange;
@property(copy) UITextRange *selectedTextRange;
@property(nonatomic) long long returnKeyType;
@property(nonatomic) long long spellCheckingType;
@property(nonatomic) long long autocorrectionType;
@property(readonly, nonatomic) _Bool hasText;
- (_Bool)canBecomeFirstResponder;
@property(readonly, nonatomic) _Bool inMultistageInputSession;
@property(retain, nonatomic) UIColor *textColor;
@property(retain, nonatomic) UIColor *invalidSelectedSlotBorderColor;
@property(retain, nonatomic) UIColor *selectedSlotBorderColor;
@property(retain, nonatomic) UIColor *slotBorderColor;
@property(retain, nonatomic) UIColor *slotBackgroundColor;
@property(retain, nonatomic) NSString *text;
- (id)initWithSlotCount:(unsigned long long)arg1;

// Remaining properties
@property(nonatomic) long long autocapitalizationType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id insertDictationResultPlaceholder;
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) long long keyboardType;
@property(copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property(nonatomic) long long selectionAffinity;
@property(nonatomic) long long smartDashesType;
@property(nonatomic) long long smartInsertDeleteType;
@property(nonatomic) long long smartQuotesType;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *textContentType;
@property(readonly, nonatomic) UIView *textInputView;

@end
