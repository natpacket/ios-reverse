//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"
#import "WCMainWindowExt-Protocol.h"

@class NSString;

@interface DarkModeManager : MMUserService <WCMainWindowExt, MMServiceProtocol>
{
    _Bool _skipNextReport;
}

@property(nonatomic) _Bool skipNextReport; // @synthesize skipNextReport=_skipNextReport;
- (void)reportAction:(long long)arg1;
- (void)onAppWillEnterForeground:(id)arg1;
- (void)onAppDidEnterBackground:(id)arg1;
- (void)onAppWillResignActive:(id)arg1;
- (void)mm_traitCollectionDidChange:(id)arg1;
- (void)changeDarkModeConfigType:(long long)arg1;
- (void)launchReport;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

