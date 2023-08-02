//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMLiveTask, NSArray, NSIndexPath, NSString, UINavigationController;

@protocol MMLiveConflictHandling <NSObject>
- (_Bool)handleConflictForEnableHomePageTransitionContentVMs:(NSArray *)arg1 exportIds:(NSArray *)arg2 selectedIndex:(NSIndexPath *)arg3 navigationController:(UINavigationController *)arg4 tabType:(long long)arg5 commentScene:(unsigned long long)arg6;
- (_Bool)handleConflictWithNewFinderLiveContentVMs:(NSArray *)arg1 exportIds:(NSArray *)arg2 selectedIndex:(NSIndexPath *)arg3 navigationController:(UINavigationController *)arg4 tabType:(long long)arg5 commentScene:(unsigned long long)arg6 replayEntryType:(NSString *)arg7;
- (_Bool)handleConflictWithNewLive:(MMLiveTask *)arg1 navigationController:(UINavigationController *)arg2;
- (_Bool)resolveExternalConflicts;
@end

