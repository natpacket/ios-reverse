//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCCanvasComponent.h"

#import "SKStoreProductViewControllerDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString, SKStoreProductViewController;

@interface WCCanvasWebStoreComponent : WCCanvasComponent <SKStoreProductViewControllerDelegate, UIViewControllerTransitioningDelegate>
{
    SKStoreProductViewController *_productViewController;
}

+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) SKStoreProductViewController *productViewController; // @synthesize productViewController=_productViewController;
- (void)doAppStoreColorReport;
- (void)reportSKLoadingTimeWithBeginTime:(unsigned long long)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)dismissProductViewController;
- (void)componentWillDisappearInMainScreen:(_Bool)arg1;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)initViews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

