//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@interface MMLiveShopShelfDragBar : MMUIView
{
    MMUIView *_barView;
    double _displayDragCloseStyleProgress;
}

- (void).cxx_destruct;
@property(nonatomic) double displayDragCloseStyleProgress; // @synthesize displayDragCloseStyleProgress=_displayDragCloseStyleProgress;
@property(retain, nonatomic) MMUIView *barView; // @synthesize barView=_barView;
@property(nonatomic) _Bool displayDragCloseStyle;
- (void)handleDragBarGestureEnd;
- (void)handleDragBarGestureChange:(double)arg1;
- (void)doLayoutBarView;
- (void)updateDisplayDragCloseStyle;
- (void)layoutSubviews;
- (void)updateBarViewColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
