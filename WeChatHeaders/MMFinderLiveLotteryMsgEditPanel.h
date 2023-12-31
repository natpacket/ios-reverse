//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMFinderLiveLinkPromoteEditPanel.h"

#import "MMGrowTextViewDelegate-Protocol.h"

@class MMGrowTextView, NSString, UILabel, UIView;

@interface MMFinderLiveLotteryMsgEditPanel : MMFinderLiveLinkPromoteEditPanel <MMGrowTextViewDelegate>
{
    NSString *_msgTitleText;
    NSString *_msgPlaceholderText;
    CDUnknownBlockType _completion;
    double _keyboardHeight;
    MMGrowTextView *_growTextView;
    UIView *_inputContentBackView;
    UILabel *_wordCountTips;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *wordCountTips; // @synthesize wordCountTips=_wordCountTips;
@property(retain, nonatomic) UIView *inputContentBackView; // @synthesize inputContentBackView=_inputContentBackView;
@property(retain, nonatomic) MMGrowTextView *growTextView; // @synthesize growTextView=_growTextView;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSString *msgPlaceholderText; // @synthesize msgPlaceholderText=_msgPlaceholderText;
@property(retain, nonatomic) NSString *msgTitleText; // @synthesize msgTitleText=_msgTitleText;
- (void)onRightButtonAction;
- (void)onLeftButtonAction;
- (id)getCurrentLeftButton;
- (double)contentHeight;
- (id)stringByRemovingLastEmptyLineInString:(id)arg1;
- (void)layoutWordCountTips;
- (void)fixTopicText:(_Bool)arg1;
- (void)TextDidChanged:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)updateConfig;
- (id)validUriPrefixes;
- (id)placeholderText;
- (id)titleText;
- (void)layoutOtherUI;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

