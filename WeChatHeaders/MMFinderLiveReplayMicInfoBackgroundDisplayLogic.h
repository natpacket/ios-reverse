//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMFinderLiveConnectMicUsersInfo, MMLiveTaskId, NSMutableDictionary, UIView;

@interface MMFinderLiveReplayMicInfoBackgroundDisplayLogic : NSObject
{
    MMLiveTaskId *_taskId;
    UIView *_micUserContainerViewBelow;
    UIView *_micUserContainerViewAbove;
    MMFinderLiveConnectMicUsersInfo *_allMicUsersInfo;
    NSMutableDictionary *_userViews;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *userViews; // @synthesize userViews=_userViews;
@property(retain, nonatomic) MMFinderLiveConnectMicUsersInfo *allMicUsersInfo; // @synthesize allMicUsersInfo=_allMicUsersInfo;
@property(retain, nonatomic) UIView *micUserContainerViewAbove; // @synthesize micUserContainerViewAbove=_micUserContainerViewAbove;
@property(retain, nonatomic) UIView *micUserContainerViewBelow; // @synthesize micUserContainerViewBelow=_micUserContainerViewBelow;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (_Bool)insertAudioMicUserViewToPIPRenderLayer:(id)arg1;
- (id)replayTask;
- (void)updateSubviewsWithMicUserInfo:(id)arg1;
- (void)bringBackgroundOfUserInPipToFront:(id)arg1;
- (void)layoutComponents;
- (id)getAudienceAudioMicUserViewList;
- (void)notifyPIPHandleLogicConfig;
- (void)clearAndHide;
- (void)showWithConnectMicUsersInfo:(id)arg1;
- (id)initWithMicUserContainerViewBelow:(id)arg1 micUserContainerViewAbove:(id)arg2;

@end

