//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAssetImageGenerator;

@interface WCFinderVideoAnalysisMgr : NSObject
{
    AVAssetImageGenerator *_coverGenerator;
}

+ (id)convertRGBToHSL:(id)arg1;
+ (id)hsvArray:(id)arg1;
+ (id)formatRawWCFinderHSVModel:(id)arg1;
+ (id)totalFormatValue:(id)arg1;
+ (id)getFrequencyDicBy:(id)arg1;
+ (id)getImageHSVFrequencyDicByImage:(id)arg1;
+ (double)getHCRBetweenFrequencyFrom:(id)arg1 frequencyDicJ:(id)arg2;
+ (id)getWeightedByRaw:(id)arg1 curFrequencyDic:(id)arg2 len:(unsigned long long)arg3;
+ (id)genNewImageGeneratorByVideoPath:(id)arg1;
+ (unsigned long long)getImageColorfulIndex:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) AVAssetImageGenerator *coverGenerator; // @synthesize coverGenerator=_coverGenerator;
- (void)getVideoLensCount:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;

@end

