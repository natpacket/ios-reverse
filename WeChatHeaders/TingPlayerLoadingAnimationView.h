//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFlexBaseView.h"

@class MMUIActivityIndicatorView, MMUIButton;

@interface TingPlayerLoadingAnimationView : WCFlexBaseView
{
    MMUIButton *_backButton;
    MMUIButton *_profileButton;
    MMUIActivityIndicatorView *_activityIndicatorView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) MMUIButton *profileButton; // @synthesize profileButton=_profileButton;
@property(retain, nonatomic) MMUIButton *backButton; // @synthesize backButton=_backButton;
- (void)configureLayout;
- (void)generaetAllButtons;
- (void)setup;

@end

