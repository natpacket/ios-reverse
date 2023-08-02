//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "WCMomentsCompositorTemplateTableDelegate-Protocol.h"

@class MJVideoTemplate, MMUIButton, NSIndexPath, NSMutableDictionary, NSString, UICollectionView, UIView, WCMomentsCompositorTemplateTableViewController, WCVideoProducerDataSource;
@protocol WCMomentsCompositorTemplatePanelDelegate;

@interface WCMomentsCompositorTemplatePanelViewController : MMUIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WCMomentsCompositorTemplateTableDelegate>
{
    struct CGRect _hostVCFrame;
    NSIndexPath *_selectedTabIndex;
    WCMomentsCompositorTemplateTableViewController *_currentTemplateTableVC;
    long long _focusedSection;
    long long _focusedRow;
    MJVideoTemplate *_focusedTemplate;
    id <WCMomentsCompositorTemplatePanelDelegate> _delegate;
    WCVideoProducerDataSource *_templateData;
    WCVideoProducerDataSource *_tabCellVMData;
    NSMutableDictionary *_templateTableVCMap;
    UIView *_contentContainerView;
    UICollectionView *_tabBarCollectionView;
    MMUIButton *_confirmButton;
    UIView *_templateTableVCContainerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *templateTableVCContainerView; // @synthesize templateTableVCContainerView=_templateTableVCContainerView;
@property(retain, nonatomic) MMUIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UICollectionView *tabBarCollectionView; // @synthesize tabBarCollectionView=_tabBarCollectionView;
@property(retain, nonatomic) UIView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
@property(retain, nonatomic) NSMutableDictionary *templateTableVCMap; // @synthesize templateTableVCMap=_templateTableVCMap;
@property(retain, nonatomic) WCVideoProducerDataSource *tabCellVMData; // @synthesize tabCellVMData=_tabCellVMData;
@property(retain, nonatomic) WCVideoProducerDataSource *templateData; // @synthesize templateData=_templateData;
@property(nonatomic) __weak id <WCMomentsCompositorTemplatePanelDelegate> delegate; // @synthesize delegate=_delegate;
- (double)getSelectPanelSafeHeight;
- (void)initTemplateTableVCContainerView;
- (void)initTabBarCollectionView;
- (void)initTopBarView;
- (void)initContentView;
- (void)initBackgroundCloseView;
- (void)initView;
- (void)showTemplateTableVCForSection:(long long)arg1 sectionId:(id)arg2;
- (void)onTabAtIndex:(id)arg1 changedSelectTo:(_Bool)arg2;
- (void)onClickConfirm:(id)arg1;
- (void)onClickDismiss:(id)arg1;
- (void)templateTable:(id)arg1 didFocusTemplate:(id)arg2 atSection:(long long)arg3 row:(long long)arg4;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)onNavigationBarBackgroundColorChange;
- (long long)overrideUserInterfaceStyle;
- (_Bool)hidesStatusBar;
- (_Bool)useTransparentNavibar;
- (void)showWithTemplateData:(id)arg1 atDefaultPage:(long long)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initInFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
