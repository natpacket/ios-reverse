//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCFinderContactExt-Protocol.h"

@class NSData, NSMutableArray, NSString, WCFinderBaseCgi, WCFinderSearchItemReportQueue;
@protocol WCFinderSearchContactViewModelDelegate;

@interface WCFinderSearchContactViewModel : NSObject <WCFinderContactExt>
{
    _Bool _queryContinueFlag;
    _Bool _hasReportInputText;
    NSString *_searchSessionid;
    long long _scene;
    id <WCFinderSearchContactViewModelDelegate> _delegate;
    NSString *_latestQueryText;
    NSString *_latestRequestID;
    NSData *_lastBuffer;
    NSMutableArray *_allSearchInfoItems;
    WCFinderSearchItemReportQueue *_reportQueue;
    unsigned long long _searchSourceType;
    WCFinderBaseCgi *_cgi;
}

+ (id)initWithBuffer:(id)arg1 latestRequestID:(id)arg2 queryText:(id)arg3 queryContinueFlag:(_Bool)arg4 dataSources:(id)arg5 searchSessionid:(id)arg6 searchSourceType:(unsigned long long)arg7;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasReportInputText; // @synthesize hasReportInputText=_hasReportInputText;
@property(retain, nonatomic) WCFinderBaseCgi *cgi; // @synthesize cgi=_cgi;
@property(nonatomic) unsigned long long searchSourceType; // @synthesize searchSourceType=_searchSourceType;
@property(retain, nonatomic) WCFinderSearchItemReportQueue *reportQueue; // @synthesize reportQueue=_reportQueue;
@property(retain, nonatomic) NSMutableArray *allSearchInfoItems; // @synthesize allSearchInfoItems=_allSearchInfoItems;
@property(nonatomic) _Bool queryContinueFlag; // @synthesize queryContinueFlag=_queryContinueFlag;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(copy, nonatomic) NSString *latestRequestID; // @synthesize latestRequestID=_latestRequestID;
@property(copy, nonatomic) NSString *latestQueryText; // @synthesize latestQueryText=_latestQueryText;
@property(nonatomic) __weak id <WCFinderSearchContactViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *searchSessionid; // @synthesize searchSessionid=_searchSessionid;
- (void)onFinderContactFollowStatusUpdate:(id)arg1;
- (void)reportItemExposeInfo;
- (void)recordResultDisplay:(id)arg1;
- (void)reportSearchActionInfo:(id)arg1 isClickActionType:(_Bool)arg2;
- (void)reportHasInputSearchText;
- (_Bool)deleteSearchRecord:(id)arg1;
- (_Bool)deleteAllSearchRecord;
- (id)searchInfoAtIndexPath:(id)arg1;
- (unsigned long long)searchRowNumsWithSection:(unsigned long long)arg1;
- (unsigned long long)searchNumsOfSection;
- (void)resetSearchStatus;
- (_Bool)isNoMoreData;
- (id)latestQueryString;
- (void)onQueryNextPageContact;
- (void)queryContactWith:(id)arg1;
- (void)updateSearchSourceType:(unsigned long long)arg1;
- (_Bool)isRepetSearch:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

