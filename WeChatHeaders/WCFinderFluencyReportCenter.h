//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface WCFinderFluencyReportCenter : NSObject
{
    NSMutableDictionary *_sceneDict;
    NSMutableDictionary *_sceneReportBlockDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *sceneReportBlockDict; // @synthesize sceneReportBlockDict=_sceneReportBlockDict;
@property(retain, nonatomic) NSMutableDictionary *sceneDict; // @synthesize sceneDict=_sceneDict;
- (void)reportWithSceneKey:(id)arg1;
- (id)phaseItemWithPhaseKey:(id)arg1 andSceneKey:(id)arg2;
- (void)removePhaseItemWithPhaseKey:(id)arg1 andSceneKey:(id)arg2;
- (void)removeAllWithSceneKey:(id)arg1;
- (void)addPhaseItem:(id)arg1 withPhaseKey:(id)arg2 andSceneKey:(id)arg3;
- (void)setReportBlock:(CDUnknownBlockType)arg1 withSceneKey:(id)arg2;

@end

