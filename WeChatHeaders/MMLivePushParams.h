//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TRTCParams;

@interface MMLivePushParams : NSObject
{
    _Bool _isAudience;
    _Bool _forceUseTRTCAudioDevice;
    TRTCParams *_trtcParams;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool forceUseTRTCAudioDevice; // @synthesize forceUseTRTCAudioDevice=_forceUseTRTCAudioDevice;
@property(retain, nonatomic) TRTCParams *trtcParams; // @synthesize trtcParams=_trtcParams;
@property(nonatomic) _Bool isAudience; // @synthesize isAudience=_isAudience;

@end
