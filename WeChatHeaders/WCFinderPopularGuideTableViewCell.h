//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class MMUIButton, NSArray, NSString, UIButton, UICollectionView, UILabel, WCFinderFeedLayoutContentVM;
@protocol WCFinderPopularGuideTableViewCellDelegate;

@interface WCFinderPopularGuideTableViewCell : UITableViewCell <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    id <WCFinderPopularGuideTableViewCellDelegate> _delegate;
    UILabel *_popularLabel;
    MMUIButton *_morePopularAction;
    UICollectionView *_collectionView;
    NSArray *_contentArray;
    UIButton *_backgroundBtn;
    WCFinderFeedLayoutContentVM *_contentVM;
}

+ (double)cellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFeedLayoutContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(nonatomic) __weak UIButton *backgroundBtn; // @synthesize backgroundBtn=_backgroundBtn;
@property(copy, nonatomic) NSArray *contentArray; // @synthesize contentArray=_contentArray;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak MMUIButton *morePopularAction; // @synthesize morePopularAction=_morePopularAction;
@property(nonatomic) __weak UILabel *popularLabel; // @synthesize popularLabel=_popularLabel;
@property(nonatomic) __weak id <WCFinderPopularGuideTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickTipsAction;
- (void)onClickAction;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)updateWithContentVM:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)configureCollection;
- (void)setUpUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
