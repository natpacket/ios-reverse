//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class CAGradientLayer, MMMusicLyricResolver, NSString, UIView, WCListenLyricHintView, WCListenLyricsCollectionView, WCListenLyricsLoadingHeaderView;
@protocol WCListenLyricsViewControllerDataSource, WCListenLyricsViewControllerDelegate;

@interface WCListenLyricsViewController : MMUIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    _Bool _isFirstLocation;
    _Bool _hasSetContentOffset;
    _Bool _isSelectLyric;
    _Bool _isDragging;
    _Bool _isReloadData;
    _Bool _shouldForceResetHeaderViewAnimation;
    id <WCListenLyricsViewControllerDelegate> _delegate;
    id <WCListenLyricsViewControllerDataSource> _dataSource;
    UIView *_lyricsContainerView;
    WCListenLyricsCollectionView *_collectionView;
    WCListenLyricsLoadingHeaderView *_loadingHeaderView;
    CAGradientLayer *_gradientLayer;
    WCListenLyricHintView *_hintView;
    MMMusicLyricResolver *_resolver;
    long long _lastIndex;
    long long _curIndex;
    double _currentTime;
    unsigned long long _lyricCellAlphaMode;
    struct CGSize _curContentSize;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldForceResetHeaderViewAnimation; // @synthesize shouldForceResetHeaderViewAnimation=_shouldForceResetHeaderViewAnimation;
@property(nonatomic) _Bool isReloadData; // @synthesize isReloadData=_isReloadData;
@property(nonatomic) _Bool isDragging; // @synthesize isDragging=_isDragging;
@property(nonatomic) struct CGSize curContentSize; // @synthesize curContentSize=_curContentSize;
@property(nonatomic) unsigned long long lyricCellAlphaMode; // @synthesize lyricCellAlphaMode=_lyricCellAlphaMode;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) _Bool isSelectLyric; // @synthesize isSelectLyric=_isSelectLyric;
@property(nonatomic) _Bool hasSetContentOffset; // @synthesize hasSetContentOffset=_hasSetContentOffset;
@property(nonatomic) _Bool isFirstLocation; // @synthesize isFirstLocation=_isFirstLocation;
@property(nonatomic) long long curIndex; // @synthesize curIndex=_curIndex;
@property(nonatomic) long long lastIndex; // @synthesize lastIndex=_lastIndex;
@property(retain, nonatomic) MMMusicLyricResolver *resolver; // @synthesize resolver=_resolver;
@property(retain, nonatomic) WCListenLyricHintView *hintView; // @synthesize hintView=_hintView;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) WCListenLyricsLoadingHeaderView *loadingHeaderView; // @synthesize loadingHeaderView=_loadingHeaderView;
@property(retain, nonatomic) WCListenLyricsCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIView *lyricsContainerView; // @synthesize lyricsContainerView=_lyricsContainerView;
@property(nonatomic) __weak id <WCListenLyricsViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <WCListenLyricsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)collectionLayout;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)internalLocateProperLyricInMiddle;
- (_Bool)tryToLocateProperLyricInMiddleArea;
- (void)tryToLocateFirstProperLyricInMiddlePos;
- (void)internalLocateLyric;
- (void)_scrollToIndex:(long long)arg1;
- (void)scrollToIndex:(long long)arg1;
- (void)removeCollectionHeaderView;
- (_Bool)isCollectionViewContainLoadingHeaderView;
- (void)startLyricLoadingAnimation;
- (void)internalRefreshSingleCellDisplay:(id)arg1 row:(long long)arg2 animated:(_Bool)arg3;
- (void)internalRefreshCellsDisplay:(_Bool)arg1;
- (void)refreshCellDisplay:(_Bool)arg1;
- (void)setLyricsModeToImmersive;
- (void)delayChangeLyricModeToImmersive;
- (struct UIEdgeInsets)collectionViewContentInsets;
- (_Bool)hasLyric;
- (void)resetAllValue;
- (void)resetFlag;
- (void)reloadHintView:(unsigned long long)arg1;
- (void)tryGetLyricAndReloadData;
- (void)createResolverWithLyrics:(id)arg1;
- (void)showLoading;
- (void)didMusicResume;
- (void)didMusicPaused;
- (void)updateMusicCurrentTime:(double)arg1;
- (void)updateWithLyrics:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)internalInit:(id)arg1;
- (void)dealloc;
- (id)initWithLyrics:(id)arg1;
- (id)init;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
