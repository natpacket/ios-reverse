//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol TAVKeyEventMonitorObserver;

@interface TAVKeyEventMonitor : NSObject
{
    _Bool _enableAutoReport;
    id <TAVKeyEventMonitorObserver> _observer;
}

+ (id)shared;
- (void).cxx_destruct;
@property(retain, nonatomic) id <TAVKeyEventMonitorObserver> observer; // @synthesize observer=_observer;
@property(nonatomic) _Bool enableAutoReport; // @synthesize enableAutoReport=_enableAutoReport;
- (id)init;

@end

