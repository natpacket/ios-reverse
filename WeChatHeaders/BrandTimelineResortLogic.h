//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BrandTimelineViewController;

@interface BrandTimelineResortLogic : NSObject
{
    _Bool _hasTryResort;
    BrandTimelineViewController *_timelineVC;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasTryResort; // @synthesize hasTryResort=_hasTryResort;
@property(nonatomic) __weak BrandTimelineViewController *timelineVC; // @synthesize timelineVC=_timelineVC;
- (id)genResortCommItemFromExposeInfo:(id)arg1;
- (id)getResortContext:(id)arg1;
- (void)tryResortOnEnterTimeline;

@end

