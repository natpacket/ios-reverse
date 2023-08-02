//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TingCategoryFlowViewController.h"

#import "TingViewController-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSData, NSMutableArray, NSString;

@interface TingFriendTrendsViewController : TingCategoryFlowViewController <UIScrollViewDelegate, TingViewController>
{
    NSMutableArray *_lines;
    NSData *_sessionBuffer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(retain, nonatomic) NSMutableArray *lines; // @synthesize lines=_lines;
- (void)flowPlayer:(id)arg1 tingItem:(id)arg2 onStatusChanged:(int)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionLayout;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (int)getTingScene;
- (_Bool)showTingMoreButton;
- (unsigned long long)headerViewType;
- (id)loadData:(CDUnknownBlockType)arg1;
- (id)loadMore:(CDUnknownBlockType)arg1;
- (id)loadNew:(CDUnknownBlockType)arg1;
- (void)cellRegister;
- (void)fetchNewHeaderCategory;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
