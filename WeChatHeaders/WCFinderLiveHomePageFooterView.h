//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class WCFinderAnimationLoadingView;
@protocol WCFinderLiveHomePageFooterViewActionDelegate;

@interface WCFinderLiveHomePageFooterView : UICollectionReusableView
{
    double _triggerWidth;
    id <WCFinderLiveHomePageFooterViewActionDelegate> _delegate;
    unsigned long long _state;
    WCFinderAnimationLoadingView *_loadingView;
    double _pulldownWidth;
}

+ (double)footerWidth;
+ (id)footerIdentifier;
- (void).cxx_destruct;
@property(nonatomic) double pulldownWidth; // @synthesize pulldownWidth=_pulldownWidth;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <WCFinderLiveHomePageFooterViewActionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double triggerWidth; // @synthesize triggerWidth=_triggerWidth;
- (void)didEndDragging:(id)arg1;
- (void)refreshScrollViewDidScroll:(id)arg1;
- (void)onResumeOfLoading;
- (_Bool)isLoadingNow;
- (void)onStateOfLoading;
- (void)onStateOfNormal;
- (void)setLoadingImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
