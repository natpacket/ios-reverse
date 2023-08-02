//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PAGLayerImpl : NSObject
{
    shared_ptr_69e1d727 _pagLayer;
}

+ (id)BatchConvertToPAGMarkers:(void *)arg1;
+ (id)BatchConvertToPAGLayers:(const void *)arg1;
+ (id)ToPAGLayer:(shared_ptr_69e1d727)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setExcludedFromTimeline:(_Bool)arg1;
- (_Bool)excludedFromTimeline;
- (void)removeAllFilters;
- (void)addFilter:(id)arg1;
- (long long)numFilters;
- (void)dealloc;
- (struct CGRect)getBounds;
- (id)trackMatteLayer;
- (void)setProgress:(double)arg1;
- (double)getProgress;
- (void)setCurrentTime:(long long)arg1;
- (long long)currentTime;
- (void)setStartTime:(long long)arg1;
- (long long)startTime;
- (float)frameRate;
- (long long)duration;
- (long long)globalToLocalTime:(long long)arg1;
- (long long)localTimeToGlobal:(long long)arg1;
- (id)markers;
- (id)parent;
- (long long)editableIndex;
- (void)setVisible:(_Bool)arg1;
- (_Bool)visible;
- (struct CGAffineTransform)getTotalMatrix;
- (void)resetMatrix;
- (void)setMatrix:(struct CGAffineTransform)arg1;
- (struct CGAffineTransform)matrix;
- (id)layerName;
- (long long)layerType;
@property(nonatomic) shared_ptr_69e1d727 pagLayer;
- (id)initWithPagLayer:(shared_ptr_69e1d727)arg1;

@end

