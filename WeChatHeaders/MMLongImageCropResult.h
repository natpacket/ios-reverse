//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIImage;

@interface MMLongImageCropResult : NSObject
{
    UIImage *_croppedImage;
    double _topCroppedRatio;
    double _bottomCroppedRatio;
}

- (void).cxx_destruct;
@property(nonatomic) double bottomCroppedRatio; // @synthesize bottomCroppedRatio=_bottomCroppedRatio;
@property(nonatomic) double topCroppedRatio; // @synthesize topCroppedRatio=_topCroppedRatio;
@property(retain, nonatomic) UIImage *croppedImage; // @synthesize croppedImage=_croppedImage;
- (id)description;

@end

