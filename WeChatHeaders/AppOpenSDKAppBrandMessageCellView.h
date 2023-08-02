//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonMessageCellView.h"

#import "MMWebImageViewDelegate-Protocol.h"

@class AppOpenSDKAppBrandMessageViewModel, MMUILabel, MMWebImageView, NSDate, NSString, UIImageView, UILabel, UIView, WCTagsView;

@interface AppOpenSDKAppBrandMessageCellView : CommonMessageCellView <MMWebImageViewDelegate>
{
    UIImageView *m_thumbImageView;
    UIImageView *m_defaultLogo;
    UILabel *m_titleLabel;
    UILabel *m_descLabel;
    UIView *m_appBrandSourceView;
    MMWebImageView *_appLogoView;
    MMUILabel *_appNameLabel;
    WCTagsView *_tagsView;
    NSDate *_visibleDate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *visibleDate; // @synthesize visibleDate=_visibleDate;
@property(retain, nonatomic) WCTagsView *tagsView; // @synthesize tagsView=_tagsView;
@property(retain, nonatomic) MMUILabel *appNameLabel; // @synthesize appNameLabel=_appNameLabel;
@property(retain, nonatomic) MMWebImageView *appLogoView; // @synthesize appLogoView=_appLogoView;
- (id)scaleFixOriginThumbImage:(id)arg1;
- (void)onLoadImageOK:(id)arg1;
- (void)updateThumbImage;
- (void)onTouchUpInside;
- (id)operationMenuItems;
- (void)addThumbImageView;
- (void)addDescLabel;
- (void)addTitleLabel;
- (void)initTagsView;
- (void)initHeaderView;
- (void)willMoveToWindow:(id)arg1;
- (void)preloadWeApp;
- (void)layoutContentView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) AppOpenSDKAppBrandMessageViewModel *viewModel; // @dynamic viewModel;

@end

