//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMFinderLiveGestureWeVisionRenderParams;

@interface MMFinderLiveGestureWeVisionRenderTask : NSObject
{
    _Bool _started;
    long long _renderScriptId;
    long long _animationResourceId;
    MMFinderLiveGestureWeVisionRenderParams *_parameters;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveGestureWeVisionRenderParams *parameters; // @synthesize parameters=_parameters;
@property(nonatomic) _Bool started; // @synthesize started=_started;
@property(nonatomic) long long animationResourceId; // @synthesize animationResourceId=_animationResourceId;
@property(nonatomic) long long renderScriptId; // @synthesize renderScriptId=_renderScriptId;

@end

