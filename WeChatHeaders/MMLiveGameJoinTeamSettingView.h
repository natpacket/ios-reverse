//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMPageSheetBaseView.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MMFinderLiveTaskId, MMTableView, MMUIButton, MMUILabel, NSString, OrderedDictionary, UIView;
@protocol MMLiveGameJoinTeamSettingViewDelegate;

@interface MMLiveGameJoinTeamSettingView : MMPageSheetBaseView <UIGestureRecognizerDelegate, UITableViewDelegate, UITableViewDataSource>
{
    unsigned int _lastJoinTeamMode;
    unsigned int _curJoinTeamMode;
    unsigned int _curCoinValue;
    id <MMLiveGameJoinTeamSettingViewDelegate> _operationDelegate;
    MMFinderLiveTaskId *_taskId;
    UIView *_contentView;
    UIView *_topAreaView;
    MMUIButton *_leftButton;
    MMUILabel *_titleLabel;
    MMTableView *_joinTeamModeTableView;
    OrderedDictionary *_joinTeamQualifications;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int curCoinValue; // @synthesize curCoinValue=_curCoinValue;
@property(nonatomic) unsigned int curJoinTeamMode; // @synthesize curJoinTeamMode=_curJoinTeamMode;
@property(nonatomic) unsigned int lastJoinTeamMode; // @synthesize lastJoinTeamMode=_lastJoinTeamMode;
@property(retain, nonatomic) OrderedDictionary *joinTeamQualifications; // @synthesize joinTeamQualifications=_joinTeamQualifications;
@property(retain, nonatomic) MMTableView *joinTeamModeTableView; // @synthesize joinTeamModeTableView=_joinTeamModeTableView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(retain, nonatomic) UIView *topAreaView; // @synthesize topAreaView=_topAreaView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak id <MMLiveGameJoinTeamSettingViewDelegate> operationDelegate; // @synthesize operationDelegate=_operationDelegate;
- (void)onGetFinderLiveMessage:(id)arg1 taskId:(id)arg2 onlineContacts:(id)arg3 msgList:(id)arg4 finderLiveInfo:(id)arg5 onlineCount:(unsigned int)arg6 liveInfoEnable:(_Bool)arg7 liveClosed:(_Bool)arg8 liveExtFlag:(unsigned int)arg9 onlineViewCount:(unsigned int)arg10 nextRequestInterval:(unsigned int)arg11 currentLikeCount:(unsigned long long)arg12 liveGameData:(id)arg13 respContext:(id)arg14;
- (id)liveTask;
- (id)getCurrentLeftButton;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dismissWithAnimated:(_Bool)arg1;
- (void)showWithAnimated:(_Bool)arg1;
- (void)showChooseCoinView;
- (void)leftButtonAction;
- (void)setExtraCellLineHidden:(id)arg1;
- (double)contentViewHeight;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)initUI;
- (void)initDefaultData;
- (void)unRegisterExtension;
- (void)registerExtension;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1 curJoinTeamMode:(unsigned int)arg2 curCoinValue:(unsigned int)arg3;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

