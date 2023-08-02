//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FinderMusicInfo, NSString, RecommendedMusicInfo, WCFinderDataItem, WCFinderMusicInfoModel, WCFinderPostSessionModel;

@protocol WCFinderPostMgrDelegate <NSObject>

@optional
- (void)onPostActionFinish;
- (WCFinderDataItem *)getRefDataItemForExtStatsReport;
- (void)onPostMgrPresentToPostViewControllerComplete;
- (void)onPostMgrImagePickerClickCancel;
- (WCFinderMusicInfoModel *)postMgrGetMusicInfo;
- (_Bool)isFrontCamera;
- (void)postMgrSaveDraft;
- (void)postMgrStartUpload;
- (void)mergeBusinessPostReoprtInfoBySession:(WCFinderPostSessionModel *)arg1;
- (NSString *)postMgrPatMusicGetGroupId;
- (_Bool)postMgrForbiddenFinderLongVideoEntry;
- (FinderMusicInfo *)postMgrGetFinderMusicInfo;
- (RecommendedMusicInfo *)postMgrGetRecommendedMusicInfo;
- (void)postMgrClickActionSheet;
@end

