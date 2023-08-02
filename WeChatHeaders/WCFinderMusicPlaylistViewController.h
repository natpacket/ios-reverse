//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "WCFinderStreamFooterViewActionDelegate-Protocol.h"
#import "WCFinderStreamProfileMusicPlaylistPageDelegate-Protocol.h"

@class NSString, UICollectionView, WCFinderStreamFooterView, WCFinderStreamProfileMusicPlaylist;

@interface WCFinderMusicPlaylistViewController : MMUIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WCFinderStreamFooterViewActionDelegate, WCFinderStreamProfileMusicPlaylistPageDelegate>
{
    WCFinderStreamProfileMusicPlaylist *_playList;
    UICollectionView *_collectionView;
    WCFinderStreamFooterView *_footerView;
}

+ (id)playListVCWithCategory:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderStreamFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) WCFinderStreamProfileMusicPlaylist *playList; // @synthesize playList=_playList;
- (void)bindAlbumSDKReport:(id)arg1 album:(id)arg2;
- (void)onPlayList:(id)arg1 onLoadSuccess:(_Bool)arg2;
- (void)onPlayList:(id)arg1 appendDataAtRange:(struct _NSRange)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didClickStreamFooterPostFromSnsAction:(id)arg1;
- (_Bool)isEnableStreamFooterTrigerLoading:(id)arg1;
- (void)didClickStreamFooterRefresh:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)navigationBarBackgroundColor;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

