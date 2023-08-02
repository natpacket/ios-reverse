//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCFinderDataItemExt-Protocol.h"
#import "WCFinderPostDataItemExt-Protocol.h"
#import "WCFinderTopicDataKeyExt-Protocol.h"

@class FinderEventInfo, FinderTopicBgmInfo, NSData, NSMutableArray, NSString, WCFinderEventTabInfo, WCFinderTopicInfo;
@protocol WCFinderEventPageViewModelDelegate;

@interface WCFinderEventPageViewModel : NSObject <WCFinderPostDataItemExt, WCFinderTopicDataKeyExt, WCFinderDataItemExt>
{
    _Bool _continueFlag;
    id <WCFinderEventPageViewModelDelegate> _delegate;
    NSString *_topicTitle;
    WCFinderEventTabInfo *_eventTabInfo;
    unsigned long long _state;
    unsigned long long _commentScene;
    unsigned long long _topicType;
    long long _tabType;
    long long _fromType;
    unsigned long long _eventTopicId;
    NSString *_encryptedTopicId;
    NSString *_refObjectId;
    NSString *_latestRequestID;
    WCFinderTopicInfo *_topicInfo;
    FinderTopicBgmInfo *_bgmInfo;
    FinderEventInfo *_eventInfo;
    NSData *_lastBuffer;
    NSMutableArray *_contentVMArray;
    NSData *_byPassInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *byPassInfo; // @synthesize byPassInfo=_byPassInfo;
@property(retain, nonatomic) NSMutableArray *contentVMArray; // @synthesize contentVMArray=_contentVMArray;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) FinderEventInfo *eventInfo; // @synthesize eventInfo=_eventInfo;
@property(retain, nonatomic) FinderTopicBgmInfo *bgmInfo; // @synthesize bgmInfo=_bgmInfo;
@property(retain, nonatomic) WCFinderTopicInfo *topicInfo; // @synthesize topicInfo=_topicInfo;
@property(copy, nonatomic) NSString *latestRequestID; // @synthesize latestRequestID=_latestRequestID;
@property(copy, nonatomic) NSString *refObjectId; // @synthesize refObjectId=_refObjectId;
@property(copy, nonatomic) NSString *encryptedTopicId; // @synthesize encryptedTopicId=_encryptedTopicId;
@property(nonatomic) unsigned long long eventTopicId; // @synthesize eventTopicId=_eventTopicId;
@property(nonatomic) long long fromType; // @synthesize fromType=_fromType;
@property(nonatomic) long long tabType; // @synthesize tabType=_tabType;
@property(nonatomic) unsigned long long topicType; // @synthesize topicType=_topicType;
@property(nonatomic) unsigned long long commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) WCFinderEventTabInfo *eventTabInfo; // @synthesize eventTabInfo=_eventTabInfo;
@property(copy, nonatomic) NSString *topicTitle; // @synthesize topicTitle=_topicTitle;
@property(nonatomic) __weak id <WCFinderEventPageViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFinderDataItemDelete:(id)arg1;
- (void)finderTopicFeedOrderChanged:(unsigned long long)arg1;
- (void)finderFeedOfTopicBeDeleteWithTid:(id)arg1;
- (void)onFinderPostSessionUpLoadFailWithTid:(id)arg1 errorType:(long long)arg2;
- (void)onFinderPostSessionUpLoadSuccessful:(id)arg1;
- (void)fakeInsertPostEventDataItem:(id)arg1;
- (void)onFinderPostSessionStartUpload:(id)arg1;
- (void)removeFeedWithTid:(id)arg1;
- (void)updateState;
- (void)requestDataWithPullType:(unsigned long long)arg1;
- (unsigned long long)sortType;
- (id)eventIdStr;
- (id)generateTopicListDetailViewModel;
- (void)requestNextPageData;
- (void)requestFirstPageData;
- (void)dealloc;
- (id)initWithTopicParams:(id)arg1 eventTabInfo:(id)arg2 commentScene:(unsigned long long)arg3 byPassInfo:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
