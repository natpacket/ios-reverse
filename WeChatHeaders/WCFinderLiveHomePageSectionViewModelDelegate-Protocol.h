//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, WCFinderLiveStreamContainerModel;

@protocol WCFinderLiveHomePageSectionViewModelDelegate <NSObject>

@optional
- (NSArray *)getContainerSectionVisibleItemIndex;
- (void)onContainerSectionVMHomePageDeleteTid:(NSString *)arg1;
- (void)onContainerSectionVMDisAppear;
- (void)onContainerSectionVMAppear;
- (void)onContainerSectionVMHomePageResetState;
- (void)onContainerSectionVMFetchFailWithErroCode:(long long)arg1;
- (void)onContainerSectionVMNoMoreData;
- (void)onContainerSectionVMFetchNextPageData:(NSArray *)arg1;
- (void)onContainerSectionVMRefreshAllData:(WCFinderLiveStreamContainerModel *)arg1;
@end
