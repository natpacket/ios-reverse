//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderStreamProfileViewPage.h"

@class UIImageView, UILabel;

@interface WCFinderProfilePrivateAccountPage : WCFinderStreamProfileViewPage
{
    UIImageView *_lockIconView;
    UILabel *_textLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *lockIconView; // @synthesize lockIconView=_lockIconView;
- (void)updateLabelSize;
- (void)reLayout;
- (void)viewDidLoad;
- (void)pageSizeDidChanged;
- (id)loadView;

@end

