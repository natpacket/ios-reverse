//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderTabPageViewController.h"

#import "TingViewController-Protocol.h"

@class MMListenCategoryItem, NSArray, NSMutableArray, NSString, UIScrollView, UIView;

@interface TingLocalTabPageViewController : WCFinderTabPageViewController <TingViewController>
{
    MMListenCategoryItem *_category;
    UIView *_multiTabView;
    UIScrollView *_scrollView;
    NSArray *_tabPageModels;
    NSMutableArray *_tabPageControllers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *tabPageControllers; // @synthesize tabPageControllers=_tabPageControllers;
@property(retain, nonatomic) NSArray *tabPageModels; // @synthesize tabPageModels=_tabPageModels;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIView *multiTabView; // @synthesize multiTabView=_multiTabView;
@property(retain, nonatomic) MMListenCategoryItem *category; // @synthesize category=_category;
- (long long)getIndexWithVc:(id)arg1;
- (id)genTabPageModelWithProfileController:(id)arg1 preLoadWhileScrolling:(_Bool)arg2;
- (id)genTabPageModelWithViewController:(id)arg1 preLoadWhileScrolling:(_Bool)arg2;
- (id)getCurrentSubCategoryTitle;
- (id)getTitleNameWithCategoryId:(id)arg1;
- (id)getListendIds;
- (id)getLikeIds;
- (_Bool)isFlowModelId:(id)arg1;
- (void)setUpTabView;
- (id)getTabPageDetailControllerWithId:(id)arg1;
- (void)setTabVCInsetOffset:(double)arg1;
- (void)setUpPageTabVC;
- (void)viewWillLayoutSubviews;
- (id)tingPreferredNavigationItemColor;
- (void)updateDisplayOfTitleView;
- (void)viewDidLoad;
- (id)initWithCategory:(id)arg1;
- (_Bool)useTransparentNavibar;
- (id)navigationBarBackgroundColor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

