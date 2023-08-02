//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCSearchViewController.h"

@class FTSContext, UIView, WCTimeLineFooterView;

@interface FTSBaseViewController : WCSearchViewController
{
    FTSContext *_context;
    WCTimeLineFooterView *_footerView;
    UIView *_emptyFooterView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *emptyFooterView; // @synthesize emptyFooterView=_emptyFooterView;
@property(retain, nonatomic) WCTimeLineFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) FTSContext *context; // @synthesize context=_context;
- (void)startSearchFrom:(id)arg1 searchBar:(id)arg2;
- (id)getFTSContext;
- (void)onNavigationCancelItemClick;
- (void)viewDidLoad;
- (id)initWithContext:(id)arg1;

@end
