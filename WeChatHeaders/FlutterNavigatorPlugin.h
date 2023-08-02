//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FlutterNavigatorHost-Protocol.h"
#import "MMFlutterPlugin-Protocol.h"

@class FlutterNavigatorCallback, MMFlutterViewController, NSString;
@protocol FlutterNavigatorDelegate;

@interface FlutterNavigatorPlugin : NSObject <FlutterNavigatorHost, MMFlutterPlugin>
{
    NSObject<FlutterNavigatorDelegate> *_delegate;
    MMFlutterViewController *_viewController;
    FlutterNavigatorCallback *_callback;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FlutterNavigatorCallback *callback; // @synthesize callback=_callback;
@property(nonatomic) __weak MMFlutterViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak NSObject<FlutterNavigatorDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)onNewRouteRoute:(id)arg1;
- (void)disableSwipeBackWithError:(id *)arg1;
- (void)enableSwipeBackWithError:(id *)arg1;
- (void)popPlugin:(id)arg1 route:(id)arg2 result:(id)arg3 error:(id *)arg4;
- (void)pushPlugin:(id)arg1 route:(id)arg2 arguments:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)onDetachedToViewController;
- (void)onAttachedToViewController:(id)arg1;
- (void)onAttachedToEngine:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
