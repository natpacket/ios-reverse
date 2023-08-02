//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCRedEnvelopesBaseViewController.h"

#import "MMWebViewDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCRedEnvelopeSelectSkinFlowViewDelegate-Protocol.h"
#import "WCRedEnvelopesCustomizeSkinEntryCellDelegate-Protocol.h"
#import "WCRedEnvelopesExpiredSkinEntryCollectionViewCellDelegate-Protocol.h"
#import "WCRedEnvelopesSelectSkinCollectionViewCellDelegate-Protocol.h"

@class HbEnvelopSource, NSIndexPath, NSMutableArray, NSMutableDictionary, NSString, UIButton, UICollectionView, UILabel, UIScrollView, WCRedEnvelopeSelectSkinFlowView, WCRedEnvelopesReceiveHomeTemplateView, WCRedEnvelopesSelectSkinFlowLayout;
@protocol WCRedEnvelopesSelectSkinViewControllerDelegate;

@interface WCRedEnvelopesSelectSkinViewController : WCRedEnvelopesBaseViewController <UIScrollViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource, WCActionSheetDelegate, MMWebViewDelegate, WCRedEnvelopesSelectSkinCollectionViewCellDelegate, WCRedEnvelopesExpiredSkinEntryCollectionViewCellDelegate, WCRedEnvelopesCustomizeSkinEntryCellDelegate, WCRedEnvelopeSelectSkinFlowViewDelegate>
{
    id <WCRedEnvelopesSelectSkinViewControllerDelegate> m_delegate;
    _Bool m_bDidBack;
    _Bool _hasReportScroll;
    _Bool _beginDragging;
    _Bool _isFirstLayout;
    _Bool _hasTimeLimitPromotion;
    _Bool _bHasReportCanShowExpireEntry;
    _Bool _bHasReportShowExpireEntry;
    _Bool _bIsSmallPicMode;
    unsigned int _enterIndex;
    unsigned int _endIndex;
    unsigned int _enterTimestamp;
    WCRedEnvelopesReceiveHomeTemplateView *_templateView;
    UIScrollView *_m_contentScrollView;
    UICollectionView *_m_collectionView;
    HbEnvelopSource *_selectedResource;
    HbEnvelopSource *_currentSelectedResource;
    NSIndexPath *_selectedIndexPath;
    UILabel *_overtimeLabel;
    long long _selectedIndex;
    double _dragStartX;
    double _dragEndX;
    UILabel *_noSkinLabel;
    NSMutableArray *_m_selectSkinViewArr;
    WCRedEnvelopesSelectSkinFlowLayout *_m_flowLayout;
    NSMutableDictionary *_m_cellIdentifierDict;
    UIButton *_m_exchangeBtn;
    NSString *_enterCoverId;
    NSString *_endCoverId;
    UIButton *_m_useCoverBtn;
    UIButton *_m_previewCoverBtn;
    NSString *_promotionCoverId;
    WCRedEnvelopeSelectSkinFlowView *_m_smallFlowView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCRedEnvelopeSelectSkinFlowView *m_smallFlowView; // @synthesize m_smallFlowView=_m_smallFlowView;
@property(nonatomic) _Bool bIsSmallPicMode; // @synthesize bIsSmallPicMode=_bIsSmallPicMode;
@property(nonatomic) _Bool bHasReportShowExpireEntry; // @synthesize bHasReportShowExpireEntry=_bHasReportShowExpireEntry;
@property(nonatomic) _Bool bHasReportCanShowExpireEntry; // @synthesize bHasReportCanShowExpireEntry=_bHasReportCanShowExpireEntry;
@property(retain, nonatomic) NSString *promotionCoverId; // @synthesize promotionCoverId=_promotionCoverId;
@property(nonatomic) unsigned int enterTimestamp; // @synthesize enterTimestamp=_enterTimestamp;
@property(nonatomic) _Bool hasTimeLimitPromotion; // @synthesize hasTimeLimitPromotion=_hasTimeLimitPromotion;
@property(retain, nonatomic) UIButton *m_previewCoverBtn; // @synthesize m_previewCoverBtn=_m_previewCoverBtn;
@property(retain, nonatomic) UIButton *m_useCoverBtn; // @synthesize m_useCoverBtn=_m_useCoverBtn;
@property(retain, nonatomic) NSString *endCoverId; // @synthesize endCoverId=_endCoverId;
@property(retain, nonatomic) NSString *enterCoverId; // @synthesize enterCoverId=_enterCoverId;
@property(nonatomic) unsigned int endIndex; // @synthesize endIndex=_endIndex;
@property(nonatomic) unsigned int enterIndex; // @synthesize enterIndex=_enterIndex;
@property(retain, nonatomic) UIButton *m_exchangeBtn; // @synthesize m_exchangeBtn=_m_exchangeBtn;
@property(retain, nonatomic) NSMutableDictionary *m_cellIdentifierDict; // @synthesize m_cellIdentifierDict=_m_cellIdentifierDict;
@property(retain, nonatomic) WCRedEnvelopesSelectSkinFlowLayout *m_flowLayout; // @synthesize m_flowLayout=_m_flowLayout;
@property(retain, nonatomic) NSMutableArray *m_selectSkinViewArr; // @synthesize m_selectSkinViewArr=_m_selectSkinViewArr;
@property(nonatomic) _Bool isFirstLayout; // @synthesize isFirstLayout=_isFirstLayout;
@property(nonatomic) _Bool beginDragging; // @synthesize beginDragging=_beginDragging;
@property(retain, nonatomic) UILabel *noSkinLabel; // @synthesize noSkinLabel=_noSkinLabel;
@property(nonatomic) double dragEndX; // @synthesize dragEndX=_dragEndX;
@property(nonatomic) double dragStartX; // @synthesize dragStartX=_dragStartX;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) UILabel *overtimeLabel; // @synthesize overtimeLabel=_overtimeLabel;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) HbEnvelopSource *currentSelectedResource; // @synthesize currentSelectedResource=_currentSelectedResource;
@property(retain, nonatomic) HbEnvelopSource *selectedResource; // @synthesize selectedResource=_selectedResource;
@property(retain, nonatomic) UICollectionView *m_collectionView; // @synthesize m_collectionView=_m_collectionView;
@property(retain, nonatomic) UIScrollView *m_contentScrollView; // @synthesize m_contentScrollView=_m_contentScrollView;
@property(retain, nonatomic) WCRedEnvelopesReceiveHomeTemplateView *templateView; // @synthesize templateView=_templateView;
@property(nonatomic) _Bool hasReportScroll; // @synthesize hasReportScroll=_hasReportScroll;
- (void)onWCRedEnvelopeSelectSkinFlowViewGotoPreview:(id)arg1;
- (void)closeIntroView;
- (void)onWCRedEnvelopeSelectSkinFlowViewDeleteHbResource:(id)arg1;
- (void)onWCRedEnvelopesCustomizeSkinEntryCellClickEntry:(id)arg1;
- (void)onWCRedEnvelopesExpiredSkinEntryCollectionViewCellClickEntry;
- (void)onWCRedEnvelopesSelectSkinCollectionViewCellDeleteSkin:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndScroll:(struct CGPoint *)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)switchToIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)updateDoneBtnStatus;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onLongPressCell:(id)arg1;
- (void)deleteHbEnvelopSource:(id)arg1;
- (id)getData;
- (void)onTapGusture:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)onWCRedEnvelopeSelectSkinFlowViewSelectHbResource:(id)arg1;
- (void)onWCRedEnvelopeSelectSkinFlowViewClickExpiredEntry;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (_Bool)isCurrentSmallPicMode;
- (void)saveCurrentViewMode:(_Bool)arg1;
- (void)onClickChangeSelectView:(id)arg1;
- (void)updateTitleView;
- (void)updateTitleView2;
- (void)updateNavigationBackground;
- (void)OnRightBarButtonAdd;
- (id)onWebViewPassParams:(id)arg1 Webview:(id)arg2;
- (void)onClickExchageBtn;
- (void)adjustContentHeight;
- (void)updateViewData;
- (void)scrollToSelectedCell;
- (void)checkTimeLimitPromotionForReport;
- (id)filterServerResponse:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)refreshCollectionAndScrollToSelectedCell:(id)arg1;
- (void)updateSmallFlowViewData;
- (void)refreshViewWithData:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)checkAndUseTimeLimitPromoSuccess;
- (void)onPreviewBtnTap;
- (void)onTapUseCoverBtn;
- (void)OnLeftBarButtonDone;
- (void)setDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
