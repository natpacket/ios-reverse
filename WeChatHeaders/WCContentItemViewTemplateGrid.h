//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCContentItemBaseView.h"

#import "WCCanvasPageViewControllerDelegate-Protocol.h"
#import "WCFacadeExt-Protocol.h"
#import "WCImageFullScreeViewMgrExt-Protocol.h"
#import "WCImageViewDelegate-Protocol.h"

@class MMAdaptiveLabel, MMImageGridView, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, SightIconView, UIButton, WCMediaItem;

@interface WCContentItemViewTemplateGrid : WCContentItemBaseView <WCCanvasPageViewControllerDelegate, WCImageViewDelegate, WCImageFullScreeViewMgrExt, WCFacadeExt>
{
    MMAdaptiveLabel *_descriptionView;
    MMImageGridView *_imageGridView;
    UIButton *_moreButton;
    UIButton *_moreImageButton;
    WCMediaItem *m_currentMediaItem;
    NSMutableArray *m_arrMediaItem;
    NSMutableSet *_setViewMediaIndex;
    unsigned long long _viewInitIndex;
    NSMutableSet *_setScaleOutMediaIndex;
    NSMutableSet *_setScaleInMediaIndex;
    unsigned int _loadedStartTime;
    unsigned int _loadedEndTime;
    NSMutableDictionary *_dicMediaStartTime;
    NSMutableDictionary *_dicMediaEndTime;
    NSMutableArray *_arrNeedLogMediaID;
    NSMutableArray *_arrPreloadMediaID;
    NSMutableArray *_arrDownloadMediaID;
    SightIconView *_playIconView;
}

+ (double)heightForMedia:(id)arg1 showDetail:(_Bool)arg2;
+ (double)heightForDataItem:(id)arg1 showDetail:(_Bool)arg2;
+ (struct CGSize)fetchImageSizeForAdWithPlayIcon:(id)arg1;
+ (_Bool)shouldAdAddPlayIcon:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) SightIconView *playIconView; // @synthesize playIconView=_playIconView;
- (_Bool)accessibilityActivate;
- (void)onCloseCanvasPageView;
- (void)onAddDownloadQueue:(id)arg1 downloadType:(long long)arg2;
- (void)onCancelDownloadSuccess:(id)arg1 downloadType:(long long)arg2;
- (void)onDownloadFail:(id)arg1 downloadType:(long long)arg2;
- (void)onDownloadFinish:(id)arg1 downloadType:(long long)arg2;
- (id)genLogStrWithIndexSet:(id)arg1;
- (void)tryLogClickBigImage;
- (void)tryLogThumbImageLoadedEffiency:(_Bool)arg1;
- (void)throwUrlMessage;
- (id)getVoiceOverStrForTimeline;
- (void)onVoiceOverClick;
- (void)hideMenu;
- (void)onDownloadCancel:(id)arg1;
- (void)onDownloadFailed:(id)arg1;
- (void)onDownloadFinish:(id)arg1;
- (void)onLongPressedWCImage:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)onClickWCAdImage:(id)arg1;
- (void)asyncRecordMicroMerchantInteractionIfNeeded:(unsigned long long)arg1;
- (void)onClickWCImage:(id)arg1 needEdit:(_Bool)arg2 From3DTouch:(_Bool)arg3;
- (void)onClickWCImageFrom3DTouch:(id)arg1;
- (void)onClickWCImage:(id)arg1;
- (void)tryToReportAdImageDownload:(id)arg1 isSuccess:(_Bool)arg2 isCancel:(_Bool)arg3;
- (void)onMediaDidScaleIn:(unsigned int)arg1;
- (void)onMediaDidScaleOut:(unsigned int)arg1;
- (void)onViewAnimationFromIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2;
- (void)onViewAnimationDidHide;
- (void)onViewAnimationWillHide;
- (void)recoverImageViewsHiddenState:(id)arg1;
- (_Bool)isFullScreenShowImageView:(id)arg1;
- (void)showAllImageViews;
- (id)imageViewOfIndex:(unsigned long long)arg1;
- (void)updateImageViewFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (id)behaviourInfoSession;
- (void)recordDetailPageBrowseMediaIfNeeded:(id)arg1;
- (void)recordDetailPageBrowseMediaWithIndexIfNeeded:(unsigned int)arg1;
- (void)onImageWebSearch;
- (void)startEditImage;
- (void)onEditImage:(id)arg1;
- (_Bool)canEditImage;
- (void)onExposeFromImage:(id)arg1;
- (void)shareToOpenSDK;
- (void)onShareToOpenSDK:(id)arg1;
- (void)addFavorite;
- (void)onFavoriteAdd:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)initViewsWithWCDataItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

