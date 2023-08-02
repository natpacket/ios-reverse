//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PhotoViewController.h"

@class ImageBrowseButton, WCImageSearchEntity, WCWebImageBrowserConfig, WCWebImageButtonsContainerView, WCWebImageSourceInfoButton;

@interface WCWebImageBrowserViewController : PhotoViewController
{
    WCImageSearchEntity *_searchEntity;
    WCWebImageButtonsContainerView *_bottomBarContainerView;
    ImageBrowseButton *_moreBtn;
    ImageBrowseButton *_downloadImageBtn;
    ImageBrowseButton *_searchBtn;
    WCWebImageSourceInfoButton *_imageSourceBtn;
    WCWebImageBrowserConfig *_config;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCWebImageBrowserConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) WCWebImageSourceInfoButton *imageSourceBtn; // @synthesize imageSourceBtn=_imageSourceBtn;
@property(retain, nonatomic) ImageBrowseButton *searchBtn; // @synthesize searchBtn=_searchBtn;
@property(retain, nonatomic) ImageBrowseButton *downloadImageBtn; // @synthesize downloadImageBtn=_downloadImageBtn;
@property(retain, nonatomic) ImageBrowseButton *moreBtn; // @synthesize moreBtn=_moreBtn;
@property(retain, nonatomic) WCWebImageButtonsContainerView *bottomBarContainerView; // @synthesize bottomBarContainerView=_bottomBarContainerView;
@property(retain, nonatomic) WCImageSearchEntity *searchEntity; // @synthesize searchEntity=_searchEntity;
- (void)onFullScreenItemDragCancel;
- (void)multiImageScrollViewDidEndDecelerating;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)updateCurrentImageSourceButton;
- (void)onClickImageSourceBtn;
- (void)onClickSavedPhotosAlbumButton;
- (void)onClickMoreBtn;
- (void)tryReportSimilarImgOperation:(unsigned long long)arg1;
- (void)reportSearchBtnExposed;
- (void)hideBottomBarContainerInAnimation;
- (void)showBottomBarContainerInAnimation;
- (void)relayoutBottomBar;
- (void)initBottomBar;
- (void)initImageViewerWithUrls:(id)arg1 current:(id)arg2 appID:(id)arg3 referer:(id)arg4;
- (id)initWithConfig:(id)arg1;

@end

