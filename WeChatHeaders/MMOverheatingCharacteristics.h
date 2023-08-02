//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface MMOverheatingCharacteristics : NSObject
{
    NSDate *_timeThatApplicationBecomedActive;
    NSDate *_timeThatApplicationResignedActive;
    NSDate *_timeThatApplicationEnteredForeground;
    NSDate *_timeThatApplicationEnteredBackground;
    NSDate *_timeThatNetworkChangedToUnreachable;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *timeThatNetworkChangedToUnreachable; // @synthesize timeThatNetworkChangedToUnreachable=_timeThatNetworkChangedToUnreachable;
@property(retain, nonatomic) NSDate *timeThatApplicationEnteredBackground; // @synthesize timeThatApplicationEnteredBackground=_timeThatApplicationEnteredBackground;
@property(retain, nonatomic) NSDate *timeThatApplicationEnteredForeground; // @synthesize timeThatApplicationEnteredForeground=_timeThatApplicationEnteredForeground;
@property(retain, nonatomic) NSDate *timeThatApplicationResignedActive; // @synthesize timeThatApplicationResignedActive=_timeThatApplicationResignedActive;
@property(retain, nonatomic) NSDate *timeThatApplicationBecomedActive; // @synthesize timeThatApplicationBecomedActive=_timeThatApplicationBecomedActive;
@property(readonly, nonatomic) double overheatingDuration;
@property(readonly, nonatomic) _Bool mayBeOverheating;

@end
