//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMFinderLiveConnectMicUser, MMFinderLiveGlobalRankSignView, MMFinderLiveTaskId, MMUIButton, UILabel, WCFinderHeadImageView;
@protocol MMFinderLiveConnectMicBaseUserInfoViewDelegate, WCFinderHeadImageViewDelegate;

@interface MMFinderLiveConnectMicBaseUserInfoView : UIView
{
    _Bool _configureLiveDirtyHandle;
    id <MMFinderLiveConnectMicBaseUserInfoViewDelegate> _actionDelegate;
    id <WCFinderHeadImageViewDelegate> _headImageViewDelegate;
    MMFinderLiveTaskId *_finderLiveTaskId;
    MMFinderLiveConnectMicUser *_connectMicUserInfo;
    WCFinderHeadImageView *_headImageView;
    UILabel *_nicknameLabel;
    MMUIButton *_micMutedButton;
    MMFinderLiveGlobalRankSignView *_globalRankSignView;
    struct CGRect _displayNormalizedFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveGlobalRankSignView *globalRankSignView; // @synthesize globalRankSignView=_globalRankSignView;
@property(retain, nonatomic) MMUIButton *micMutedButton; // @synthesize micMutedButton=_micMutedButton;
@property(nonatomic) _Bool configureLiveDirtyHandle; // @synthesize configureLiveDirtyHandle=_configureLiveDirtyHandle;
@property(nonatomic) struct CGRect displayNormalizedFrame; // @synthesize displayNormalizedFrame=_displayNormalizedFrame;
@property(retain, nonatomic) UILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) MMFinderLiveConnectMicUser *connectMicUserInfo; // @synthesize connectMicUserInfo=_connectMicUserInfo;
@property(retain, nonatomic) MMFinderLiveTaskId *finderLiveTaskId; // @synthesize finderLiveTaskId=_finderLiveTaskId;
@property(nonatomic) __weak id <WCFinderHeadImageViewDelegate> headImageViewDelegate; // @synthesize headImageViewDelegate=_headImageViewDelegate;
@property(nonatomic) __weak id <MMFinderLiveConnectMicBaseUserInfoViewDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (_Bool)updateConnectMicUserGlobalBadgeLevel:(unsigned int)arg1;
- (unsigned int)getGlobalRank;
- (_Bool)needDisplayGlobalRankSignView;
- (void)finderNicknameLabelDidClick;
- (void)configGlobalRankSignView;
- (void)updateMicMutedButtonFrame:(struct CGRect)arg1;
- (void)updateMicMutedButtonAppearance;
- (void)configMicMutedButton;
- (void)onClickMicMutedButton;
- (void)createMicMutedButton;
- (void)configNicknameLabel;
- (void)createNickNameLabel;
- (void)createHeadImageView;
- (void)configHeadImageView;
- (void)updateHeadImageViewSize;
- (void)layoutUI;
- (void)clearAndHide;
- (void)show;
- (double)getHeadImageViewNormalizedCornerRadius;
@property(readonly, nonatomic) unsigned long long viewType;

@end

