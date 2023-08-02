//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BrandProfileItemBaseViewModel.h"

#import "BrandFinderLiveDataWrapperExt-Protocol.h"
#import "WCFinderLiveExt-Protocol.h"

@class BrandFinderLiveCardViewModel, BrandFinderLiveDataWrapper, NSMutableArray, NSString;

@interface BrandProfileItemFinderLiveViewModel : BrandProfileItemBaseViewModel <BrandFinderLiveDataWrapperExt, WCFinderLiveExt>
{
    BrandFinderLiveDataWrapper *_liveDataWrapperCache;
    NSMutableArray *_liveTitleLabelStyles;
    struct CGSize _liveTitleSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize liveTitleSize; // @synthesize liveTitleSize=_liveTitleSize;
@property(retain, nonatomic) NSMutableArray *liveTitleLabelStyles; // @synthesize liveTitleLabelStyles=_liveTitleLabelStyles;
@property(retain, nonatomic) BrandFinderLiveDataWrapper *liveDataWrapperCache; // @synthesize liveDataWrapperCache=_liveDataWrapperCache;
- (void)onFinderLiveReplayStatusUpdated:(id)arg1 replayStatus:(unsigned int)arg2;
- (void)onFinderLiveCloseWithTid:(id)arg1;
- (void)onRecommendReasonAvailableOrUnavailableWithExportId:(id)arg1;
- (void)onRecommendReasonChangedWithExportId:(id)arg1;
- (void)onReplayStatusChangedWithExportId:(id)arg1;
- (void)onLiveStatusChangedWithExportId:(id)arg1;
- (void)fetchLiveDetailData;
- (void)fetchLiveStatus;
@property(readonly, nonatomic) struct CGSize brandLiveSize;
@property(readonly, copy, nonatomic) NSString *brandLiveStatusWording;
@property(readonly, nonatomic) _Bool isBrandLive;
@property(readonly, nonatomic) _Bool isBrandLiveContent;
@property(readonly, nonatomic) double normalCoverTopMargin;
- (id)finderCoverImgUrl;
- (id)finderLiveTitle;
@property(readonly, nonatomic) unsigned long long style;
- (unsigned long long)finderLiveCardStyle;
- (_Bool)shouldUseNewFinderCardViewStyle;
@property(readonly, nonatomic) BrandFinderLiveCardViewModel *cardViewModel;
- (id)finderLiveDataWrapper;
- (id)profileFinderLiveInfo;
- (void)clearLayoutCache;
- (id)desc;
- (id)titleLabelStyles;
- (double)titleMaxWidth;
- (id)title;
- (id)coverImgURL;
- (double)normalCoverBottomMargin;
- (double)calCellHeight;
- (void)dealloc;
- (id)initWithItemMsg:(id)arg1;
- (id)tableViewCellClassName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
