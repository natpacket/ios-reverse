//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol TAVVideoCompositionTrack;

@interface TAVVideoCompositionPixelBuffer : NSObject
{
    struct __CVBuffer *_pixelBuffer;
    id <TAVVideoCompositionTrack> _track;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <TAVVideoCompositionTrack> track; // @synthesize track=_track;
@property(nonatomic) struct __CVBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;

@end

