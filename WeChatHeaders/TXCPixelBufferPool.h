//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TXCPixelBufferPool : NSObject
{
    _Bool _metalCompatible;
    unsigned long long _format;
    const struct __CFString *_yCbCrMatrixKey;
    struct __CVPixelBufferPool *_pool;
    struct CGSize _size;
}

@property(nonatomic) struct __CVPixelBufferPool *pool; // @synthesize pool=_pool;
@property(nonatomic) const struct __CFString *yCbCrMatrixKey; // @synthesize yCbCrMatrixKey=_yCbCrMatrixKey;
@property(nonatomic) _Bool metalCompatible; // @synthesize metalCompatible=_metalCompatible;
@property(nonatomic) unsigned long long format; // @synthesize format=_format;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
- (void)releaseBufferPool;
- (void)createBufferPool;
- (struct __CVBuffer *)createPixelBuffer;
- (void)resetBufferPool;
- (void)dealloc;
- (id)initWithVideoFormat:(unsigned long long)arg1;

@end

