//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol WCFinderFeedRetryToolBarDelegate;

@interface WCFinderFeedRetryToolBar : UIView
{
    id <WCFinderFeedRetryToolBarDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCFinderFeedRetryToolBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void)clickRetryAction;
- (void)clickCancelAction;
- (id)initWithFrame:(struct CGRect)arg1 errorTips:(id)arg2 buttonOptionFlag:(unsigned long long)arg3 errorTipsLabelColor:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1 errorTips:(id)arg2 buttonOptionFlag:(unsigned long long)arg3;

@end

