//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "IMsgExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class NSArray, NSString, RedPointCtrlInfo;

@interface WCSettingRedPointMgr : MMUserService <IMsgExt, MMServiceProtocol>
{
    RedPointCtrlInfo *_ctrlInfo;
    NSArray *_validRedPointPathArray;
}

- (void).cxx_destruct;
- (_Bool)canPluginReceiveRedPoint:(id)arg1;
- (void)parseRedPointCtrlMsg:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)delCtrlInfo;
- (_Bool)trySetSeqWhenShowPluginProfileInfo:(id)arg1;
- (_Bool)trySetSeqWhenShowPluginView;
- (_Bool)trySetSeqWhenShowGeneralView;
- (_Bool)trySetSeqWhenShowRecentOptionView;
- (_Bool)trySetSeqWhenShowPrivacyView;
- (_Bool)trySetSeqWhenShowSettingView;
- (_Bool)trySetSeqWhenShowMoreView;
- (_Bool)shouldShowRedPointInPluginItem:(id)arg1;
- (_Bool)shouldShowRedPointInPluginCell;
- (_Bool)shouldShowRedPointInGeneralCell;
- (_Bool)shouldShowRedPointInRecentOption;
- (_Bool)shouldShowRedPointInPrivacy;
- (_Bool)shouldShowRedPointInSetting;
- (_Bool)shouldShowRedPointInMoreTab;
- (void)clearAllData;
- (void)loadData;
- (void)onServiceEnterForeground;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

