//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GNLNVHFile.h"

@interface GNLNVHGzipFile : GNLNVHFile
{
    double _fileSizeFraction;
}

@property(nonatomic) double fileSizeFraction; // @synthesize fileSizeFraction=_fileSizeFraction;
- (long long)deflateToGzip:(id)arg1 source:(id)arg2;
- (_Bool)innerDeflateFromPath:(id)arg1 error:(id *)arg2;
- (void)deflateFromPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)deflateFromPath:(id)arg1 error:(id *)arg2;
- (long long)inflateGzip:(id)arg1 destination:(id)arg2;
- (_Bool)innerInflateToPath:(id)arg1 error:(id *)arg2;
- (void)inflateToPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)inflateToPath:(id)arg1 error:(id *)arg2;

@end

