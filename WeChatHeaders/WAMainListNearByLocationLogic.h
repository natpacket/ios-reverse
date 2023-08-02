//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "WALocationGetterDelegate-Protocol.h"

@class MMTimer, NSString, WALocationGetter;
@protocol WAMainListNearByLocationLogicDelegate;

@interface WAMainListNearByLocationLogic : MMObject <WALocationGetterDelegate>
{
    id <WAMainListNearByLocationLogicDelegate> _delegate;
    WALocationGetter *_locationGetter;
    MMTimer *_timer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) WALocationGetter *locationGetter; // @synthesize locationGetter=_locationGetter;
@property(nonatomic) __weak id <WAMainListNearByLocationLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)thirdAccuracyInvalid:(id)arg1;
- (void)secondAccuracyInvalid:(id)arg1;
- (void)firstAccuracyInvalid:(id)arg1;
- (void)onGetLocationFailedWithReason:(unsigned long long)arg1;
- (void)onGetLocationSuccess:(id)arg1;
- (void)startGetLocation;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

