//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class MMWebImageView, RichTextView;

@interface WCFinderGuideLinkBubbleView : MMUIView
{
    MMWebImageView *_iconImageView;
    RichTextView *_textView;
    double _maxWidth;
}

- (void).cxx_destruct;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(retain, nonatomic) RichTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) MMWebImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void)updateWithModel:(id)arg1;
- (void)layoutAllSubviews;
- (id)initWithFrame:(struct CGRect)arg1 maxWidth:(double)arg2;

@end

