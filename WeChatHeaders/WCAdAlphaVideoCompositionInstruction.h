//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVVideoCompositionInstruction-Protocol.h"

@class NSArray, NSString, WCAdAlphaVideoProcessor;

@interface WCAdAlphaVideoCompositionInstruction : NSObject <AVVideoCompositionInstruction>
{
    _Bool _enablePostProcessing;
    _Bool _containsTweening;
    int _passthroughTrackID;
    int _videoCompositeType;
    NSArray *_requiredSourceTrackIDs;
    NSArray *_layerInstructions;
    WCAdAlphaVideoProcessor *_alphaVideoProcessor;
    CDStruct_e83c9415 _timeRange;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAdAlphaVideoProcessor *alphaVideoProcessor; // @synthesize alphaVideoProcessor=_alphaVideoProcessor;
@property(nonatomic) int videoCompositeType; // @synthesize videoCompositeType=_videoCompositeType;
@property(copy, nonatomic) NSArray *layerInstructions; // @synthesize layerInstructions=_layerInstructions;
@property(readonly, nonatomic) int passthroughTrackID; // @synthesize passthroughTrackID=_passthroughTrackID;
@property(readonly, nonatomic) NSArray *requiredSourceTrackIDs; // @synthesize requiredSourceTrackIDs=_requiredSourceTrackIDs;
@property(readonly, nonatomic) _Bool containsTweening; // @synthesize containsTweening=_containsTweening;
@property(readonly, nonatomic) _Bool enablePostProcessing; // @synthesize enablePostProcessing=_enablePostProcessing;
@property(readonly, nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
- (struct __CVBuffer *)applyPixelBuffer:(struct __CVBuffer *)arg1;
- (id)initWithSourceTrackIDs:(id)arg1 timeRange:(CDStruct_e83c9415)arg2 videoCompositeType:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSArray *requiredSourceSampleDataTrackIDs;
@property(readonly) Class superclass;

@end

