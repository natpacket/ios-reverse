//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMWebImageView.h"

@class UIImage, UIView;

@interface TingCoverImageView : MMWebImageView
{
    _Bool _disableHighlight;
    UIImage *_customDefaultImage;
    UIView *_highlightedMaskView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *highlightedMaskView; // @synthesize highlightedMaskView=_highlightedMaskView;
@property(nonatomic) _Bool disableHighlight; // @synthesize disableHighlight=_disableHighlight;
@property(retain, nonatomic) UIImage *customDefaultImage; // @synthesize customDefaultImage=_customDefaultImage;
- (void)setImageWithUrlStr:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)internalSetDefaultImage;
- (id)initWithFrame:(struct CGRect)arg1;

@end

