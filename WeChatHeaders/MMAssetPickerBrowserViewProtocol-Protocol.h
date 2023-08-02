//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMAssetInfo, MMAssetPickerBrowserStateInfo;
@protocol MMAssetPickerBrowserViewDelegate, MMImagePickerControlCenter;

@protocol MMAssetPickerBrowserViewProtocol <NSObject>
@property(readonly, nonatomic) MMAssetPickerBrowserStateInfo *stateInfo;
@property(nonatomic) __weak id <MMAssetPickerBrowserViewDelegate> browserDelegate;
@property(nonatomic) __weak id <MMImagePickerControlCenter> controlCenter;
@property(nonatomic) _Bool shouldPlayWithEditAttr;
@property(nonatomic) _Bool requestUneditedAsset;
@property(retain, nonatomic) MMAssetInfo *assetInfo;
- (void)loadAsset;

@optional
- (void)onBeginToChangePage;
@end

