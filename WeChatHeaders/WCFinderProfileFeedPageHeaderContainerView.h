//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

#import "WCFinderProfileCollectionListViewDelegate-Protocol.h"
#import "WCFinderTagListViewDelegate-Protocol.h"

@class NSString, WCFinderProfileCollectionListView, WCFinderTagListView;
@protocol WCFinderProfileFeedPageHeaderContainerViewDelegate;

@interface WCFinderProfileFeedPageHeaderContainerView : UICollectionReusableView <WCFinderTagListViewDelegate, WCFinderProfileCollectionListViewDelegate>
{
    id <WCFinderProfileFeedPageHeaderContainerViewDelegate> _delegate;
    WCFinderTagListView *_tagListView;
    WCFinderProfileCollectionListView *_collectionListView;
}

+ (double)displayHeightWithTagLayout:(id)arg1 collectionLayout:(id)arg2;
+ (id)createTagListViewOptions;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderProfileCollectionListView *collectionListView; // @synthesize collectionListView=_collectionListView;
@property(retain, nonatomic) WCFinderTagListView *tagListView; // @synthesize tagListView=_tagListView;
@property(nonatomic) __weak id <WCFinderProfileFeedPageHeaderContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setupReportWithCollectionItemButtons:(id)arg1;
- (void)setupReportWithNextEpisodeBtn:(id)arg1 allEpisodeBtn:(id)arg2 moreBtn:(id)arg3;
- (void)collectionListDisplayHeightChanged;
- (void)clickedMoreButton;
- (void)clickedCollectionItemWithInfo:(id)arg1;
- (void)clickedAllEpisodeButton;
- (void)clickedNextEpisodeButton;
- (void)onTagListViewIsExpandChanged:(id)arg1 isExpand:(_Bool)arg2;
- (void)onTagListView:(id)arg1 onSelectedItem:(id)arg2;
- (void)updateWithTagLayout:(id)arg1 selectedTopic:(id)arg2 collectionLayout:(id)arg3;
- (void)layoutSubviews;
- (void)configureSubviewWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

