//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "TingViewController-Protocol.h"

@class MMListenCategoryItem, NSString, TingLocalTabPageViewController;

@interface TingLocalTabPageController : MMUIViewController <TingViewController>
{
    TingLocalTabPageViewController *_pageViewController;
    MMListenCategoryItem *_category;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMListenCategoryItem *category; // @synthesize category=_category;
@property(retain, nonatomic) TingLocalTabPageViewController *pageViewController; // @synthesize pageViewController=_pageViewController;
- (void)setNavigation;
- (id)tingPreferredNavigationItemColor;
- (_Bool)navigationBarBlurEffect;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (id)initWithCategory:(id)arg1;
- (_Bool)useTransparentNavibar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

