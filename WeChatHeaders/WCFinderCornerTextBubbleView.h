//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class RichTextView;

@interface WCFinderCornerTextBubbleView : MMUIView
{
    RichTextView *_richTextView;
}

+ (long long)getTextMaxLengthCountByTotalWidth:(double)arg1;
+ (double)heightOfWidth:(double)arg1 content:(id)arg2;
+ (id)genRichTextViewByWidth:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) RichTextView *richTextView; // @synthesize richTextView=_richTextView;
- (void)updateWithContent:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

