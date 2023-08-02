//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FTSBaseSectionController.h"

#import "IFTSFavMgrExt-Protocol.h"

@class NSArray, NSString;

@interface FTSFavSectionController : FTSBaseSectionController <IFTSFavMgrExt>
{
    NSArray *_favItems;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *favItems; // @synthesize favItems=_favItems;
- (void)onFTSDetailPageFavResultChanged;
- (void)cancelSearch;
- (void)onLoadMore;
- (_Bool)hasMoreData;
- (_Bool)hasSearchDone;
- (void)search:(id)arg1;
- (void)selectFavSearchItem:(id)arg1 index:(unsigned int)arg2;
- (id)countLimitConifg;
- (unsigned long long)sectionType;
- (id)noResultTipSuffix;
- (id)searchBarPlaceHolder;
- (id)sectionTitle;
- (double)heightForRowAtIndex:(long long)arg1;
- (void)didSelectDataRowAtIndex:(long long)arg1 indexPath:(id)arg2;
- (id)dataCellForItemAtIndex:(long long)arg1 indexPath:(id)arg2;
- (long long)numberOfSearchItems;
- (void)didUpdateWithModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
