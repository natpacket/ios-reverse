//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, TXCDashboardFloatingBall, TXCDashboardLayoutView;

@interface TXCDashboardiOS : NSObject
{
    NSMutableDictionary *_dashboardInfo;
    TXCDashboardFloatingBall *_floatingBall;
    TXCDashboardLayoutView *_dashboardLayoutView;
}

+ (void)destoryContainerInMainThread:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) TXCDashboardLayoutView *dashboardLayoutView; // @synthesize dashboardLayoutView=_dashboardLayoutView;
@property(retain, nonatomic) TXCDashboardFloatingBall *floatingBall; // @synthesize floatingBall=_floatingBall;
@property(retain, nonatomic) NSMutableDictionary *dashboardInfo; // @synthesize dashboardInfo=_dashboardInfo;
- (void)destoryContainer:(id)arg1;
- (void)dealloc;
- (void)printLog:(id)arg1;
- (void)runInMainThread:(CDUnknownBlockType)arg1;
- (void)onClickFloatingBall;
- (void)createDashboardLayoutView;
- (void)createFloatingBall;
- (int)appendDashboard:(id)arg1 log:(id)arg2;
- (int)setDashboard:(id)arg1 status:(id)arg2;
- (int)removeAllDashboard;
- (int)removeDashboard:(id)arg1;
- (int)addDashboard:(id)arg1;
- (int)showDashboard:(_Bool)arg1;
- (id)init;

@end

