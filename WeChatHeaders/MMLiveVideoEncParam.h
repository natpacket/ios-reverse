//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMLiveVideoEncParam : NSObject
{
    _Bool _enableAdjustRes;
    int _videoFps;
    int _videoBitrate;
    int _minVideoBitrate;
    long long _videoResolution;
    long long _resMode;
}

+ (long long)videoResolutionModeToTRTCType:(long long)arg1;
+ (long long)videoResolutionToTRTCType:(long long)arg1;
+ (long long)videoResolutionModeFromTRTCType:(long long)arg1;
+ (long long)videoResolutionFromTRTCType:(long long)arg1;
@property(nonatomic) _Bool enableAdjustRes; // @synthesize enableAdjustRes=_enableAdjustRes;
@property(nonatomic) int minVideoBitrate; // @synthesize minVideoBitrate=_minVideoBitrate;
@property(nonatomic) int videoBitrate; // @synthesize videoBitrate=_videoBitrate;
@property(nonatomic) int videoFps; // @synthesize videoFps=_videoFps;
@property(nonatomic) long long resMode; // @synthesize resMode=_resMode;
@property(nonatomic) long long videoResolution; // @synthesize videoResolution=_videoResolution;
- (id)description;
- (id)genTRTCVideoEncParam;

@end

