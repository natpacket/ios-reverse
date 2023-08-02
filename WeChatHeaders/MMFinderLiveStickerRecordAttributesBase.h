//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveStickerRecordAttributesBase : NSObject
{
    NSString *_instanceId;
    unsigned long long _stickerType;
    double _nativeSizeWidth;
    double _nativeSizeHeight;
    double _transformA;
    double _transformB;
    double _transformC;
    double _transformD;
    double _transformTx;
    double _transformTy;
    double _normalizedSizeWidth;
    double _normalizedSizeHeight;
    double _normalizedCenterX;
    double _normalizedCenterY;
    double _normalizedAnchorPointX;
    double _normalizedAnchorPointY;
    double _normalizedTransformComponentsScaleWidth;
    double _normalizedTransformComponentsScaleHeight;
    double _normalizedTransformComponentsHorizontalShear;
    double _normalizedTransformComponentsRotation;
    double _normalizedTransformComponentsTranslationX;
    double _normalizedTransformComponentsTranslationY;
}

+ (id)stickerRecordAttributesFromItem:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) double normalizedTransformComponentsTranslationY; // @synthesize normalizedTransformComponentsTranslationY=_normalizedTransformComponentsTranslationY;
@property(nonatomic) double normalizedTransformComponentsTranslationX; // @synthesize normalizedTransformComponentsTranslationX=_normalizedTransformComponentsTranslationX;
@property(nonatomic) double normalizedTransformComponentsRotation; // @synthesize normalizedTransformComponentsRotation=_normalizedTransformComponentsRotation;
@property(nonatomic) double normalizedTransformComponentsHorizontalShear; // @synthesize normalizedTransformComponentsHorizontalShear=_normalizedTransformComponentsHorizontalShear;
@property(nonatomic) double normalizedTransformComponentsScaleHeight; // @synthesize normalizedTransformComponentsScaleHeight=_normalizedTransformComponentsScaleHeight;
@property(nonatomic) double normalizedTransformComponentsScaleWidth; // @synthesize normalizedTransformComponentsScaleWidth=_normalizedTransformComponentsScaleWidth;
@property(nonatomic) double normalizedAnchorPointY; // @synthesize normalizedAnchorPointY=_normalizedAnchorPointY;
@property(nonatomic) double normalizedAnchorPointX; // @synthesize normalizedAnchorPointX=_normalizedAnchorPointX;
@property(nonatomic) double normalizedCenterY; // @synthesize normalizedCenterY=_normalizedCenterY;
@property(nonatomic) double normalizedCenterX; // @synthesize normalizedCenterX=_normalizedCenterX;
@property(nonatomic) double normalizedSizeHeight; // @synthesize normalizedSizeHeight=_normalizedSizeHeight;
@property(nonatomic) double normalizedSizeWidth; // @synthesize normalizedSizeWidth=_normalizedSizeWidth;
@property(nonatomic) double transformTy; // @synthesize transformTy=_transformTy;
@property(nonatomic) double transformTx; // @synthesize transformTx=_transformTx;
@property(nonatomic) double transformD; // @synthesize transformD=_transformD;
@property(nonatomic) double transformC; // @synthesize transformC=_transformC;
@property(nonatomic) double transformB; // @synthesize transformB=_transformB;
@property(nonatomic) double transformA; // @synthesize transformA=_transformA;
@property(nonatomic) double nativeSizeHeight; // @synthesize nativeSizeHeight=_nativeSizeHeight;
@property(nonatomic) double nativeSizeWidth; // @synthesize nativeSizeWidth=_nativeSizeWidth;
@property(nonatomic) unsigned long long stickerType; // @synthesize stickerType=_stickerType;
@property(retain, nonatomic) NSString *instanceId; // @synthesize instanceId=_instanceId;
- (id)stickerItemFromRecordAttributes;
- (void)populateStickerItem:(id)arg1;
- (id)initWithStickerItem:(id)arg1;

@end
