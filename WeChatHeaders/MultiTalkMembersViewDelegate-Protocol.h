//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, WCVideoRender;

@protocol MultiTalkMembersViewDelegate <NSObject>
- (void)onBackgroundSelect:(_Bool)arg1;
- (void)onMultiTalkBottomOperatePanelFlipCameraButtonClick;
- (int)multiTalkMembersViewPanelLayoutType;
- (unsigned long long)multiTalkMembersViewRoomKey;
- (unsigned long long)multiTalkMembersViewRoomId;
- (void)onMultiTalkMembersViewDidLayoutCells:(id)arg1;
- (double)multiTalkMembersViewBottomOperationPanelDisplayHeight;
- (double)multiTalkMembersView:(id)arg1 bottomOperationPanelDisplayHeight:(int)arg2;
- (NSString *)onMultiTalkMembersViewMemberThatInviteMeBeforeTalking;
- (unsigned long long)onMultiTalkMembersViewMemberCountBeforeTalking;
- (NSString *)onMultiTalkMembersViewMemberBeforeTalkingAtIndex:(unsigned long long)arg1;
- (NSArray *)multiTalkMembersViewMembers;
- (id)onMultiTalkMembersViewGetVideoMember:(NSString *)arg1;
- (void)onMultiTalkMembersViewChangeOperationViewsAppearance:(_Bool)arg1;
- (_Bool)onMultiTalkMembersViewIsSharingScreenUser:(NSString *)arg1;
- (void)onMultiTalkMembersViewUpdateVideoDisplay:(NSArray *)arg1;
- (void)onMultiTalkMembersViewUpdateSelectedUserNames:(NSArray *)arg1 remainingVisableUserNames:(NSArray *)arg2;
- (void)onMultiTalkMembersViewChangedToNormalViewFromShareScreenView:(_Bool)arg1;
- (void)multiTalkMembersView:(id)arg1 onChangedToBigViewWithAnimation:(_Bool)arg2 isSharedScreenData:(_Bool)arg3;
- (void)onMultiTalkMembersViewClickdToBigViewWithAnimation:(_Bool)arg1 isSharedScreenData:(_Bool)arg2;
- (void)onMultiTalkMembersViewAnimateToOnePerson;
- (id)onMultiTalkMembersViewMemberAtIndex:(unsigned long long)arg1;
- (unsigned long long)onMultiTalkMembersViewTotalMemberCount;
- (WCVideoRender *)onMultiTalkMembersViewRequestRenderForUsername:(NSString *)arg1;
- (_Bool)onMultiTalkMembersViewIsVideoUserName:(NSString *)arg1;
@end
