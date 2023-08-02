//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ILinkEventExt-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIView, WCFinderFittingWidthRichView;
@protocol WCFinderProfileShowInWXTipsSheetDelegate;

@interface WCFinderProfileShowInWXTipsSheet : MMUIViewController <ILinkEventExt, UIGestureRecognizerDelegate>
{
    id <WCFinderProfileShowInWXTipsSheetDelegate> _delegate;
    WCFinderFittingWidthRichView *_detailRichTextView;
    UIView *_cardView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *cardView; // @synthesize cardView=_cardView;
@property(retain, nonatomic) WCFinderFittingWidthRichView *detailRichTextView; // @synthesize detailRichTextView=_detailRichTextView;
@property(nonatomic) __weak id <WCFinderProfileShowInWXTipsSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (id)jumpWXProfileHref;
- (void)onClickSettingBtn:(id)arg1;
- (void)onCancelAction;
- (void)onClickCancelBtn:(id)arg1;
- (void)onBackGroundViewTapAction:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)createBtnWithTitle:(id)arg1 action:(SEL)arg2 bgColor:(id)arg3 titleColor:(id)arg4;
- (void)addShape:(id)arg1;
- (void)viewDidLoad;
- (void)updateYogaLayout;
- (void)viewDidLayoutSubviews;
- (_Bool)useTransparentNavibar;
- (void)showFromViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
