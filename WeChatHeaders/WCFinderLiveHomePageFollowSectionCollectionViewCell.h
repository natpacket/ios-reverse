//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "WCFinderLiveHomePageDataRefreshProtocol-Protocol.h"

@class NSString, WCFinderLiveHomePageFollowSectionView;
@protocol WCFinderLiveHomePageFollowSectionViewDelegate;

@interface WCFinderLiveHomePageFollowSectionCollectionViewCell : UICollectionViewCell <WCFinderLiveHomePageDataRefreshProtocol>
{
    id <WCFinderLiveHomePageFollowSectionViewDelegate> _delegate;
    WCFinderLiveHomePageFollowSectionView *_liveCollectionView;
}

+ (double)cellHeight;
+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveHomePageFollowSectionView *liveCollectionView; // @synthesize liveCollectionView=_liveCollectionView;
@property(nonatomic) __weak id <WCFinderLiveHomePageFollowSectionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)scrollToTop:(_Bool)arg1;
- (void)reloadData;
- (void)updateWithVM:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)prepareForReuse;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

