//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FinderCollectionInfo, NSArray, UIView, WCFinderProfileFeedPageHeaderContainerView, WCFinderTopicInfo;

@protocol WCFinderProfileFeedPageHeaderContainerViewDelegate <NSObject>
- (void)headerContainerExpandChangedChanged:(WCFinderProfileFeedPageHeaderContainerView *)arg1 isExpand:(_Bool)arg2;
- (void)headerContainerViewContentHeightChanged:(WCFinderProfileFeedPageHeaderContainerView *)arg1;
- (void)headerContainerView:(WCFinderProfileFeedPageHeaderContainerView *)arg1 selectedTopic:(WCFinderTopicInfo *)arg2;

@optional
- (void)setupCollectionReportWithCollectionItemButtons:(NSArray *)arg1;
- (void)setupCollectionReportWithNextEpisodeBtn:(UIView *)arg1 allEpisodeBtn:(UIView *)arg2 moreBtn:(UIView *)arg3;
- (void)headerContainerClickedCollectionMoreButton:(WCFinderProfileFeedPageHeaderContainerView *)arg1;
- (void)headerContainer:(WCFinderProfileFeedPageHeaderContainerView *)arg1 clickedCollectionItemWithInfo:(FinderCollectionInfo *)arg2;
- (void)headerContainerClickedCollectionAllEpisodeButton:(WCFinderProfileFeedPageHeaderContainerView *)arg1;
- (void)headerContainerClickedCollectionNextEpisodeButton:(WCFinderProfileFeedPageHeaderContainerView *)arg1;
- (void)headerContainerUpdateCollectionListView:(WCFinderProfileFeedPageHeaderContainerView *)arg1;
@end

