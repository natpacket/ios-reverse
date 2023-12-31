//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TextStateBaseMediaView-Protocol.h"

@class NSString, UIImageView, WCFinderFeedDetailStatusView;
@protocol TextStateBaseMediaViewDelegate;

@interface WCFinderTextStateInvalidView : UIView <TextStateBaseMediaView>
{
    id <TextStateBaseMediaViewDelegate> textStateDelegate;
    UIImageView *_iconImageView;
    WCFinderFeedDetailStatusView *_statusView;
    double _transitionProgress;
}

- (void).cxx_destruct;
@property(nonatomic) double transitionProgress; // @synthesize transitionProgress=_transitionProgress;
@property(retain, nonatomic) WCFinderFeedDetailStatusView *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) __weak id <TextStateBaseMediaViewDelegate> textStateDelegate; // @synthesize textStateDelegate;
- (void)pausePlayMedia;
- (void)startPlayMedia;
@property(readonly, nonatomic) double mediaAspectRatio;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setInvalidText:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isForceMuted) _Bool forceMuted;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isMuted) _Bool muted;
@property(readonly) Class superclass;

@end

