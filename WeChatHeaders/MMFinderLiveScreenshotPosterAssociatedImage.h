//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface MMFinderLiveScreenshotPosterAssociatedImage : NSObject
{
    NSString *_imageId;
    UIImage *_image;
    long long _layerLevel;
    unsigned long long _layerOrder;
    struct CGRect _normalizedFrame;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect normalizedFrame; // @synthesize normalizedFrame=_normalizedFrame;
@property(nonatomic) unsigned long long layerOrder; // @synthesize layerOrder=_layerOrder;
@property(nonatomic) long long layerLevel; // @synthesize layerLevel=_layerLevel;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *imageId; // @synthesize imageId=_imageId;
@property(readonly, nonatomic) long long order;
- (id)init;

@end

