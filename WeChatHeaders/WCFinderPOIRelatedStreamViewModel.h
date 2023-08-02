//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FinderPoiStreamNearbyInfo, FinderPoiStreamResponse_PoiPrepare, NSData, NSMutableArray, NSMutableDictionary, NSString, SnsPoiDetail, WCFinderContact, WCFinderPOIParamsModel;
@protocol WCFinderPOIRelatedStreamViewModelDelegate;

@interface WCFinderPOIRelatedStreamViewModel : NSObject
{
    _Bool _stopFetchNextPage;
    _Bool _hasFetchEnterData;
    _Bool _isDataEmpty;
    _Bool _onlyShowPoiName;
    _Bool _nearbyFlag;
    unsigned int _totalFeedsCount;
    id <WCFinderPOIRelatedStreamViewModelDelegate> _delegate;
    WCFinderPOIParamsModel *_poiParamsModel;
    NSMutableArray *_tabInfoArray;
    NSData *_lastBuffer;
    unsigned long long _preFetchNextPageIndex;
    unsigned long long _refreshTime;
    FinderPoiStreamResponse_PoiPrepare *_poiPrepare;
    long long _friendLikeCount;
    unsigned long long _defaultIndex;
    long long _addressSubType;
    FinderPoiStreamNearbyInfo *_nearbyInfo;
    NSMutableDictionary *_dataArrayDict;
    SnsPoiDetail *_poiDetail;
    WCFinderContact *_bindContact;
    NSString *_noticeWording;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *noticeWording; // @synthesize noticeWording=_noticeWording;
@property(retain, nonatomic) WCFinderContact *bindContact; // @synthesize bindContact=_bindContact;
@property(retain, nonatomic) SnsPoiDetail *poiDetail; // @synthesize poiDetail=_poiDetail;
@property(retain, nonatomic) NSMutableDictionary *dataArrayDict; // @synthesize dataArrayDict=_dataArrayDict;
@property(retain, nonatomic) FinderPoiStreamNearbyInfo *nearbyInfo; // @synthesize nearbyInfo=_nearbyInfo;
@property(nonatomic) _Bool nearbyFlag; // @synthesize nearbyFlag=_nearbyFlag;
@property(nonatomic) long long addressSubType; // @synthesize addressSubType=_addressSubType;
@property(nonatomic) unsigned long long defaultIndex; // @synthesize defaultIndex=_defaultIndex;
@property(nonatomic) long long friendLikeCount; // @synthesize friendLikeCount=_friendLikeCount;
@property(retain, nonatomic) FinderPoiStreamResponse_PoiPrepare *poiPrepare; // @synthesize poiPrepare=_poiPrepare;
@property(nonatomic) unsigned int totalFeedsCount; // @synthesize totalFeedsCount=_totalFeedsCount;
@property(nonatomic) _Bool onlyShowPoiName; // @synthesize onlyShowPoiName=_onlyShowPoiName;
@property(nonatomic) unsigned long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(nonatomic) _Bool isDataEmpty; // @synthesize isDataEmpty=_isDataEmpty;
@property(nonatomic) unsigned long long preFetchNextPageIndex; // @synthesize preFetchNextPageIndex=_preFetchNextPageIndex;
@property(nonatomic) _Bool hasFetchEnterData; // @synthesize hasFetchEnterData=_hasFetchEnterData;
@property(nonatomic) _Bool stopFetchNextPage; // @synthesize stopFetchNextPage=_stopFetchNextPage;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) NSMutableArray *tabInfoArray; // @synthesize tabInfoArray=_tabInfoArray;
@property(retain, nonatomic) WCFinderPOIParamsModel *poiParamsModel; // @synthesize poiParamsModel=_poiParamsModel;
@property(nonatomic) __weak id <WCFinderPOIRelatedStreamViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (id)poiIDReport;
- (id)finderUsernameReport;
- (id)poiInfoFor21875;
- (id)poiDetailReport;
- (id)shareItemWithDataItem:(id)arg1;
- (id)getCurBindContact;
- (id)getNoticeWording;
- (id)getChatName;
- (id)getPoiInfo;
- (id)poiName;
- (_Bool)isSnSPoiDetailVaild;
- (id)getHeaderSnsPoiDetail;
- (unsigned long long)indexOfTabId:(long long)arg1;
- (void)requestPoiTabList;
- (id)enterReportID;
- (id)dataArrayAtIndex:(unsigned long long)arg1;
- (id)tabInfoAtIndex:(unsigned long long)arg1;
- (id)initWithPOIParamsModel:(id)arg1;

@end
