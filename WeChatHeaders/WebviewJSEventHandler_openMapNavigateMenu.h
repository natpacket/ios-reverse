//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

#import "INavigateLogicControllerExt-Protocol.h"
#import "NavigateLogicControllerDelegate-Protocol.h"

@class NSString, NavigateLogicController;

@interface WebviewJSEventHandler_openMapNavigateMenu : WebviewJSEventHandlerBase <INavigateLogicControllerExt, NavigateLogicControllerDelegate>
{
    NavigateLogicController *_navigateLogicController;
}

- (void).cxx_destruct;
- (void)delayNotifyCancel;
- (void)delayNotifyOK;
- (void)onMapItemClickOrCancel:(_Bool)arg1;
- (_Bool)isValidCoordinate:(struct CLLocationCoordinate2D)arg1;
- (void)onPresentViewControlelr:(id)arg1 Animated:(_Bool)arg2;
- (_Bool)canShowShareLocationMsgToDevice;
- (void)showNavigateMenu:(id)arg1 topMapType:(unsigned long long)arg2;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

