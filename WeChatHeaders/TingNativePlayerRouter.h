//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ITingRouter-Protocol.h"

@class NSString, TingAppNavigationController, TingPlayerAppViewController, UIViewController;
@protocol ITingApp;

@interface TingNativePlayerRouter : NSObject <ITingRouter>
{
    TingAppNavigationController *_appContainer;
    TingPlayerAppViewController *_appViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TingPlayerAppViewController *appViewController; // @synthesize appViewController=_appViewController;
@property(retain, nonatomic) TingAppNavigationController *appContainer; // @synthesize appContainer=_appContainer;
- (void)resetToHome:(_Bool)arg1 param:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)prepareApp:(CDUnknownBlockType)arg1;
- (void)tryAddTingItemToList:(id)arg1;
- (void)openProfile;
- (void)setDisplayMode:(unsigned long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)consumeCategoryItem:(id)arg1 withType:(unsigned long long)arg2;
- (id)createNewApp;
@property(readonly, nonatomic) unsigned long long displayMode;
@property(readonly, nonatomic) UIViewController *appVisibleViewController;
@property(readonly, nonatomic) UIViewController<ITingApp> *app;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isInTingPlayer;
@property(readonly) Class superclass;

@end

