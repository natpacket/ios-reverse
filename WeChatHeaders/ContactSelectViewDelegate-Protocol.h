//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewControllerDelegate-Protocol.h"

@class CContact, MMUIViewController, NSArray, NSDictionary, NSIndexPath, UITableView, UITableViewCell;

@protocol ContactSelectViewDelegate <MMUIViewControllerDelegate>
- (void)onSelectContact:(CContact *)arg1;

@optional
- (void)onExistContactDidSelected:(CContact *)arg1;
- (_Bool)hideFavourContactCandidate;
- (void)onNotifyPanelViewResignFirstReponder;
- (MMUIViewController *)getSafeSearchViewController;
- (void)onNotifyWillDoAsyncRecommend:(NSArray *)arg1;
- (_Bool)isContactSelectPanelViewSearching;
- (NSArray *)onGetSortedMultiSelectUsrs;
- (void)onContactsDataNeedChange;
- (void)actionMenu:(long long)arg1 tableView:(UITableView *)arg2 indexPath:(NSIndexPath *)arg3 contact:(CContact *)arg4;
- (void)onViewContact:(CContact *)arg1;
- (void)makeTopCell:(UITableViewCell *)arg1;
- (void)onSelectTopCell;
- (void)onSelectRecommendGroup:(CContact *)arg1;
- (void)onSelectWowBlackListBlock;
- (void)onSelectWowBlackListHide;
- (void)onSelectSearchSnsContact:(CContact *)arg1;
- (void)onSelectOpenIMGroup;
- (void)onSelectBrandContact;
- (void)onSelectRadarCreateRoom;
- (void)onSelectContactTag;
- (void)onSelectHistoryGroup;
- (void)onContactUpdatePickDataSection:(long long)arg1 added:(_Bool)arg2 deleted:(_Bool)arg3 sections:(NSArray *)arg4 sectionTitles:(NSDictionary *)arg5 sectionResults:(NSDictionary *)arg6;
- (void)onContactSelectSearchSections:(NSArray *)arg1 sectionTitles:(NSDictionary *)arg2 sectionResults:(NSDictionary *)arg3;
- (_Bool)onFilterContactCandidate:(CContact *)arg1;
- (_Bool)onShouldSelectContact:(CContact *)arg1;
@end

