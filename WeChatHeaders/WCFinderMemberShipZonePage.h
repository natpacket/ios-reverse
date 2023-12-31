//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMUIViewController, WCFinderAnimationLoadingView, WCFinderFeedFlowView;
@protocol WCFinderFeedBaseViewControllerProtocol, WCFinderFeedFlowViewDelegate><WCFinderFeedFlowViewDataSource><WCFinderMemberShipTabProtocol, WCFinderMemberShipZoneTabModelProtocol;

@interface WCFinderMemberShipZonePage : NSObject
{
    WCFinderAnimationLoadingView *_loadingView;
    id <WCFinderMemberShipZoneTabModelProtocol> _viewModel;
    WCFinderFeedFlowView *_feedFlowView;
    MMUIViewController<WCFinderFeedBaseViewControllerProtocol> *_viewController;
    id <WCFinderFeedFlowViewDelegate><WCFinderFeedFlowViewDataSource><WCFinderMemberShipTabProtocol> _obj;
}

+ (id)pageWithControllerCls:(Class)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) id <WCFinderFeedFlowViewDelegate><WCFinderFeedFlowViewDataSource><WCFinderMemberShipTabProtocol> obj; // @synthesize obj=_obj;
@property(nonatomic) __weak MMUIViewController<WCFinderFeedBaseViewControllerProtocol> *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) WCFinderFeedFlowView *feedFlowView; // @synthesize feedFlowView=_feedFlowView;
@property(retain, nonatomic) id <WCFinderMemberShipZoneTabModelProtocol> viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;

@end

