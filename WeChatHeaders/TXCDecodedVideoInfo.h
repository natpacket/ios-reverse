//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TXCDecodedVideoInfo : NSObject
{
    unsigned int _pts;
    unsigned int _dts;
    int _nalType;
    struct __CVBuffer *_pixelBuffer;
    double _decodeCost;
}

@property(nonatomic) double decodeCost; // @synthesize decodeCost=_decodeCost;
@property(nonatomic) int nalType; // @synthesize nalType=_nalType;
@property(nonatomic) unsigned int dts; // @synthesize dts=_dts;
@property(nonatomic) unsigned int pts; // @synthesize pts=_pts;
@property(nonatomic) struct __CVBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;
- (void)dealloc;

@end
