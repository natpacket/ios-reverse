//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMSceneDelegate.h"

@class MMMainSceneDelegate;

@interface MMSubSceneDelegate : MMSceneDelegate
{
    MMMainSceneDelegate *_mainSceneDelegate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMMainSceneDelegate *mainSceneDelegate; // @synthesize mainSceneDelegate=_mainSceneDelegate;
- (void)windowScene:(id)arg1 didUpdateCoordinateSpace:(id)arg2 interfaceOrientation:(long long)arg3 traitCollection:(id)arg4;
- (void)sceneDidEnterBackground:(id)arg1;
- (void)sceneWillResignActive:(id)arg1;
- (void)sceneDidBecomeActive:(id)arg1;
- (void)sceneWillEnterForeground:(id)arg1;
- (void)sceneDidDisconnect:(id)arg1;
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;
- (void)updateSceneBizViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

