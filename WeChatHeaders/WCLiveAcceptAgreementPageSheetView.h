//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMPageSheetBaseView.h"

#import "MMPageSheetBottomViewDelegate-Protocol.h"

@class NSString, UIImage, UIImageView, UILabel, UIView;

@interface WCLiveAcceptAgreementPageSheetView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>
{
    UIView *_contentView;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    NSString *_title;
    NSString *_message;
    UIImage *_iconImage;
    CDUnknownBlockType _confirmCallback;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType confirmCallback; // @synthesize confirmCallback=_confirmCallback;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (double)bottomViewBottomMargin;
- (double)bottomViewTopMargin;
- (id)titleForPageSheetConfirmButton;
- (void)onClickPageSheetConfirmButton;
- (double)contentViewHeight;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)initViews;
- (id)initWithTitle:(id)arg1 message:(id)arg2 iconImage:(id)arg3 confirmCallback:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

