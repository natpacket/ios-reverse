//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class RichTextView, UIImageView;

@interface WCFinderForbidBannerView : MMUIView
{
    UIImageView *_infoImageView;
    RichTextView *_textView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RichTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIImageView *infoImageView; // @synthesize infoImageView=_infoImageView;
- (void)updateWithIconImage:(id)arg1 text:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

