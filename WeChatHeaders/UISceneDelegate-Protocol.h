//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSSet, NSString, NSUserActivity, UIScene, UISceneConnectionOptions, UISceneSession;

@protocol UISceneDelegate <NSObject>

@optional
- (void)scene:(UIScene *)arg1 didUpdateUserActivity:(NSUserActivity *)arg2;
- (void)scene:(UIScene *)arg1 didFailToContinueUserActivityWithType:(NSString *)arg2 error:(NSError *)arg3;
- (void)scene:(UIScene *)arg1 continueUserActivity:(NSUserActivity *)arg2;
- (void)scene:(UIScene *)arg1 willContinueUserActivityWithType:(NSString *)arg2;
- (void)scene:(UIScene *)arg1 restoreInteractionStateWithUserActivity:(NSUserActivity *)arg2;
- (NSUserActivity *)stateRestorationActivityForScene:(UIScene *)arg1;
- (void)scene:(UIScene *)arg1 openURLContexts:(NSSet *)arg2;
- (void)sceneDidEnterBackground:(UIScene *)arg1;
- (void)sceneWillEnterForeground:(UIScene *)arg1;
- (void)sceneWillResignActive:(UIScene *)arg1;
- (void)sceneDidBecomeActive:(UIScene *)arg1;
- (void)sceneDidDisconnect:(UIScene *)arg1;
- (void)scene:(UIScene *)arg1 willConnectToSession:(UISceneSession *)arg2 options:(UISceneConnectionOptions *)arg3;
@end

