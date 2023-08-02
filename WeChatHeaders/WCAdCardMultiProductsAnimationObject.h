//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class CAMediaTimingFunction, UIView;

@interface WCAdCardMultiProductsAnimationObject : MMObject
{
    UIView *_relatedView;
    double _duration;
    double _delay;
    double _fromOpacity;
    double _toOpacity;
    CAMediaTimingFunction *_timingFunction;
    struct CGPoint _fromPosition;
    struct CGPoint _toPosition;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAMediaTimingFunction *timingFunction; // @synthesize timingFunction=_timingFunction;
@property(nonatomic) double toOpacity; // @synthesize toOpacity=_toOpacity;
@property(nonatomic) double fromOpacity; // @synthesize fromOpacity=_fromOpacity;
@property(nonatomic) struct CGPoint toPosition; // @synthesize toPosition=_toPosition;
@property(nonatomic) struct CGPoint fromPosition; // @synthesize fromPosition=_fromPosition;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) __weak UIView *relatedView; // @synthesize relatedView=_relatedView;

@end
