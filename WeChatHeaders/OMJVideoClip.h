//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OMJClip.h"

@class OMJContentSpatialDesc;

@interface OMJVideoClip : OMJClip
{
    OMJContentSpatialDesc *_contentSpatialDesc;
    struct CGRect _contentCropRect;
    CDStruct_e83c9415 _timeRangeInAsset;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect contentCropRect; // @synthesize contentCropRect=_contentCropRect;
@property(retain, nonatomic) OMJContentSpatialDesc *contentSpatialDesc; // @synthesize contentSpatialDesc=_contentSpatialDesc;
@property(readonly, nonatomic) CDStruct_e83c9415 timeRangeInAsset; // @synthesize timeRangeInAsset=_timeRangeInAsset;
- (id)initWithAssetInfo:(id)arg1 timeRangeInAsset:(CDStruct_e83c9415)arg2;
- (id)initWithAssetInfo:(id)arg1;

@end
