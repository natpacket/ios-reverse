//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCEditPanGestureFilter.h"

@interface WCEditPanGestureLowPassFilter : WCEditPanGestureFilter
{
    double _factor;
    struct CGPoint _lastPoint;
}

@property(nonatomic) struct CGPoint lastPoint; // @synthesize lastPoint=_lastPoint;
@property(nonatomic) double factor; // @synthesize factor=_factor;
- (void)clearData;
- (struct CGPoint)filterWithMeasurePoint:(struct CGPoint)arg1;
- (id)init;

@end

