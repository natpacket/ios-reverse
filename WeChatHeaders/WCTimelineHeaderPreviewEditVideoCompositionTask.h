//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCSightVideoCompositeTask.h"

@interface WCTimelineHeaderPreviewEditVideoCompositionTask : WCSightVideoCompositeTask
{
    struct CGSize _previewThumbSize;
}

@property(nonatomic) struct CGSize previewThumbSize; // @synthesize previewThumbSize=_previewThumbSize;
- (id)getThumbImageForEditVideoFromPath:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithTaskId:(id)arg1 srcPHAsset:(id)arg2 editVideoAttr:(id)arg3 compositionAttr:(id)arg4 previewThumbImageSize:(struct CGSize)arg5;

@end

