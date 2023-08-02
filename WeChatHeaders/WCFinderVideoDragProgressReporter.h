//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderVideoDragProgressReporter : NSObject
{
    _Bool _isPcr90;
    _Bool _isPause;
    _Bool _isDrag;
    unsigned long long _commentScene;
    double _timePointBeforeDpb;
    double _timePointAfterDpb;
    long long _screenType;
    NSString *_feedId;
    double _videoDurationTime;
}

- (void).cxx_destruct;
@property(nonatomic) double videoDurationTime; // @synthesize videoDurationTime=_videoDurationTime;
@property(retain, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property(nonatomic) _Bool isDrag; // @synthesize isDrag=_isDrag;
@property(nonatomic) long long screenType; // @synthesize screenType=_screenType;
@property(nonatomic) double timePointAfterDpb; // @synthesize timePointAfterDpb=_timePointAfterDpb;
@property(nonatomic) double timePointBeforeDpb; // @synthesize timePointBeforeDpb=_timePointBeforeDpb;
@property(nonatomic) _Bool isPause; // @synthesize isPause=_isPause;
@property(nonatomic) _Bool isPcr90; // @synthesize isPcr90=_isPcr90;
@property(nonatomic) unsigned long long commentScene; // @synthesize commentScene=_commentScene;
- (void)report;

@end

