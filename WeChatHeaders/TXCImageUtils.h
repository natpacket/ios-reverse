//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TXCImageUtils : NSObject
{
}

+ (id)createImageFromImage:(id)arg1 withAngle:(double)arg2;
+ (id)createImageWithColor:(id)arg1 width:(int)arg2 height:(int)arg3;
+ (id)imageFromMTLTexture:(id)arg1;
+ (_Bool)isLandscape:(unsigned int)arg1;
+ (_Bool)isMirrored:(unsigned int)arg1;
+ (id)imageFromCgImage:(struct CGImage *)arg1;
+ (struct CGImage *)cgImageFromImage:(id)arg1;

@end
