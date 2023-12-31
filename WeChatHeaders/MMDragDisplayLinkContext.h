//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CAMediaTimingFunction;

@interface MMDragDisplayLinkContext : NSObject
{
    double _beginTopValue;
    double _beginProgressValue;
    double _beginAlpha;
    double _endTopValue;
    double _endProgressValue;
    double _endAlpha;
    double _totalDuration;
    CAMediaTimingFunction *_timingFunction;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAMediaTimingFunction *timingFunction; // @synthesize timingFunction=_timingFunction;
@property(nonatomic) double totalDuration; // @synthesize totalDuration=_totalDuration;
@property(nonatomic) double endAlpha; // @synthesize endAlpha=_endAlpha;
@property(nonatomic) double endProgressValue; // @synthesize endProgressValue=_endProgressValue;
@property(nonatomic) double endTopValue; // @synthesize endTopValue=_endTopValue;
@property(nonatomic) double beginAlpha; // @synthesize beginAlpha=_beginAlpha;
@property(nonatomic) double beginProgressValue; // @synthesize beginProgressValue=_beginProgressValue;
@property(nonatomic) double beginTopValue; // @synthesize beginTopValue=_beginTopValue;
- (double)changingAlphaValue:(double)arg1;
- (double)changingProgressValue:(double)arg1;
- (double)changingTopValue:(double)arg1;

@end

