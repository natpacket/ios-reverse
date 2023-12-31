//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, WCFinderLiveHomePageReportSession, WCFinderLiveStreamContainerModel;
@protocol WCFinderLiveHomePageSectionViewModelDelegate;

@interface WCFinderLiveHomePageSectionViewModel : NSObject
{
    _Bool _skipAsyncLoadLiveInfo;
    id <WCFinderLiveHomePageSectionViewModelDelegate> _delegate;
    WCFinderLiveStreamContainerModel *_containerModel;
    WCFinderLiveHomePageReportSession *_reportSession;
    unsigned long long _state;
    unsigned long long _sectionIndex;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(nonatomic) _Bool skipAsyncLoadLiveInfo; // @synthesize skipAsyncLoadLiveInfo=_skipAsyncLoadLiveInfo;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) WCFinderLiveHomePageReportSession *reportSession; // @synthesize reportSession=_reportSession;
@property(retain, nonatomic) WCFinderLiveStreamContainerModel *containerModel; // @synthesize containerModel=_containerModel;
@property(nonatomic) __weak id <WCFinderLiveHomePageSectionViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reportSectionMarkReadDisAppear;
- (void)reportLiveStreamFeedExposeEndIndexPath:(id)arg1;
- (void)reportLiveStreamFeedExposeIndexPath:(id)arg1;
- (void)onContainerSectionDisappear;
- (void)onContainerSectionAppear;
- (void)onHomePageContainerSectionDeleteTid:(id)arg1;
- (void)onHomePageResetState;
- (void)onHomePageContainerSectionFetchNextPageData:(id)arg1;
- (void)onHomePageContainerSectionNoMoreData;
- (void)onHomePageContainerSectionFetchFailWithErroCode:(long long)arg1;
- (void)onHomePageContainerSectionRefreshAllData:(id)arg1;
@property(readonly, nonatomic) NSArray *collectionDataModels;
- (unsigned long long)indexOfTid:(id)arg1;
- (void)removeDataWithTid:(id)arg1;
- (_Bool)isSectionSupportAutoPlay;
- (_Bool)isSectionCustomHeaderView;
- (id)containerReadIds;
- (id)initWithContainerModel:(id)arg1;

@end

