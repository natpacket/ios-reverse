//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WCFinderSimplePlayerPlayParam : NSObject
{
    _Bool _isSilencePlay;
    _Bool _notLoopPlay;
    _Bool _isFullScreenViewScene;
    _Bool _pauseVideo;
    double _startPlayTime;
    unsigned long long _wcPlayerScene;
}

+ (id)defaultParam;
@property(nonatomic) _Bool pauseVideo; // @synthesize pauseVideo=_pauseVideo;
@property(nonatomic) _Bool isFullScreenViewScene; // @synthesize isFullScreenViewScene=_isFullScreenViewScene;
@property(nonatomic) unsigned long long wcPlayerScene; // @synthesize wcPlayerScene=_wcPlayerScene;
@property(nonatomic) _Bool notLoopPlay; // @synthesize notLoopPlay=_notLoopPlay;
@property(nonatomic) _Bool isSilencePlay; // @synthesize isSilencePlay=_isSilencePlay;
@property(nonatomic) double startPlayTime; // @synthesize startPlayTime=_startPlayTime;

@end
