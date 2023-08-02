//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "MMGrowTextViewDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class CAShapeLayer, MMFinderLiveQuickReplyModel, MMGrowTextView, MMUIButton, NSIndexPath, NSString;

@interface MMFinderLiveSetQuickReplyTableViewCell : UITableViewCell <MMGrowTextViewDelegate, UITextViewDelegate>
{
    MMFinderLiveQuickReplyModel *_item;
    NSIndexPath *_indexPath;
    CDUnknownBlockType _cleanBlock;
    CDUnknownBlockType _textViewDidChangeBlock;
    MMGrowTextView *_textView;
    CAShapeLayer *_shapeLayer;
    MMUIButton *_cleanButton;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *cleanButton; // @synthesize cleanButton=_cleanButton;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) MMGrowTextView *textView; // @synthesize textView=_textView;
@property(copy, nonatomic) CDUnknownBlockType textViewDidChangeBlock; // @synthesize textViewDidChangeBlock=_textViewDidChangeBlock;
@property(copy, nonatomic) CDUnknownBlockType cleanBlock; // @synthesize cleanBlock=_cleanBlock;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) MMFinderLiveQuickReplyModel *item; // @synthesize item=_item;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)onClickcleanButton:(id)arg1;
- (void)fixTopicText:(_Bool)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)compleEdit;
- (void)layoutUI;
- (void)dealloc;
- (void)createUI;
- (void)makeFirstResponder;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
