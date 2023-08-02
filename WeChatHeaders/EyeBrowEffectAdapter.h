//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WeEffectBaseAdapter.h"

@class NSNumber, NSString;

@interface EyeBrowEffectAdapter : WeEffectBaseAdapter
{
    NSNumber *_alpha;
    NSNumber *_faceModel;
    NSString *_path;
    NSNumber *_shrinkRate;
    NSNumber *_blendMode;
}

+ (id)weeffectType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *blendMode; // @synthesize blendMode=_blendMode;
@property(retain, nonatomic) NSNumber *shrinkRate; // @synthesize shrinkRate=_shrinkRate;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSNumber *faceModel; // @synthesize faceModel=_faceModel;
@property(retain, nonatomic) NSNumber *alpha; // @synthesize alpha=_alpha;
- (void)onJsonWriteDoneWithPath:(id)arg1;
- (void)onImageFetchDone:(_Bool)arg1;
- (void)load;

@end

