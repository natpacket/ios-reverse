//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TingAutoSizeCollectionViewCell.h"

#import "TingFlowPlayerNotification-Protocol.h"

@class NSString, TingItem, TingSearchCellContentView, UIView;

@interface TingSearchContentCollectionViewCell : TingAutoSizeCollectionViewCell <TingFlowPlayerNotification>
{
    int _playerStatus;
    CDUnknownBlockType _onSearchCollectionViewCellLikeButtonClickedHandler;
    CDUnknownBlockType _onSearchCollectionViewCellListenLaterButtonClickedHandler;
    TingSearchCellContentView *_innerContentView;
    TingItem *_curTingItem;
    UIView *_highlightContentView;
}

+ (id)reuseIdentifier;
- (void).cxx_destruct;
@property(nonatomic) int playerStatus; // @synthesize playerStatus=_playerStatus;
@property(retain, nonatomic) UIView *highlightContentView; // @synthesize highlightContentView=_highlightContentView;
@property(retain, nonatomic) TingItem *curTingItem; // @synthesize curTingItem=_curTingItem;
@property(retain, nonatomic) TingSearchCellContentView *innerContentView; // @synthesize innerContentView=_innerContentView;
@property(copy, nonatomic) CDUnknownBlockType onSearchCollectionViewCellListenLaterButtonClickedHandler; // @synthesize onSearchCollectionViewCellListenLaterButtonClickedHandler=_onSearchCollectionViewCellListenLaterButtonClickedHandler;
@property(copy, nonatomic) CDUnknownBlockType onSearchCollectionViewCellLikeButtonClickedHandler; // @synthesize onSearchCollectionViewCellLikeButtonClickedHandler=_onSearchCollectionViewCellLikeButtonClickedHandler;
- (void)flowPlayer:(id)arg1 tingItem:(id)arg2 onStatusChanged:(int)arg3;
- (void)updateBottomLine:(_Bool)arg1;
- (id)player;
- (int)getTingItemPlayStatus:(id)arg1;
- (void)updateWithListenSearchResultItem:(id)arg1 scene:(unsigned long long)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (struct CGSize)calculatedSizeWithConstrainedSize:(struct CGSize)arg1;
- (void)prepareForReuse;
- (void)configureLayout;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
