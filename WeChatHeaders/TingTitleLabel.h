//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@interface TingTitleLabel : UILabel
{
    double _linespacingFactor;
    double _maxWidth;
}

@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) double linespacingFactor; // @synthesize linespacingFactor=_linespacingFactor;
- (double)calcLineSpacing;
- (void)setMultiLineText:(id)arg1;
- (void)setText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

