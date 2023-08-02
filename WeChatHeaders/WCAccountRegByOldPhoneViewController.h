//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCAccountBaseViewController.h"

@class MMUILabel, MMWebImageView, UIButton;
@protocol WCAccountRegByOldPhoneViewControllerDelegate;

@interface WCAccountRegByOldPhoneViewController : WCAccountBaseViewController
{
    id <WCAccountRegByOldPhoneViewControllerDelegate> m_delegate;
    MMWebImageView *_headImageView;
    MMUILabel *_nicknameLabel;
    MMUILabel *_contentLabel;
    UIButton *_confirmButton;
    UIButton *_cancelButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) MMUILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) MMUILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) MMWebImageView *headImageView; // @synthesize headImageView=_headImageView;
- (void)initView;
- (void)initNavigationBar;
- (void)setDelegate:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (_Bool)useRedesignStyle;
- (_Bool)useSheetView;

@end
