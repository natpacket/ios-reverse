//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OMJSegment.h"

#import "OMJCropAdjustable-Protocol.h"
#import "OMJRotationAdjustable-Protocol.h"

@class NSString, OMJAssetInfo;

@interface OMJClipSegment : OMJSegment <OMJCropAdjustable, OMJRotationAdjustable>
{
    unsigned long long _clipType;
    SharedPtr_67e01d81 _backingClipSegment;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) SharedPtr_67e01d81 backingClipSegment; // @synthesize backingClipSegment=_backingClipSegment;
@property(readonly, nonatomic) unsigned long long clipType; // @synthesize clipType=_clipType;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) SharedPtr_3892eb03 backingAsset;
@property(readonly, nonatomic) SharedPtr_def310aa backingClip;
- (void)setRotationMode:(unsigned long long)arg1 shouldCommit:(_Bool)arg2;
@property(readonly, nonatomic) unsigned long long rotationMode;
- (void)setNormalizedCropRect:(struct CGRect)arg1 shouldCommit:(_Bool)arg2;
@property(readonly, nonatomic) struct CGRect normalizedCropRect;
- (_Bool)setTimeRangeInClip:(CDStruct_e83c9415)arg1;
@property(readonly, nonatomic) CDStruct_e83c9415 timeRangeInClip;
@property(readonly, nonatomic) CDStruct_1b6d18a9 clipDuration;
@property(readonly, nonatomic) OMJAssetInfo *assetInfo;
- (id)initWithBackingSegment:(const void *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

