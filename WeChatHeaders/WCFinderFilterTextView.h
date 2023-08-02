//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMGrowTextView.h"

@class NSArray, NSMutableArray, NSMutableAttributedString, NSRegularExpression, NSString, UIColor;
@protocol WCFinderFilterTextViewDelegate;

@interface WCFinderFilterTextView : MMGrowTextView
{
    _Bool _forbidWXEmoji;
    _Bool _forbidEmoji;
    _Bool _shouldHelpMovingCursor;
    _Bool _shouldMoveCursor;
    NSArray *_topicRangeArray;
    NSArray *_mentionRangeArray;
    unsigned long long _topicTextLength;
    unsigned long long _tagNumber;
    unsigned long long _mentionUserLimitNumber;
    NSMutableArray *_validCharacterArray;
    id <WCFinderFilterTextViewDelegate> _textViewDelegate;
    double _cursorPosition;
    NSArray *_eventRangeArray;
    NSArray *_invalidCharacterArray;
    NSMutableAttributedString *_attributeStr;
    NSMutableArray *_mentionContactArray;
    UIColor *_attributeTextColor;
    NSString *_lastText;
    NSRegularExpression *_mailMatcher;
}

+ (_Bool)isCharacters:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSRegularExpression *mailMatcher; // @synthesize mailMatcher=_mailMatcher;
@property(retain, nonatomic) NSString *lastText; // @synthesize lastText=_lastText;
@property(retain, nonatomic) UIColor *attributeTextColor; // @synthesize attributeTextColor=_attributeTextColor;
@property(retain, nonatomic) NSMutableArray *mentionContactArray; // @synthesize mentionContactArray=_mentionContactArray;
@property(retain, nonatomic) NSMutableAttributedString *attributeStr; // @synthesize attributeStr=_attributeStr;
@property(retain, nonatomic) NSArray *invalidCharacterArray; // @synthesize invalidCharacterArray=_invalidCharacterArray;
@property(retain, nonatomic) NSArray *eventRangeArray; // @synthesize eventRangeArray=_eventRangeArray;
@property(nonatomic) _Bool shouldMoveCursor; // @synthesize shouldMoveCursor=_shouldMoveCursor;
@property(nonatomic) double cursorPosition; // @synthesize cursorPosition=_cursorPosition;
@property(nonatomic) __weak id <WCFinderFilterTextViewDelegate> textViewDelegate; // @synthesize textViewDelegate=_textViewDelegate;
@property(nonatomic) _Bool shouldHelpMovingCursor; // @synthesize shouldHelpMovingCursor=_shouldHelpMovingCursor;
@property(retain, nonatomic) NSMutableArray *validCharacterArray; // @synthesize validCharacterArray=_validCharacterArray;
@property(nonatomic) _Bool forbidEmoji; // @synthesize forbidEmoji=_forbidEmoji;
@property(nonatomic) _Bool forbidWXEmoji; // @synthesize forbidWXEmoji=_forbidWXEmoji;
@property(nonatomic) unsigned long long mentionUserLimitNumber; // @synthesize mentionUserLimitNumber=_mentionUserLimitNumber;
@property(nonatomic) unsigned long long tagNumber; // @synthesize tagNumber=_tagNumber;
@property(nonatomic) unsigned long long topicTextLength; // @synthesize topicTextLength=_topicTextLength;
@property(retain, nonatomic) NSArray *mentionRangeArray; // @synthesize mentionRangeArray=_mentionRangeArray;
@property(retain, nonatomic) NSArray *topicRangeArray; // @synthesize topicRangeArray=_topicRangeArray;
- (struct _NSRange)getTopicRangeWhereCursorIn;
- (void)updateMentionContactArray:(id)arg1;
- (id)contactAttrAtTextView:(id)arg1 atIndex:(long long)arg2 effectiveRange:(struct _NSRange *)arg3;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (id)getTopicArray;
- (id)getMentionedNicknameArray;
- (id)genTextToXML;
- (_Bool)textHadEnoughMentionUser;
- (_Bool)textHasEnoughTagRange;
- (void)addWellSymbolToTextView;
- (void)replaceRange:(struct _NSRange)arg1 text:(id)arg2;
- (_Bool)becomeFirstResponder;
- (double)getCurrentCursorPointX;
- (double)getCursorRelativePosition;
- (id)getTopicQueryString;
- (_Bool)containInWhiteBlack:(id)arg1;
- (id)attriStrUseTagModelWithStr:(id)arg1;
- (void)setAttributeHighlightTextColor:(id)arg1;
- (float)unicodeLengthOfString:(id)arg1;
- (void)updateCursorPosition;
- (void)updateAttitudeContent;
- (id)_getUpdateTopicModel;
- (_Bool)isvalidMentionContactName:(id)arg1;
- (id)getInvalidStringContent;
- (void)triggerUpdateTopicModel;
- (_Bool)isLastCharacterAlphaNumeric:(id)arg1;
- (void)_onTextChange:(id)arg1;
- (void)UITextViewTextDidChangeNotification:(id)arg1;
- (id)initWithOriginHeight:(double)arg1;

@end
