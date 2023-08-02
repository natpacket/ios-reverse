//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import "ILinkEventExt-Protocol.h"

@class NSString, RichTextView, UIImageView, WCMomentsErrTipsViewModel;
@protocol WCTimelineErrTipsViewDelegate;

@interface WCTimelineErrTipsView : UIButton <ILinkEventExt>
{
    id <WCTimelineErrTipsViewDelegate> _delegate;
    UIImageView *_errImageView;
    RichTextView *_errTipsView;
    WCMomentsErrTipsViewModel *_viewModel;
}

+ (double)heightForDataItem:(id)arg1 width:(double)arg2;
+ (double)heightForViewModel:(id)arg1 width:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) WCMomentsErrTipsViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) RichTextView *errTipsView; // @synthesize errTipsView=_errTipsView;
@property(retain, nonatomic) UIImageView *errImageView; // @synthesize errImageView=_errImageView;
@property(nonatomic) __weak id <WCTimelineErrTipsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLinkClicked:(id)arg1 backupUrl:(id)arg2 withRect:(struct CGRect)arg3;
- (void)layoutSubviews;
- (id)errTipsAccessibilityText;
- (void)updateWithDataItem:(id)arg1;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 viewModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

