//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RTETextView.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "WNAccessibilityElementDelegate-Protocol.h"

@class NSMutableArray, NSString, UILabel;
@protocol WNTextViewDataDelegate, WNTextViewOperationDelegate;

@interface WNTextView : RTETextView <WNAccessibilityElementDelegate, UIGestureRecognizerDelegate>
{
    NSMutableArray *m_accessiblityElement;
    NSMutableArray *m_urlArray;
    NSString *m_touchUrl;
    UILabel *m_placeHolder;
    _Bool m_onTouch;
    struct CGPoint m_touchPoint;
    _Bool m_readyToShowMMMenu;
    _Bool _needUpdateAccessbility;
    id <WNTextViewOperationDelegate> _operationDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needUpdateAccessbility; // @synthesize needUpdateAccessbility=_needUpdateAccessbility;
@property(nonatomic) __weak id <WNTextViewOperationDelegate> operationDelegate; // @synthesize operationDelegate=_operationDelegate;
- (void)onPanAction:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)setAttributedText:(id)arg1;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)calculateTouchAreaUrl:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)jumpLink;
- (_Bool)handleLinkClick;
- (_Bool)handleTouchLinkArea:(struct CGPoint)arg1;
- (void)tryShowLinkStyle;
- (void)onEditOrderList:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)select:(id)arg1;
- (void)paste:(id)arg1;
- (void)setSmallImage:(id)arg1;
- (void)setLargeImage:(id)arg1;
- (void)setHighlightFromKey:(id)arg1;
- (void)setBoldFromKey:(id)arg1;
- (void)onEdit:(id)arg1;
- (void)onPaste:(id)arg1;
- (void)onCut:(id)arg1;
- (void)onCopy:(id)arg1;
- (void)onDelete:(id)arg1;
- (id)keyCommands;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecameFirstResponder;
- (void)tryToShowMMMenu;
- (id)editMenuForTextRange:(id)arg1 suggestedActions:(id)arg2;
- (void)menuWillHide;
- (void)tryScrollTouchPointToVisible;
@property(nonatomic) __weak id <WNTextViewDataDelegate> dataDelegate;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)selectionRectsForRange:(id)arg1;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (id)snapshop;
- (void)updatePlaceHolder;
- (void)setPlaceHolderHidden:(_Bool)arg1;
- (void)setPlaceHolder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)getContentWith:(struct _NSRange)arg1;
- (void)changeFocusTo:(_Bool)arg1 curElement:(id)arg2;
- (void)setSelectedLocation:(unsigned long long)arg1;
- (void)onBecomeFocus:(id)arg1;
- (_Bool)isAccessibilityElement;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (void)fixAccessibilityFocusOn:(id)arg1;
- (void)tryUpdateAccessbilityElement;
- (long long)accessibilityElementCount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

