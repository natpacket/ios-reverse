//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class MemoryMappedKV;

@interface TingSearchReporter : MMObject
{
    MemoryMappedKV *_searchReportSuggWordKv;
}

+ (id)buildSearchActionExtraInfo:(unsigned int)arg1 shouldBuildSearchStep:(_Bool)arg2 pageScene:(unsigned long long)arg3 queryWord:(id)arg4;
+ (id)buildSearchActionExtraInfo:(unsigned int)arg1 shouldBuildSearchStep:(_Bool)arg2 pageScene:(unsigned long long)arg3;
+ (void)fillDictWithSearchScene:(unsigned int)arg1 shouldBuildSearchStep:(_Bool)arg2 pageScene:(unsigned long long)arg3 dict:(id)arg4;
+ (void)fillSearchReportContext:(id)arg1;
+ (id)buildSearchReportContext;
+ (void)onClickWithCategory:(id)arg1 index:(int)arg2 pageScene:(unsigned long long)arg3 searchScene:(unsigned int)arg4;
+ (void)onClickWithItem:(id)arg1 index:(int)arg2 pageScene:(unsigned long long)arg3 searchScene:(unsigned int)arg4;
+ (void)onExposedWithCategory:(id)arg1 index:(int)arg2 pageScene:(unsigned long long)arg3 searchScene:(unsigned int)arg4;
+ (void)onExposedWithItem:(id)arg1 index:(int)arg2 pageScene:(unsigned long long)arg3 searchScene:(unsigned int)arg4;
+ (void)reportSearchPageDisappear:(unsigned long long)arg1 searchScene:(unsigned int)arg2;
+ (void)reportSearchPageAppear:(unsigned long long)arg1 searchScene:(unsigned int)arg2;
+ (void)reportClickSearchEntry:(unsigned int)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MemoryMappedKV *searchReportSuggWordKv; // @synthesize searchReportSuggWordKv=_searchReportSuggWordKv;
- (void)onClickWithSuggestWord:(id)arg1 index:(int)arg2 searchScene:(unsigned int)arg3;
- (void)onExposedWithSuggestWord:(id)arg1 index:(int)arg2 searchScene:(unsigned int)arg3;
- (id)init;

@end

