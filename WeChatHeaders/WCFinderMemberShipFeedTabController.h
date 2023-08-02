//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCFinderMemberShipFeedTabViewModelDelegate-Protocol.h"
#import "WCFinderMemberShipTabProtocol-Protocol.h"

@class MMUIViewController, NSString, WCFinderFeedFlowView, WCFinderMemberShipFeedTabViewModel;
@protocol WCFinderFeedBaseViewControllerProtocol;

@interface WCFinderMemberShipFeedTabController : NSObject <WCFinderMemberShipFeedTabViewModelDelegate, WCFinderMemberShipTabProtocol>
{
    WCFinderFeedFlowView *_feedFlowView;
    WCFinderMemberShipFeedTabViewModel *_viewModel;
    MMUIViewController<WCFinderFeedBaseViewControllerProtocol> *_viewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMUIViewController<WCFinderFeedBaseViewControllerProtocol> *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) WCFinderMemberShipFeedTabViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) WCFinderFeedFlowView *feedFlowView; // @synthesize feedFlowView=_feedFlowView;
- (void)finderMemberShipZoneFeedTabViewChangeStickyTopTo:(_Bool)arg1 contentVM:(id)arg2 success:(_Bool)arg3 errorInfo:(id)arg4;
- (void)finderMemberShipZoneFeedTabViewDeleteDataItemVM;
- (void)finderMemberShipZoneFeedTabViewFetchListFail;
- (void)finderMemberShipZoneFeedTabViewFetchListSuc;
- (void)finderMemberShipZoneFeedTabViewNoMoreData;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 tipsType:(unsigned long long)arg2 inState:(unsigned long long)arg3;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (_Bool)finderFeedFlowViewCanPrefetchData:(id)arg1;
- (unsigned long long)finderFeedFlowDataBeginRefreshTime:(id)arg1;
- (id)finderFeedFlowViewCurrentViewController:(id)arg1;
- (id)finderFeedFlowView:(id)arg1 cellConfigAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

