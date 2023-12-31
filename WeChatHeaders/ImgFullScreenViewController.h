//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FullScreenViewController.h"

#import "FavImageFullScreenViewContainerDelegate-Protocol.h"
#import "ImgButtonsContainerViewDelegate-Protocol.h"
#import "ImgFullScreenLogicControllerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "scrollViewDelegate-Protocol.h"

@class AssetScrollView, EditImageForwardAndEditLogicController, ImgButtonsContainerView, ImgFullScreenLogicController, MMScrollActionSheet, NSMutableArray, NSMutableDictionary, NSString, OCRTransHalfScreenViewController, QRCodeInMultiDisplayView, ScanQRCodeLogicController, UIView, WCImageTranslateLogic;
@protocol ImgFullScreenViewControllerDelegate;

@interface ImgFullScreenViewController : FullScreenViewController <UIScrollViewDelegate, scrollViewDelegate, FavImageFullScreenViewContainerDelegate, ImgButtonsContainerViewDelegate, ImgFullScreenLogicControllerDelegate>
{
    AssetScrollView *m_scrollView;
    UIView *m_blackMask;
    NSMutableArray *m_arrData;
    NSMutableArray *m_arrImage;
    struct CGRect m_originRect;
    unsigned int m_iCurIndex;
    _Bool m_isRotating;
    _Bool m_isAnimating;
    NSMutableDictionary *m_dicMsgStatus;
    WCImageTranslateLogic *_imgTranslateLogic;
    OCRTransHalfScreenViewController *_ocrHalfScreenViewCtrl;
    ScanQRCodeLogicController *_scanQRCodeLogic;
    QRCodeInMultiDisplayView *_qrCodeMultiView;
    EditImageForwardAndEditLogicController *m_editImageLogicController;
    _Bool _m_needEditImage;
    int _scene;
    ImgFullScreenLogicController *_logicController;
    id <ImgFullScreenViewControllerDelegate> _delegate;
    ImgButtonsContainerView *_buttonsContainerView;
    MMScrollActionSheet *_scrollActionSheet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMScrollActionSheet *scrollActionSheet; // @synthesize scrollActionSheet=_scrollActionSheet;
@property(retain, nonatomic) ImgButtonsContainerView *buttonsContainerView; // @synthesize buttonsContainerView=_buttonsContainerView;
@property(nonatomic) _Bool m_needEditImage; // @synthesize m_needEditImage=_m_needEditImage;
@property(nonatomic) __weak id <ImgFullScreenViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) ImgFullScreenLogicController *logicController; // @synthesize logicController=_logicController;
@property(nonatomic) int scene; // @synthesize scene=_scene;
- (id)getCurrentRawVideoStatusButton;
- (void)setOriginViewHidden:(_Bool)arg1 atIndex:(unsigned int)arg2;
- (_Bool)removeFromViewAfterTransition;
- (void)showVCAnimation;
- (void)onSingleTapToAnimateToolsHidden:(_Bool)arg1;
- (void)onLongPressEvent:(id)arg1 onImage:(id)arg2;
- (void)onWillLongPress:(id)arg1 touchPoint:(struct CGPoint)arg2 onImage:(id)arg3;
- (void)onFullScreenItemChangeAlpha:(double)arg1;
- (_Bool)allowAnimationOnLandscape;
- (_Bool)useBackgroundAnimation;
- (_Bool)useAlphaAnimation;
- (_Bool)shouldAnimationWhenHide;
- (void)onAnimateFadeOut;
- (void)animationHideWithRotate;
- (void)onContainerAnimationHideStop;
- (void)onContainerAnimationHideStart;
- (void)onContainerAnimationShowStop;
- (void)onContainerAnimationShowStart;
- (double)animationDuration;
- (void)onPageChange:(unsigned int)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)reportAction:(int)arg1;
- (id)getScrollView;
- (unsigned int)getCurrentIndex;
- (id)getCurrentContainer;
- (id)getCurrentImgInfo;
- (void)downloadImage;
- (void)resetScrollView:(_Bool)arg1;
- (void)resetScrollView;
- (void)clearStatus;
- (void)initView;
- (_Bool)shouldAutorotate;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithRecordData:(id)arg1 originView:(id)arg2 index:(unsigned int)arg3 needEdit:(_Bool)arg4;
- (id)initWithRecordData:(id)arg1 originView:(id)arg2 index:(unsigned int)arg3;
- (void)onGetVideoViewBottomLineCenterY:(double *)arg1 leftPartOffset:(double *)arg2 rightPartWidth:(double *)arg3;
- (void)onDownloadImg:(id)arg1 success:(_Bool)arg2;
- (void)onDownloadImg:(id)arg1 progress:(float)arg2;
- (void)onActionSheetQRCodeRowViewBanned;
- (void)onTappedRowInfo:(id)arg1;
- (id)getFavForawrdViewController;
- (id)buildMsgFromCurrentItem;
- (void)onEditImageForwardAndEditResult:(id)arg1;
- (void)onDismissEditView;
- (void)onShowingEditView;
- (void)handleClickExit;
- (void)handleClickCancelDownload;
- (void)handleClickViewHDImage;
- (void)handleClickMore;
- (void)handleClickShareTimeline;
- (void)handleClickEdit;
- (void)handleClickSaveToAlbum;
- (void)handleClickFavorite;
- (void)handleClickShareFriend:(id)arg1;
- (void)handleClickActionSheetItemOCR;
- (void)handleClickScanQRCode;
- (void)handleClickTranslateImage;
- (void)relayoutScrollSheet;
- (void)clickRFItemCallBack:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)configScrollActionSheet;
- (id)actionSheetItemsAtRow:(int)arg1;
- (void)initScrollActionSheet;
- (long long)compareActionSheetItem:(id)arg1 with:(id)arg2;
- (void)sortActionSheetItem;
- (void)addActionSheetItem:(unsigned int)arg1 iconImage:(id)arg2 title:(id)arg3 toArray:(id)arg4;
- (void)onClickButton:(id)arg1;
- (id)getHDImgButtonTitle;
- (_Bool)canShowButton:(unsigned int)arg1;
- (void)onGetA8KeyResultType:(unsigned int)arg1;
- (void)onScanCodeFinish;
- (void)onScanEnds;
- (void)onStopLoading;
- (void)onCancelBtnClicked:(id)arg1;
- (void)onDotViewClicked:(id)arg1;
- (void)onSelectMarkDotInfo:(id)arg1;
- (void)dismissQRCodeMultiView;
- (void)updateQRCodeMultiView;
- (void)showQRCodeMultiDisplayView;
- (_Bool)isSupportImageDetectFastEntry;
- (void)onImageDetectOCRFinish:(unsigned int)arg1 jsonStr:(id)arg2 reqKey:(id)arg3;
- (void)onImageDetectUploadFinish:(unsigned int)arg1 context:(id)arg2 detectMediaInfo:(id)arg3;
- (void)onPreDetectWordSuccess:(id)arg1;
- (void)onShowTranslateImage:(id)arg1;
- (void)getTranslateImgInfo:(id)arg1 fileId:(id *)arg2 aesKey:(id *)arg3;
- (id)getTranslateImgIdentifier:(id)arg1;
- (void)showOCRHalfScreenViewCtrl;
- (void)setupOCRHalfScreenViewCtrl:(id)arg1;
- (void)showTranslateImg:(id)arg1;
- (void)translateWordInImage;
- (id)targetLogInfo:(id)arg1;
- (void)detectWordInImage:(id)arg1;
- (void)detectQRCodeInImage:(id)arg1 touchPoint:(struct CGPoint)arg2;
- (void)asyncDetectImageIfNeeded:(struct CGPoint)arg1;
- (void)onTransitionToNewSize;
- (void)layoutToolbar;
- (void)initToolbar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

