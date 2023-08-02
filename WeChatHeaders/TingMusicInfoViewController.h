//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ICCollectionViewController.h"

#import "MMPageSheetAdapterDelegate-Protocol.h"

@class MMListenCommentInfo, MMPageSheetAdapter, MMUIActivityIndicatorView, NSArray, NSString, TingItem;

@interface TingMusicInfoViewController : ICCollectionViewController <MMPageSheetAdapterDelegate>
{
    _Bool _isCommentSecureBitCloseJumpSinger;
    CDUnknownBlockType _onCellClicked;
    MMPageSheetAdapter *_pageSheetAdapter;
    TingItem *_tingItem;
    MMListenCommentInfo *_commentInfo;
    NSArray *_singerInfoList;
    NSString *_sourceTitle;
    NSString *_singerTitle;
    NSArray *_musicInfoModelArr;
    MMUIActivityIndicatorView *_indicatorView;
}

+ (_Bool)shouldShowTingMusicInfoModelArrWithTingItem:(id)arg1 commentInfo:(id)arg2 isCommentSecureBitCloseJumpSinger:(_Bool)arg3 singerInfoList:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) NSArray *musicInfoModelArr; // @synthesize musicInfoModelArr=_musicInfoModelArr;
@property(copy, nonatomic) NSString *singerTitle; // @synthesize singerTitle=_singerTitle;
@property(copy, nonatomic) NSString *sourceTitle; // @synthesize sourceTitle=_sourceTitle;
@property(retain, nonatomic) NSArray *singerInfoList; // @synthesize singerInfoList=_singerInfoList;
@property(nonatomic) _Bool isCommentSecureBitCloseJumpSinger; // @synthesize isCommentSecureBitCloseJumpSinger=_isCommentSecureBitCloseJumpSinger;
@property(retain, nonatomic) MMListenCommentInfo *commentInfo; // @synthesize commentInfo=_commentInfo;
@property(retain, nonatomic) TingItem *tingItem; // @synthesize tingItem=_tingItem;
@property(nonatomic) __weak MMPageSheetAdapter *pageSheetAdapter; // @synthesize pageSheetAdapter=_pageSheetAdapter;
@property(copy, nonatomic) CDUnknownBlockType onCellClicked; // @synthesize onCellClicked=_onCellClicked;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)generatePageSheetAdapter;
- (void)showAsHalfScreen;
- (id)collectionLayout;
- (void)reloadCollectionViewData;
- (void)stopCollectionViewLoading;
- (void)startCollectionViewLoading;
- (void)fetchData;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithTingItem:(id)arg1 commentInfo:(id)arg2 isCommentSecureBitCloseJumpSinger:(_Bool)arg3 singerInfoList:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

