//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "BraceletSportRecordDelegate-Protocol.h"
#import "ForwardMessageLogicDelegate-Protocol.h"
#import "IDeviceRankProfileMgrExt-Protocol.h"
#import "IDeviceRankSnsMgrExt-Protocol.h"
#import "MMImagePickerManagerDelegate-Protocol.h"
#import "MMSightCameraViewControllerDelegate-Protocol.h"
#import "MMWebImageViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCCommitViewResultDelegate-Protocol.h"

@class BraceletRankUtils, BraceletSportView, CAGradientLayer, DeviceRankDetailResonse, ForwardMessageLogicController, MMHeadImageView, MMTableView, MMUIImageView, MMUILabel, MMWebImageView, NSArray, NSMutableArray, NSString, NSURL, UIButton, UIImage, UIImageView, UILabel, UIScrollView, UIView;
@protocol BraceletRankProfileViewControllerDelegate;

@interface BraceletRankProfileViewController : MMUIViewController <MMSightCameraViewControllerDelegate, WCCommitViewResultDelegate, BraceletSportRecordDelegate, MMImagePickerManagerDelegate, IDeviceRankProfileMgrExt, WCActionSheetDelegate, MMWebImageViewDelegate, UITableViewDataSource, UITableViewDelegate, IDeviceRankSnsMgrExt, ForwardMessageLogicDelegate>
{
    NSString *nsUserName;
    NSString *nsBrandUserName;
    NSArray *arrAffectedUser;
    DeviceRankDetailResonse *_oDataSource;
    NSURL *_coverUrl;
    NSMutableArray *_sectionDatas;
    NSMutableArray *_stepDatas;
    NSString *_stepCacheFilePath;
    int _cacheDistance;
    MMTableView *_tableView;
    MMWebImageView *_coverWebImageView;
    UIImageView *_cameraImageView;
    MMUILabel *_tipLablel;
    UILabel *_headTipLabel;
    UILabel *_nickNameLabel;
    MMHeadImageView *_headImageView;
    UIView *_affectTipView;
    UIScrollView *_affectedUserListView;
    UIView *_tableHeaderView;
    UIView *_tableFooterView;
    UIButton *_followBtn;
    MMUIImageView *_reverseImageView;
    UIImageView *_blurView;
    UIImage *_snapShotImg;
    UIImage *_shareBGImage;
    _Bool _bCoverChanged;
    _Bool _bMySelf;
    _Bool _isBluring;
    _Bool _bDidBePushed;
    _Bool _bIsNotifySetCover;
    _Bool _bIsMakeLike;
    ForwardMessageLogicController *_forwardMsgLogic;
    BraceletRankUtils *_braceletRankUtils;
    BraceletSportView *_sportView;
    NSMutableArray *_likeMeUserList;
    CAGradientLayer *_gradientLayer;
    id <BraceletRankProfileViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <BraceletRankProfileViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *arrAffectedUser; // @synthesize arrAffectedUser;
@property(retain, nonatomic) NSString *nsBrandUserName; // @synthesize nsBrandUserName;
@property(retain, nonatomic) NSString *nsUserName; // @synthesize nsUserName;
- (void)onClickLikeButton:(id)arg1;
- (void)onClickAppWithFinderUsername:(id)arg1 records:(id)arg2;
- (void)onClickAppWithWAContact:(id)arg1;
- (void)onClickHistoryButton;
- (void)onLoadImageOK:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)onLikeFriendRank:(id)arg1 optype:(unsigned int)arg2 err:(int)arg3;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)shareToTimeline;
- (void)shareToFriend;
- (void)dealAffectUserViewState:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)showImagePicker:(long long)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (void)onHandleImage:(id)arg1;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)onReport;
- (void)onNotRank;
- (void)onDelFollow;
- (void)onAddFollow;
- (void)onAffectTipSingleTap:(id)arg1;
- (void)clickAffectedImage:(id)arg1;
- (void)onSingleTap;
- (void)showNotRankActionSheet;
- (void)onRightNavBtnClickedInProfile;
- (void)onRightNavBtnClickedInSelfProfile;
- (void)launchDonateStepWAApp;
- (void)openFocusList;
- (void)onClickCellButton:(id)arg1;
- (void)makeButtonCell:(id)arg1 row:(unsigned long long)arg2;
- (void)makeOperateCell:(id)arg1 index:(long long)arg2;
- (void)makeStepsCell:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onDelFollowWithUserName:(id)arg1 error:(int)arg2;
- (void)onAddFollowWithFollowItems:(id)arg1 error:(int)arg2;
- (void)onGotUserRankDetail:(id)arg1 rankDetailResp:(id)arg2 err:(int)arg3;
- (void)updateReverseImage:(id)arg1;
- (void)updateInfoViewSnapshot;
- (_Bool)shouldShowRightBarItem;
- (id)getNotRankTitle;
- (void)updateRightNavBarItem;
- (void)updateTableFooterView;
- (id)getAffectUserListView;
- (id)getAffectTipView;
- (void)updateTableHeaderView;
- (void)slashCameraImage:(int)arg1;
- (void)notifyEmptyCoverIfNeed;
- (void)updateCoverImageView;
- (void)onClickHeadImage;
- (void)updateHeadImageView;
- (void)initTableFooterView;
- (id)braceletRankUtils;
- (void)initView;
- (void)reloadRowData;
- (void)reloadData;
- (void)initData;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithUserName:(id)arg1 withBrandUserName:(id)arg2 AffectedUserList:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

