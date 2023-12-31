//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;
@protocol MMFinderLiveLeadsItemPromoteGuideViewDelegate;

@interface MMFinderLiveLeadsItemPromoteGuideView : UIView
{
    id <MMFinderLiveLeadsItemPromoteGuideViewDelegate> _delegate;
    UIButton *_cancelButton;
    UIButton *_confirmButton;
    UIImageView *_guideImageView;
    UILabel *_titleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *guideImageView; // @synthesize guideImageView=_guideImageView;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak id <MMFinderLiveLeadsItemPromoteGuideViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onConfirmButtonClicked;
- (void)onCancelButtonClicked;
- (id)guideImage;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

