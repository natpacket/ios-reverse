//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OMJOverlayGuideLine.h"

@class UIView;

@interface OMJOverlayVerticalGuideLine : OMJOverlayGuideLine
{
    UIView *_lineTop;
    UIView *_lineBottom;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *lineBottom; // @synthesize lineBottom=_lineBottom;
@property(retain, nonatomic) UIView *lineTop; // @synthesize lineTop=_lineTop;
- (void)configWithGuideLineStyle:(id)arg1;
- (void)commonInit;

@end

