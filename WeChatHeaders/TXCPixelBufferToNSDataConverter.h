//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TXCPixelBufferToNSDataConverter : NSObject
{
}

+ (unsigned long long)copyData:(const char *)arg1 toPixelBuffer:(struct __CVBuffer *)arg2 planeIndex:(int)arg3 planeWidth:(unsigned long long)arg4;
+ (void)copyPixelBuffer2dataPtr:(char **)arg1 pixelBuffer:(struct __CVBuffer *)arg2 planeIndex:(int)arg3;
+ (_Bool)copyData:(id)arg1 toPixelBuffer:(struct __CVBuffer *)arg2;
+ (_Bool)copyPixelBuffer:(struct __CVBuffer *)arg1 toData:(id)arg2;
+ (id)dataFromPixelBuffer:(struct __CVBuffer *)arg1;

@end

