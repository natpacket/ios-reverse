//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMFinderLiveConnectedMicUserCellView.h"

@class MMFinderLiveFansGroupSignView, MMFinderLiveGlobalRankSignView;

@interface MMFinderLiveConnectedMicAudienceCellView : MMFinderLiveConnectedMicUserCellView
{
    MMFinderLiveGlobalRankSignView *_globalRankSignView;
    MMFinderLiveFansGroupSignView *_fansGroupSignView;
}

+ (id)ReuseIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveFansGroupSignView *fansGroupSignView; // @synthesize fansGroupSignView=_fansGroupSignView;
@property(retain, nonatomic) MMFinderLiveGlobalRankSignView *globalRankSignView; // @synthesize globalRankSignView=_globalRankSignView;
- (id)getFansGroupName;
- (unsigned int)getFansGroupRank;
- (unsigned int)getGlobalRank;
- (void)layoutUI;
- (void)updateWithConnectMicUser:(id)arg1 searchText:(id)arg2;
- (void)configNickNameLabelWithSearchText:(id)arg1;
- (void)configFansGroupSignView;
- (void)configGlobalRankSignView;
- (void)layoutSubviews;
- (void)prepareForReuse;

@end
