//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GameSKStoreDelgeateImpl, MMUIViewController, NSMutableDictionary;
@protocol WXCustomWebViewControllerProtocol;

@interface GameSkStoreController : NSObject
{
    MMUIViewController<WXCustomWebViewControllerProtocol> *_webViewController;
    NSMutableDictionary *_preloadItemDictInfo;
    GameSKStoreDelgeateImpl *_currentSkStoreModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GameSKStoreDelgeateImpl *currentSkStoreModel; // @synthesize currentSkStoreModel=_currentSkStoreModel;
@property(retain, nonatomic) NSMutableDictionary *preloadItemDictInfo; // @synthesize preloadItemDictInfo=_preloadItemDictInfo;
@property(nonatomic) __weak MMUIViewController<WXCustomWebViewControllerProtocol> *webViewController; // @synthesize webViewController=_webViewController;
- (id)halfScreenTestParamWithAppInstallUrl:(id)arg1;
- (void)notifyWebViewEvent:(id)arg1 appStoreItem:(id)arg2;
- (void)onStoreVcClosed:(id)arg1;
- (id)presentHalfScreenAppStoreWithParam:(id)arg1 onCloseBlock:(CDUnknownBlockType)arg2;
- (id)getSKStoreProductItem:(id)arg1 reportInfo:(id)arg2;
- (void)triggerAppStoreItemLoad:(id)arg1;
- (id)createSKStoreProductItem:(id)arg1 reportInfo:(id)arg2;
- (void)report12909AppStoreWithAction:(long long)arg1 item:(id)arg2;
- (void)preloadSKStoreProductViewController:(id)arg1 reportInfo:(id)arg2;
- (void)cleaAllSkStoreValue;
- (void)cleanPreloadProdctVc;
- (id)init;

@end

