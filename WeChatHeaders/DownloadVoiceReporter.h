//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DownloadVoiceReporter : NSObject
{
    unsigned long long _startTime;
}

+ (id)reporter;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
- (void)reportDownloadEnd:(id)arg1 ret:(int)arg2;
- (void)reportDownloadStart:(id)arg1;

@end

