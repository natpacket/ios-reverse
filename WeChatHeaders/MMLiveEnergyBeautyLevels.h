//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexSet;

@interface MMLiveEnergyBeautyLevels : NSObject
{
    NSIndexSet *_availableItemTypesForFaceSkin;
    NSIndexSet *_availableItemTypesForFaceShape;
    long long _beautyLevelForFaceSkin;
    long long _beautyLevelForFaceShape;
}

+ (id)beautyLevelsForSuitItem:(id)arg1;
+ (_Bool)isItemTypeForFaceShape:(unsigned long long)arg1;
+ (_Bool)isItemTypeForFaceSkin:(unsigned long long)arg1;
+ (id)_beautyLevelDictionaryFromItemTypeDictionary:(id)arg1;
+ (id)faceShapeBeautyLevelDictionary;
+ (id)faceSkinBeautyLevelDictionary;
+ (id)faceShapeItemTypesForBeautyLevel:(long long)arg1;
+ (id)faceShapeItemTypeDictionary;
+ (id)faceSkinItemTypesForBeautyLevel:(long long)arg1;
+ (id)faceSkinItemTypeDictionary;
- (void).cxx_destruct;
@property(nonatomic) long long beautyLevelForFaceShape; // @synthesize beautyLevelForFaceShape=_beautyLevelForFaceShape;
@property(nonatomic) long long beautyLevelForFaceSkin; // @synthesize beautyLevelForFaceSkin=_beautyLevelForFaceSkin;
@property(readonly, copy, nonatomic) NSIndexSet *availableItemTypesForFaceShape; // @synthesize availableItemTypesForFaceShape=_availableItemTypesForFaceShape;
@property(readonly, copy, nonatomic) NSIndexSet *availableItemTypesForFaceSkin; // @synthesize availableItemTypesForFaceSkin=_availableItemTypesForFaceSkin;
- (void)_updateAvailableItemTypesForFaceShape;
- (void)_updateAvailableItemTypesForFaceSkin;
- (id)initForSuitItem:(id)arg1;

@end

