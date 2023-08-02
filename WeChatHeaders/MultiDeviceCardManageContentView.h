//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMUIButton, MMUILabel, MultiDeviceActionButton, MultiDeviceManageInfo, UIImageView;
@protocol MultiDeviceCardViewDelegate;

@interface MultiDeviceCardManageContentView : UIView
{
    _Bool _expand;
    _Bool _singleCard;
    MultiDeviceManageInfo *_deviceManageInfo;
    id <MultiDeviceCardViewDelegate> _delegate;
    CDUnknownBlockType _viewUpdateBlock;
    UIImageView *_iconImageView;
    MMUILabel *_titleLabel;
    MMUILabel *_deviceNameLabel;
    MMUIButton *_helpButton;
    UIImageView *_expandImageView;
    MMUIButton *_expandButton;
    UIView *_headerSeparator;
    MultiDeviceActionButton *_notificationButton;
    MultiDeviceActionButton *_sendFileButton;
    MultiDeviceActionButton *_lockButton;
    MMUIButton *_autoLoginCheckbox;
    UIView *_footerSeparator;
    MMUILabel *_logoutLabel;
    MMUIButton *_logoutButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *logoutButton; // @synthesize logoutButton=_logoutButton;
@property(retain, nonatomic) MMUILabel *logoutLabel; // @synthesize logoutLabel=_logoutLabel;
@property(retain, nonatomic) UIView *footerSeparator; // @synthesize footerSeparator=_footerSeparator;
@property(retain, nonatomic) MMUIButton *autoLoginCheckbox; // @synthesize autoLoginCheckbox=_autoLoginCheckbox;
@property(retain, nonatomic) MultiDeviceActionButton *lockButton; // @synthesize lockButton=_lockButton;
@property(retain, nonatomic) MultiDeviceActionButton *sendFileButton; // @synthesize sendFileButton=_sendFileButton;
@property(retain, nonatomic) MultiDeviceActionButton *notificationButton; // @synthesize notificationButton=_notificationButton;
@property(retain, nonatomic) UIView *headerSeparator; // @synthesize headerSeparator=_headerSeparator;
@property(retain, nonatomic) MMUIButton *expandButton; // @synthesize expandButton=_expandButton;
@property(retain, nonatomic) UIImageView *expandImageView; // @synthesize expandImageView=_expandImageView;
@property(retain, nonatomic) MMUIButton *helpButton; // @synthesize helpButton=_helpButton;
@property(retain, nonatomic) MMUILabel *deviceNameLabel; // @synthesize deviceNameLabel=_deviceNameLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(copy, nonatomic) CDUnknownBlockType viewUpdateBlock; // @synthesize viewUpdateBlock=_viewUpdateBlock;
@property(nonatomic, getter=isSingleCard) _Bool singleCard; // @synthesize singleCard=_singleCard;
@property(nonatomic, getter=isExpand) _Bool expand; // @synthesize expand=_expand;
@property(nonatomic) __weak id <MultiDeviceCardViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MultiDeviceManageInfo *deviceManageInfo; // @synthesize deviceManageInfo=_deviceManageInfo;
- (id)generateSeparator;
- (void)onTapLogoutButton;
- (void)reverseAutoLoginCheckbox;
- (void)onTapAutoLoginCheckbox;
- (void)onTapLockButton;
- (void)onTapSendFileButton;
- (void)onTapNotificationButton;
- (void)onTapHelpButton;
- (void)onTapExpandButton;
- (void)updateView;
- (void)reloadView;
- (void)updateFrameToFitWidth:(double)arg1;
- (void)updateLayouts;
- (void)updateViewState;
- (void)updateIconImage;
- (void)updateContent;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
