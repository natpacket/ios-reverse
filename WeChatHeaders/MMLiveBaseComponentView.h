//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMIndexedContainerView.h"

@class MMLiveTask, MMLiveTaskId, MMLiveViewController, NSArray, NSMutableDictionary, NSString, OrderedDictionary;

@interface MMLiveBaseComponentView : MMIndexedContainerView
{
    MMLiveBaseComponentView *_parentComponentView;
    MMLiveTaskId *_taskId;
    NSString *_componentKey;
    MMLiveTask *_liveTask;
    OrderedDictionary *_components;
    NSMutableDictionary *_layoutDependentKeys;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *layoutDependentKeys; // @synthesize layoutDependentKeys=_layoutDependentKeys;
@property(retain, nonatomic) OrderedDictionary *components; // @synthesize components=_components;
@property(retain, nonatomic) MMLiveTask *liveTask; // @synthesize liveTask=_liveTask;
@property(retain, nonatomic) NSString *componentKey; // @synthesize componentKey=_componentKey;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak MMLiveBaseComponentView *parentComponentView; // @synthesize parentComponentView=_parentComponentView;
- (void)visibilityChanged:(_Bool)arg1 invokeType:(unsigned long long)arg2;
- (void)onExitLive;
- (void)onLiveProgressUpdated:(unsigned int)arg1;
- (void)onLiveQualityUpdated:(id)arg1;
- (void)onLiveResumed;
- (void)onLivePaused;
- (void)onLiveUpdated;
- (void)onEnterLiveWithError:(id)arg1;
- (void)onEnterLive;
- (void)onCreateLive;
- (void)onPrepareLive;
- (void)layoutUI;
- (id)subComponentForKey:(id)arg1;
@property(readonly, nonatomic) NSArray *subComponents;
- (void)onSubComponentLayoutChanged:(id)arg1;
- (_Bool)removeFromParentComponent;
- (_Bool)removeSubComponent:(id)arg1;
- (_Bool)addSubComponent:(id)arg1 layoutDependentKeys:(id)arg2;
@property(readonly, nonatomic) __weak MMLiveViewController *liveViewController;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 andLiveTask:(id)arg2 componentKey:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 andTaskId:(id)arg2 componentKey:(id)arg3;

@end

