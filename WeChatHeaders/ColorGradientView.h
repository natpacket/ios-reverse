//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer;

@interface ColorGradientView : UIView
{
    CAGradientLayer *_gradientLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
- (void)layoutSubviews;
- (void)commonConfiWithColor:(id)arg1 alphaTop:(double)arg2 alphaBottom:(double)arg3;
- (unsigned long long)countOfSubLayers;
- (void)configureWithLocationTop:(double)arg1 locationBottom:(double)arg2 startPoint:(struct CGPoint)arg3 endPoint:(struct CGPoint)arg4;
- (void)configureWithColor:(id)arg1 alphaTop:(double)arg2 alphaBottom:(double)arg3;
- (id)initWithFrame:(struct CGRect)arg1 color:(id)arg2 alphaTop:(double)arg3 alphaBottom:(double)arg4;

@end

