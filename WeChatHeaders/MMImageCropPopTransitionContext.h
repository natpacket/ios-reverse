//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIImageView;

@interface MMImageCropPopTransitionContext : NSObject
{
    UIImageView *_imageView;
    struct CGRect _imageOriginFrameInWindow;
    struct CGRect _imageFinalFrameInWindow;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect imageFinalFrameInWindow; // @synthesize imageFinalFrameInWindow=_imageFinalFrameInWindow;
@property(nonatomic) struct CGRect imageOriginFrameInWindow; // @synthesize imageOriginFrameInWindow=_imageOriginFrameInWindow;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;

@end
