//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ITingRouter-Protocol.h"

@class MMFlutterEngineGroup, MMFlutterInstance, MMFlutterViewController, NSArray, NSString, TingAppNavigationController, TingPlayerManager, UIViewController;
@protocol ITingApp;

@interface TingFlutterRouter : NSObject <ITingRouter>
{
    _Bool _hasWarmUp;
    _Bool _doingWarmUp;
    _Bool _bIsInTingPlayer;
    TingAppNavigationController *_appContainer;
    MMFlutterEngineGroup *_group;
    MMFlutterViewController *_appViewController;
    MMFlutterInstance *_home;
    TingPlayerManager *_playTaskController;
    NSArray *_tingPlugins;
    unsigned long long _displayMode;
}

+ (int)sceneFromRoute:(id)arg1;
+ (id)plugins;
- (void).cxx_destruct;
@property(nonatomic) _Bool bIsInTingPlayer; // @synthesize bIsInTingPlayer=_bIsInTingPlayer;
@property(nonatomic) unsigned long long displayMode; // @synthesize displayMode=_displayMode;
@property _Bool doingWarmUp; // @synthesize doingWarmUp=_doingWarmUp;
@property _Bool hasWarmUp; // @synthesize hasWarmUp=_hasWarmUp;
@property(retain, nonatomic) NSArray *tingPlugins; // @synthesize tingPlugins=_tingPlugins;
@property(retain, nonatomic) TingPlayerManager *playTaskController; // @synthesize playTaskController=_playTaskController;
@property(retain, nonatomic) MMFlutterInstance *home; // @synthesize home=_home;
@property(retain, nonatomic) MMFlutterViewController *appViewController; // @synthesize appViewController=_appViewController;
@property(retain, nonatomic) MMFlutterEngineGroup *group; // @synthesize group=_group;
@property(retain, nonatomic) TingAppNavigationController *appContainer; // @synthesize appContainer=_appContainer;
- (void)resetToHome:(_Bool)arg1 param:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)prepareApp:(CDUnknownBlockType)arg1;
- (void)tryAddTingItemToList:(id)arg1;
- (void)openProfile;
@property(nonatomic) _Bool isInTingPlayer;
- (void)setDisplayMode:(unsigned long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)consumeCategoryItem:(id)arg1 withType:(unsigned long long)arg2;
- (void)warmUpEngine:(CDUnknownBlockType)arg1;
- (id)createNewApp;
@property(readonly, nonatomic) UIViewController *appVisibleViewController;
@property(readonly, nonatomic) UIViewController<ITingApp> *app;
- (id)UintListFromNSData:(id)arg1;
- (void)flutterRouteWithString:(id)arg1 params:(id)arg2;
- (void)_initEngineGroup;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

