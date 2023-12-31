//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RTETextViewDataDelegate-Protocol.h"

@class MMUIViewController, NSString, UIAccessibilityElement, UITextPosition, WNContentStorage, WNTextView;

@protocol WNTextViewDataDelegate <RTETextViewDataDelegate>
- (_Bool)isNomalLineHeightAtPosition:(UITextPosition *)arg1 with:(WNTextView *)arg2;
- (void)onOpenTopicWithUrl:(NSString *)arg1;
- (void)onAccessiblityBecomeFocus:(UIAccessibilityElement *)arg1;
- (MMUIViewController *)getCurrentViewController;
- (void)onRedo;
- (void)onUndo;
- (WNContentStorage *)contentStorage;
- (void)editSelectedContent;
- (void)deleteSelectedContent;
- (void)cutSelectedContent;
- (void)copySelectedContent;
- (void)setSmallImageEnable:(_Bool)arg1;
- (void)setHighlightEnableOnSelectedContent:(_Bool)arg1;
- (void)setBoldEnableOnSelectedContent:(_Bool)arg1;
- (struct _NSRange)selectedRange;
- (_Bool)bEditable;
- (_Bool)canSelectAll;
- (void)selectAll;
- (void)pasteSelectedContent;
@end

