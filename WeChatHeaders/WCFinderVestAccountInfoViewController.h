//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

@class FinderNewUserPrepareResponse, UIScrollView, WCFinderContact;

@interface WCFinderVestAccountInfoViewController : MMUIViewController
{
    WCFinderContact *_contact;
    UIScrollView *_scrollView;
    FinderNewUserPrepareResponse *_userPrepareResponse;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderNewUserPrepareResponse *userPrepareResponse; // @synthesize userPrepareResponse=_userPrepareResponse;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
- (void)clickCloseAction;
- (void)viewDidLayoutSubviews;
- (id)navigationBarBackgroundColor;
- (void)requestUserPrepare;
- (void)viewDidLoad;

@end
