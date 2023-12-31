//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "WCStoryCollectionFooterViewDelegate-Protocol.h"

@class MMUIButton, MMUILabel, NSString, UICollectionView, UICollectionViewFlowLayout, UIView, WCStoryAlbumViewModel, WCStoryCollectionFooterView, WCStoryFloatTopBar;

@interface WCStoryAlbumViewController : MMUIViewController <WCStoryCollectionFooterViewDelegate>
{
    _Bool _isNoMoreData;
    NSString *_username;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_flowLayout;
    WCStoryFloatTopBar *_floatTopBar;
    WCStoryCollectionFooterView *_footerView;
    UIView *_blankView;
    MMUIButton *_fullTimelineButton;
    MMUILabel *_noDataLabel;
    WCStoryAlbumViewModel *_viewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCStoryAlbumViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) MMUILabel *noDataLabel; // @synthesize noDataLabel=_noDataLabel;
@property(nonatomic) _Bool isNoMoreData; // @synthesize isNoMoreData=_isNoMoreData;
@property(retain, nonatomic) MMUIButton *fullTimelineButton; // @synthesize fullTimelineButton=_fullTimelineButton;
@property(retain, nonatomic) UIView *blankView; // @synthesize blankView=_blankView;
@property(retain, nonatomic) WCStoryCollectionFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) WCStoryFloatTopBar *floatTopBar; // @synthesize floatTopBar=_floatTopBar;
@property(retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void)MMRefreshCollectionFooterDidTriggerRefresh:(id)arg1;
- (void)onClickAction;
- (void)updateFooterViewState;
- (void)updateAlbumViewState;
- (void)updateTipLabelState;
- (double)getCellWidth;
- (void)setupData;
- (void)layoutUI;
- (void)setupUI;
- (void)viewDidTransitionToNewSize;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUsername:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

