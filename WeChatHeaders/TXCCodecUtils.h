//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TXCCodecUtils : NSObject
{
}

+ (long long)h265NalTypeFromValue:(const char *)arg1;
+ (long long)h264NalTypeFromValue:(const char *)arg1;
+ (const char *)searchNalStartFrom:(const char *)arg1 length:(long long)arg2 startCodeLen:(long long *)arg3;
+ (id)annexBNalusFrom:(const char *)arg1 length:(unsigned long long)arg2;
+ (struct opaqueCMSampleBuffer *)avccBufferFromEncodedNals:(id)arg1 format:(struct opaqueCMFormatDescription *)arg2 pts:(unsigned long long)arg3;
+ (_Bool)isParameterSetsComplete:(id)arg1 forHevc:(_Bool)arg2;
+ (id)parameterSetsFromNalus:(id)arg1 forHevc:(_Bool)arg2;
+ (id)parameterSetDataFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 isAnnexB:(_Bool)arg2 isHevc:(_Bool)arg3;
+ (id)encodedDataFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 isIFrame:(_Bool)arg2 isAnnexB:(_Bool)arg3 isHevc:(_Bool)arg4;
+ (_Bool)isIFrame:(struct opaqueCMSampleBuffer *)arg1;

@end

