//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "FriendAsistSessionExt-Protocol.h"
#import "ISettingExtChange-Protocol.h"
#import "SeePeopleNearbyViewControllerDelegate-Protocol.h"
#import "WCFinderArbitraryPageViewDataDelegate-Protocol.h"
#import "WCFinderArbitraryPageViewDataSource-Protocol.h"
#import "WCFinderExpandableTagSelectorAction-Protocol.h"
#import "WCFinderFeedBaseViewControllerProtocol-Protocol.h"
#import "WCFinderLifeHomeViewModelDelegate-Protocol.h"
#import "WCFinderLifeNearbySayHelloViewDelegate-Protocol.h"
#import "WCFinderRedDotExt-Protocol.h"

@class NSMapTable, NSString, WCFinderArbitraryPageView, WCFinderLifeHomeNoLocationAuthView, WCFinderLifeHomeViewModel;

@interface WCFinderLifeHomeViewController : MMUIViewController <WCFinderArbitraryPageViewDataSource, WCFinderLifeHomeViewModelDelegate, WCFinderArbitraryPageViewDataDelegate, WCFinderExpandableTagSelectorAction, SeePeopleNearbyViewControllerDelegate, WCFinderLifeNearbySayHelloViewDelegate, FriendAsistSessionExt, ISettingExtChange, WCFinderRedDotExt, WCFinderFeedBaseViewControllerProtocol>
{
    _Bool _displayNearPeople;
    _Bool _finderLocationServiceAuthed;
    _Bool _nearbyLocationServiceAuthed;
    _Bool _shouldSwitchToNearbyTab;
    _Bool _displayMoreMenu;
    WCFinderLifeHomeViewModel *_viewModel;
    WCFinderArbitraryPageView *_tabPageView;
    WCFinderLifeHomeNoLocationAuthView *_noAuthView;
    NSMapTable *_adapterMap;
    NSMapTable *_selectorDelegateMap;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool displayMoreMenu; // @synthesize displayMoreMenu=_displayMoreMenu;
@property(retain, nonatomic) NSMapTable *selectorDelegateMap; // @synthesize selectorDelegateMap=_selectorDelegateMap;
@property(retain, nonatomic) NSMapTable *adapterMap; // @synthesize adapterMap=_adapterMap;
@property(retain, nonatomic) WCFinderLifeHomeNoLocationAuthView *noAuthView; // @synthesize noAuthView=_noAuthView;
@property(retain, nonatomic) WCFinderArbitraryPageView *tabPageView; // @synthesize tabPageView=_tabPageView;
@property(retain, nonatomic) WCFinderLifeHomeViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) _Bool shouldSwitchToNearbyTab; // @synthesize shouldSwitchToNearbyTab=_shouldSwitchToNearbyTab;
@property(nonatomic) _Bool nearbyLocationServiceAuthed; // @synthesize nearbyLocationServiceAuthed=_nearbyLocationServiceAuthed;
@property(nonatomic) _Bool finderLocationServiceAuthed; // @synthesize finderLocationServiceAuthed=_finderLocationServiceAuthed;
@property(nonatomic) _Bool displayNearPeople; // @synthesize displayNearPeople=_displayNearPeople;
- (void)onFriendAssistUnreadCountChanged;
- (void)onClickSayHelloButton;
- (void)onSettingExtChanged:(long long)arg1;
- (void)finderRedDotDataChangedWithPathKey:(id)arg1;
- (void)updateNearByPeopleTabView:(id)arg1;
- (void)_updateNearPeopleTab;
- (void)onPeopleNearbyWillGoBackToRootView;
- (_Bool)switchToLiveTab;
- (unsigned long long)feedViewerScene;
- (unsigned long long)feedViewControllerScene;
- (void)handleMenuPeople;
- (void)handleMenuOpenCollect;
- (void)handleMenuPost;
- (void)onSelectorWithTag:(id)arg1 changeSelectFilter:(id)arg2;
- (void)onArbitraryTabViewClickRetry:(id)arg1;
- (void)arbitraryTabView:(id)arg1 expectPageContentInset:(struct UIEdgeInsets)arg2 forIndex:(long long)arg3 pageView:(id)arg4 identifier:(id)arg5;
- (id)apdaterForPageIndex:(long long)arg1;
- (void)arbitraryTabView:(id)arg1 didDisplayViewAtIndex:(long long)arg2 pageView:(id)arg3;
- (void)arbitraryTabView:(id)arg1 willDisplayViewAtIndex:(long long)arg2 pageView:(id)arg3;
- (void)arbitraryTabView:(id)arg1 didEndDisplayViewAtIndex:(long long)arg2 pageView:(id)arg3;
- (id)nearbyBannerViewWithTabView:(id)arg1 index:(long long)arg2;
- (id)arbitraryTabView:(id)arg1 bannerViewForIndex:(long long)arg2;
- (id)arbitraryTabView:(id)arg1 uniqueObjectForPage:(long long)arg2;
- (id)arbitraryTabView:(id)arg1 pageTabViewForIndex:(long long)arg2;
- (id)arbitraryTabView:(id)arg1 pageTabNameForIndex:(long long)arg2;
- (id)arbitraryTabView:(id)arg1 pageViewForIndex:(long long)arg2;
- (long long)pageNumberOfArbitraryTabView:(id)arg1;
- (void)onLifeHomeVM:(id)arg1 selectPage:(id)arg2;
- (void)onLifeHomeVM:(id)arg1 pageDatasChangedAtIndex:(long long)arg2;
- (void)onLifeHomeVMLocationAuthChanged:(id)arg1;
- (void)onLifeHomeVM:(id)arg1 firstPageFinish:(_Bool)arg2;
- (unsigned long long)commentScene;
- (id)createMenuItem:(id)arg1 iconName:(id)arg2 action:(SEL)arg3;
- (void)setupRightMenuItems;
- (_Bool)showNavigationBarSepLine;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidPushOrPresent:(_Bool)arg1;
- (void)viewWillBePushOrPresent:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

