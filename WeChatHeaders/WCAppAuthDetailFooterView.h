//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;
@protocol WCAppAuthDetailFooterViewDelegate;

@interface WCAppAuthDetailFooterView : UIView
{
    id <WCAppAuthDetailFooterViewDelegate> _delegate;
    UIButton *_cancelBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(nonatomic) __weak id <WCAppAuthDetailFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onCancelBtnClick;
- (void)layoutSubviews;
- (double)btnBottomPadding;
- (double)btnHeight;
- (void)initBtn;
- (id)initWithFrame:(struct CGRect)arg1;

@end

