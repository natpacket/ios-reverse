//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCAdvertiseOperationLogicBase.h"

@class MMTimer;
@protocol WCAdSellingPointLogicDelegate;

@interface WCAdSellingPointLogic : WCAdvertiseOperationLogicBase
{
    id <WCAdSellingPointLogicDelegate> _delegate;
    unsigned long long _itemCount;
    unsigned long long _switchCount;
    MMTimer *_logicTimer;
    unsigned long long _currentTick;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long currentTick; // @synthesize currentTick=_currentTick;
@property(retain, nonatomic) MMTimer *logicTimer; // @synthesize logicTimer=_logicTimer;
@property(nonatomic) unsigned long long switchCount; // @synthesize switchCount=_switchCount;
@property(nonatomic) unsigned long long itemCount; // @synthesize itemCount=_itemCount;
@property(nonatomic) __weak id <WCAdSellingPointLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)shouldFireTouchEvent;
- (void)scheduleSwitchSellingPoint;
- (void)touchWithAnimated:(_Bool)arg1;
- (id)fetchSwitchCountToReport;
- (void)reset;
- (void)stop;
- (void)start;
- (void)touch;
- (void)onWillEnterForeground;
- (void)onDidEnterBackground;
- (void)addNotifications;
- (void)dealloc;
- (id)init;

@end
