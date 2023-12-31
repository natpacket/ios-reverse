//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WSTemplateBaseMgr.h"

#import "IExptServiceExt-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class MMLoadingView, WCTopicJumpInfo;

@interface WCTopicService : WSTemplateBaseMgr <IExptServiceExt, PBMessageObserverDelegate>
{
    _Bool _isAvaliableForTextFeaturesInChat;
    _Bool _isAvaliableForTextFeaturesInTimeline;
    _Bool _isAvaliableForShareConentSearch;
    unsigned int _topicMaxCharacterCount;
    WCTopicJumpInfo *_curTopicJumpInfo;
    MMLoadingView *_loadingView;
    double _lastReqTime;
}

- (void).cxx_destruct;
@property(nonatomic) double lastReqTime; // @synthesize lastReqTime=_lastReqTime;
@property(nonatomic) __weak MMLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) WCTopicJumpInfo *curTopicJumpInfo; // @synthesize curTopicJumpInfo=_curTopicJumpInfo;
@property(nonatomic) unsigned int topicMaxCharacterCount; // @synthesize topicMaxCharacterCount=_topicMaxCharacterCount;
@property(nonatomic) _Bool isAvaliableForShareConentSearch; // @synthesize isAvaliableForShareConentSearch=_isAvaliableForShareConentSearch;
@property(nonatomic) _Bool isAvaliableForTextFeaturesInTimeline; // @synthesize isAvaliableForTextFeaturesInTimeline=_isAvaliableForTextFeaturesInTimeline;
@property(nonatomic) _Bool isAvaliableForTextFeaturesInChat; // @synthesize isAvaliableForTextFeaturesInChat=_isAvaliableForTextFeaturesInChat;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)openBizByTopicJumpInfo:(id)arg1 ViewController:(id)arg2 addContactScene:(int)arg3;
- (void)openFinderProfileByTopicJumpInfo:(id)arg1 ViewController:(id)arg2 reportScene:(unsigned long long)arg3 enterType:(unsigned int)arg4 params:(id)arg5;
- (void)openH5ByTopicJumpInfo:(id)arg1 ViewController:(id)arg2;
- (void)openWaAppByTopicJumpInfo:(id)arg1 OpenParam:(id)arg2;
- (id)makeOpenParamByTopicJumpInfo:(id)arg1;
- (void)onTopicJumpInfoTimeout;
- (void)cancelReqTopicJumpInfoByObject:(id)arg1;
- (void)stopReqTopicJumpInfo;
- (void)reqTopicJumpInfo:(id)arg1 Object:(id)arg2 Handler:(CDUnknownBlockType)arg3;
- (void)openTopicWithParams:(id)arg1 object:(id)arg2 fromViewController:(id)arg3;
- (void)hideTopicJumpLoading:(_Bool)arg1;
- (void)showTopicJumpLoading;
- (void)onExptItemListChange;
- (_Bool)isAvaliableForTopicSearchTextFeaturesInTimeline;
- (_Bool)isAvaliableForTopicSearchInputShare;
- (_Bool)isAvaliableForTopicSearchTextFeatures;
- (void)dealloc;
- (_Bool)updateCacheTextFeatureEnableInTimeline:(_Bool)arg1;
- (_Bool)updateCacheTextFeatureEnableInChat:(_Bool)arg1;
- (unsigned long long)localJSBizType;
- (unsigned int)packageResouceType;
- (id)templateResouceRootPath;
- (id)appDefaultTemplateResoucePath;
- (void)onServiceInit;

@end

