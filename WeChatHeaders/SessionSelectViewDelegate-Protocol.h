//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CContact, MMUIViewController, NSArray, NSDictionary, NSString, SessionSelectView;

@protocol SessionSelectViewDelegate <NSObject>
- (MMUIViewController *)getViewController;
- (void)OnSelectSession:(CContact *)arg1 SelectView:(SessionSelectView *)arg2;

@optional
- (NSString *)sectionTitleForCurrentSessionView;
- (void)contactInBizChatSessionViewDidSelect:(CContact *)arg1;
- (CContact *)contactInBizChatSessionViewAtRow:(unsigned long long)arg1;
- (long long)numberOfRowInBizChatSessionView;
- (NSString *)sectionTitleForBizChatSessionView;
- (void)onSelectChatroomMembers:(CContact *)arg1;
- (void)onSelectAtWWKFSession;
- (void)onSelectAtChatBoxSession;
- (_Bool)showChatRoomOnly;
- (void)onSelectChatRoomWithArrKeywords:(NSArray *)arg1;
- (void)selectViewWillBeginDragging:(SessionSelectView *)arg1;
- (void)onSessionSelectSearchSessions:(NSArray *)arg1 sectionTitles:(NSDictionary *)arg2 sectionResults:(NSDictionary *)arg3;
- (void)OnSelectForwardToEnterpriseChat:(SessionSelectView *)arg1 appType:(long long)arg2;
- (void)OnSelectFromContactSelectView:(SessionSelectView *)arg1;
- (void)OnSelectEnterpriseChat:(CContact *)arg1 SelectView:(SessionSelectView *)arg2;
- (void)OnSelectCreateRoomSelectView:(SessionSelectView *)arg1;
- (NSString *)onSessionSelectGetSearchString;
- (void)onSessionSelectSearch:(NSArray *)arg1;
- (_Bool)selectView:(SessionSelectView *)arg1 shouldSelectContact:(CContact *)arg2;
@end

