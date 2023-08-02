//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMLiveOnlineUserLogic.h"

#import "WCFinderLiveExt-Protocol.h"

@class MMFinderLiveTask, MMFinderLiveTaskId, NSMutableDictionary, NSString;
@protocol MMFinderLiveOnlineUserLogicDelegate;

@interface MMFinderLiveOnlineUserLogic : MMLiveOnlineUserLogic <WCFinderLiveExt>
{
    id <MMFinderLiveOnlineUserLogicDelegate> logicDelegate;
    NSMutableDictionary *_userCommentDisableDict;
    NSString *_finderUserName;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *finderUserName; // @synthesize finderUserName=_finderUserName;
@property(retain, nonatomic) NSMutableDictionary *userCommentDisableDict; // @synthesize userCommentDisableDict=_userCommentDisableDict;
@property(nonatomic) __weak id <MMFinderLiveOnlineUserLogicDelegate> logicDelegate; // @synthesize logicDelegate;
- (void)onFinderGetLiveOnlineMember:(id)arg1 taskId:(id)arg2 onlineMemberResult:(id)arg3;
@property(readonly, nonatomic) MMFinderLiveTask *liveTask;
@property(readonly, nonatomic) MMFinderLiveTaskId *finderTaskId;
- (void)fetchGloryList;
- (_Bool)fetchOnlineUserList;
- (void)unRegisterExtension;
- (void)registerExtension;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

