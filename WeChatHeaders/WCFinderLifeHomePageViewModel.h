//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCFinderLifeHomeFeedFlowViewDatas-Protocol.h"

@class CLLocation, NSData, NSMutableArray, NSMutableSet, NSString, WCFinderHomeLifeFilter;
@protocol WCFinderLifeHomePageViewModelDelegate;

@interface WCFinderLifeHomePageViewModel : NSObject <WCFinderLifeHomeFeedFlowViewDatas>
{
    _Bool _continueFlag;
    id <WCFinderLifeHomePageViewModelDelegate> _delegate;
    WCFinderHomeLifeFilter *_filter;
    unsigned long long _refreshTime;
    unsigned long long _commentScene;
    NSData *_lastBuff;
    NSMutableArray *_sections;
    NSMutableSet *_tidSet;
    unsigned long long _loadingState;
    CLLocation *_location;
    NSString *_innerReportTagInfo;
}

+ (void)requestFirstPageCommentScene:(unsigned long long)arg1 location:(id)arg2 complete:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *innerReportTagInfo; // @synthesize innerReportTagInfo=_innerReportTagInfo;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(nonatomic) unsigned long long loadingState; // @synthesize loadingState=_loadingState;
@property(retain, nonatomic) NSMutableSet *tidSet; // @synthesize tidSet=_tidSet;
@property(retain, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(retain, nonatomic) NSData *lastBuff; // @synthesize lastBuff=_lastBuff;
@property(nonatomic) unsigned long long commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) unsigned long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(retain, nonatomic) WCFinderHomeLifeFilter *filter; // @synthesize filter=_filter;
@property(nonatomic) __weak id <WCFinderLifeHomePageViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFinderDataItemDelete:(id)arg1;
- (void)onPostDataItemSuccess:(id)arg1;
- (void)onPostDataItemFailed:(id)arg1;
- (void)onPostDataItem:(id)arg1;
- (id)formatSubTags:(id)arg1;
- (vector_c9a4c9eb)groupDataItem:(id)arg1 byLayout:(id)arg2;
- (void)appendDataItems:(id)arg1 layout:(id)arg2;
- (void)fetchAsyncInfo:(id)arg1;
- (_Bool)deleteContentVM:(id)arg1;
- (void)requestNextPage:(CDUnknownBlockType)arg1;
- (void)requestNextPage;
- (void)requestFirstPage;
- (void)reset;
@property(retain, nonatomic) NSString *reportTagInfo;
- (id)dividerForSection:(long long)arg1;
- (id)contentVMAtSection:(long long)arg1 index:(long long)arg2;
- (long long)feedItemCountForSection:(long long)arg1;
- (long long)feedSectionCount;
- (id)initWithCommentScene:(unsigned long long)arg1 location:(id)arg2 filter:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

