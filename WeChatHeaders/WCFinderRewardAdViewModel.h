//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSMutableSet, NSString, WCFinderBaseCgi, WCFinderDataItem, WCFinderPushFeedViewParams, WCFinderShareListReportModel;
@protocol WCFinderRewardAdViewModelDelegate;

@interface WCFinderRewardAdViewModel : NSObject
{
    _Bool _continueFlag;
    id <WCFinderRewardAdViewModelDelegate> _delegate;
    NSMutableArray *_dataItems;
    unsigned long long _refreshTime;
    WCFinderShareListReportModel *_reportModel;
    WCFinderPushFeedViewParams *_funcParams;
    NSMutableSet *_tidContainSet;
    NSString *_encrytedObjectidTid;
    WCFinderDataItem *_decipherdDataItem;
    NSData *_lastBuff;
    NSString *_lastTid;
    NSString *_lastNonceID;
    unsigned long long _commentScene;
    NSMutableSet *_showlikeInduceContentTidSet;
    unsigned long long _requestScene;
    WCFinderBaseCgi *_getRelatedCgi;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(retain, nonatomic) WCFinderBaseCgi *getRelatedCgi; // @synthesize getRelatedCgi=_getRelatedCgi;
@property(nonatomic) unsigned long long requestScene; // @synthesize requestScene=_requestScene;
@property(retain, nonatomic) NSMutableSet *showlikeInduceContentTidSet; // @synthesize showlikeInduceContentTidSet=_showlikeInduceContentTidSet;
@property(nonatomic) unsigned long long commentScene; // @synthesize commentScene=_commentScene;
@property(retain, nonatomic) NSString *lastNonceID; // @synthesize lastNonceID=_lastNonceID;
@property(retain, nonatomic) NSString *lastTid; // @synthesize lastTid=_lastTid;
@property(retain, nonatomic) NSData *lastBuff; // @synthesize lastBuff=_lastBuff;
@property(retain, nonatomic) WCFinderDataItem *decipherdDataItem; // @synthesize decipherdDataItem=_decipherdDataItem;
@property(copy, nonatomic) NSString *encrytedObjectidTid; // @synthesize encrytedObjectidTid=_encrytedObjectidTid;
@property(retain, nonatomic) NSMutableSet *tidContainSet; // @synthesize tidContainSet=_tidContainSet;
@property(retain, nonatomic) WCFinderPushFeedViewParams *funcParams; // @synthesize funcParams=_funcParams;
@property(retain, nonatomic) WCFinderShareListReportModel *reportModel; // @synthesize reportModel=_reportModel;
@property(nonatomic) unsigned long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(retain, nonatomic) NSMutableArray *dataItems; // @synthesize dataItems=_dataItems;
@property(nonatomic) __weak id <WCFinderRewardAdViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)triggerAdRelatedFeedbackWithActionType:(long long)arg1;
- (void)adReportClickActionType:(long long)arg1 adReportScene:(long long)arg2 curFeedTid:(id)arg3 ignoreFeedIdMatching:(_Bool)arg4 hitPoint:(struct CGPoint)arg5;
- (unsigned long long)feedViewControllerScene;
- (void)onFinderDataItemMediaURLIsExpired:(id)arg1;
- (void)realRemoveContentVMFromDataSource:(id)arg1;
- (id)contentMediaIndexPathWithTid:(id)arg1;
@property(readonly, nonatomic) _Bool isSourceValid;
- (id)contentVMWithTid:(id)arg1;
- (id)contentVMWithIndex:(unsigned long long)arg1;
- (long long)contentIndexOfTid:(id)arg1;
- (void)appendFinderContentVM:(id)arg1;
- (void)requestRelatedList;
- (_Bool)isEnableFetchNextpage;
- (void)requestData;
- (id)transformDataItems:(id)arg1;
- (void)addContentVM:(id)arg1;
- (id)initWithEncrytedObjectidTid:(id)arg1 nonceID:(id)arg2 dataScene:(id)arg3 commentScene:(unsigned long long)arg4 requestScene:(unsigned long long)arg5;

@end
