//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FinderTopicBgmInfo, NSData, NSMutableArray, NSString, WCFinderEventTabInfo, WCFinderTopicInfo;
@protocol WCFinderTopicPageViewModelDelegate;

@interface WCFinderTopicPageViewModel : NSObject
{
    _Bool _continueFlag;
    id <WCFinderTopicPageViewModelDelegate> _delegate;
    unsigned long long _refreshTime;
    NSString *_topicTitle;
    WCFinderTopicInfo *_topicInfo;
    FinderTopicBgmInfo *_bgmInfo;
    WCFinderEventTabInfo *_tabInfo;
    unsigned long long _state;
    unsigned long long _commentScene;
    unsigned long long _topicType;
    long long _tabType;
    long long _fromType;
    NSString *_encryptedTopicId;
    NSString *_refObjectId;
    NSString *_latestRequestID;
    NSData *_lastBuffer;
    NSMutableArray *_contentVMArray;
    NSData *_byPassInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *byPassInfo; // @synthesize byPassInfo=_byPassInfo;
@property(retain, nonatomic) NSMutableArray *contentVMArray; // @synthesize contentVMArray=_contentVMArray;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(copy, nonatomic) NSString *latestRequestID; // @synthesize latestRequestID=_latestRequestID;
@property(copy, nonatomic) NSString *refObjectId; // @synthesize refObjectId=_refObjectId;
@property(copy, nonatomic) NSString *encryptedTopicId; // @synthesize encryptedTopicId=_encryptedTopicId;
@property(nonatomic) long long fromType; // @synthesize fromType=_fromType;
@property(nonatomic) long long tabType; // @synthesize tabType=_tabType;
@property(nonatomic) unsigned long long topicType; // @synthesize topicType=_topicType;
@property(nonatomic) unsigned long long commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) WCFinderEventTabInfo *tabInfo; // @synthesize tabInfo=_tabInfo;
@property(retain, nonatomic) FinderTopicBgmInfo *bgmInfo; // @synthesize bgmInfo=_bgmInfo;
@property(retain, nonatomic) WCFinderTopicInfo *topicInfo; // @synthesize topicInfo=_topicInfo;
@property(copy, nonatomic) NSString *topicTitle; // @synthesize topicTitle=_topicTitle;
@property(nonatomic) unsigned long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(nonatomic) __weak id <WCFinderTopicPageViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)getReportMusicType;
- (id)genTopicPageTagTitle;
- (id)streamReportPageTag;
- (void)updateState;
- (void)requestDataWithPullType:(unsigned long long)arg1;
- (id)generateTopicListDetailViewModel;
- (void)requestNextPageData;
- (void)requestFirstPageData;
- (id)initWithTopicParams:(id)arg1 tabInfo:(id)arg2 commentScene:(unsigned long long)arg3;

@end

