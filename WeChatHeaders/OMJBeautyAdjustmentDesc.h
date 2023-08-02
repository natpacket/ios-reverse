//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface OMJBeautyAdjustmentDesc : NSObject
{
    _Bool _isBeautyEnabled;
    float _skinSmoothness;
    float _twowayBrightRate;
    float _faceSlimness;
    float _eyeEnhancement;
    float _eyeBrightness;
    float _headShrinkage;
    float _cheekShrinkage;
    float _jawShrinkage;
    float _noseShrinkage;
    float _darkCircleReduction;
    float _smileFoldReduction;
    float _teethWhiteness;
    float _redLip;
    float _lipShape;
    float _contouringRate;
    float _clarity;
    float _noseTip;
    float _nasalRoot;
    float _noseWing;
    float _eyelidDownStrength;
    float _eyeDistanceFactor;
    float _browThickness;
    float _browDistance;
    float _browPeak;
    NSString *_presetID;
}

+ (id)goddessBeautyAdjustmentDesc;
+ (id)godBeautyAdjustmentDesc;
+ (id)naturalBeautyAdjustmentDesc;
+ (id)classicBeautyAdjustmentDesc;
+ (id)nullBeautyAdjustmentDesc;
- (void).cxx_destruct;
@property(nonatomic) _Bool isBeautyEnabled; // @synthesize isBeautyEnabled=_isBeautyEnabled;
@property(nonatomic) float browPeak; // @synthesize browPeak=_browPeak;
@property(nonatomic) float browDistance; // @synthesize browDistance=_browDistance;
@property(nonatomic) float browThickness; // @synthesize browThickness=_browThickness;
@property(nonatomic) float eyeDistanceFactor; // @synthesize eyeDistanceFactor=_eyeDistanceFactor;
@property(nonatomic) float eyelidDownStrength; // @synthesize eyelidDownStrength=_eyelidDownStrength;
@property(nonatomic) float noseWing; // @synthesize noseWing=_noseWing;
@property(nonatomic) float nasalRoot; // @synthesize nasalRoot=_nasalRoot;
@property(nonatomic) float noseTip; // @synthesize noseTip=_noseTip;
@property(nonatomic) float clarity; // @synthesize clarity=_clarity;
@property(nonatomic) float contouringRate; // @synthesize contouringRate=_contouringRate;
@property(nonatomic) float lipShape; // @synthesize lipShape=_lipShape;
@property(nonatomic) float redLip; // @synthesize redLip=_redLip;
@property(nonatomic) float teethWhiteness; // @synthesize teethWhiteness=_teethWhiteness;
@property(nonatomic) float smileFoldReduction; // @synthesize smileFoldReduction=_smileFoldReduction;
@property(nonatomic) float darkCircleReduction; // @synthesize darkCircleReduction=_darkCircleReduction;
@property(nonatomic) float noseShrinkage; // @synthesize noseShrinkage=_noseShrinkage;
@property(nonatomic) float jawShrinkage; // @synthesize jawShrinkage=_jawShrinkage;
@property(nonatomic) float cheekShrinkage; // @synthesize cheekShrinkage=_cheekShrinkage;
@property(nonatomic) float headShrinkage; // @synthesize headShrinkage=_headShrinkage;
@property(nonatomic) float eyeBrightness; // @synthesize eyeBrightness=_eyeBrightness;
@property(nonatomic) float eyeEnhancement; // @synthesize eyeEnhancement=_eyeEnhancement;
@property(nonatomic) float faceSlimness; // @synthesize faceSlimness=_faceSlimness;
@property(nonatomic) float twowayBrightRate; // @synthesize twowayBrightRate=_twowayBrightRate;
@property(nonatomic) float skinSmoothness; // @synthesize skinSmoothness=_skinSmoothness;
@property(retain, nonatomic) NSString *presetID; // @synthesize presetID=_presetID;
- (id)description;
- (id)initWithBackingDesc:(const void *)arg1;
- (id)initWithBeautyAdjustmentDesc:(id)arg1;

@end

