//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMWebFullSnapshotPerformace : NSObject
{
    _Bool _isCompress;
    _Bool _cropByLimitHeight;
    unsigned int _freeMemInKB;
    unsigned int _predictImageMemInKB;
    unsigned int _realImageMemInKB;
    double _scale;
    unsigned long long _costTime;
    struct CGSize _originContentSize;
    struct CGSize _contentSize;
    struct CGSize _imageSize;
}

@property(nonatomic) unsigned long long costTime; // @synthesize costTime=_costTime;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) _Bool cropByLimitHeight; // @synthesize cropByLimitHeight=_cropByLimitHeight;
@property(nonatomic) _Bool isCompress; // @synthesize isCompress=_isCompress;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) struct CGSize originContentSize; // @synthesize originContentSize=_originContentSize;
@property(nonatomic) unsigned int realImageMemInKB; // @synthesize realImageMemInKB=_realImageMemInKB;
@property(nonatomic) unsigned int predictImageMemInKB; // @synthesize predictImageMemInKB=_predictImageMemInKB;
@property(nonatomic) unsigned int freeMemInKB; // @synthesize freeMemInKB=_freeMemInKB;
- (id)description;

@end

