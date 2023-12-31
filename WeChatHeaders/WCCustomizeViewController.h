//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMImageLoaderObserver-Protocol.h"
#import "MMImagePickerManagerDelegate-Protocol.h"
#import "MMSightCameraViewControllerDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCFinderFeedPickerPreviewViewControllerDelegate-Protocol.h"
#import "WCFinderFeedPickerViewControllerDelegate-Protocol.h"

@class MMTableView, NSMutableArray, NSString, WCCoverPostReporter, WCFinderDataItem, WCTableViewManager;

@interface WCCustomizeViewController : MMUIViewController <MMSightCameraViewControllerDelegate, WCFinderFeedPickerViewControllerDelegate, MMImageLoaderObserver, WCFinderFeedPickerPreviewViewControllerDelegate, WCActionSheetDelegate, MMImagePickerManagerDelegate>
{
    _Bool m_isUploading;
    WCTableViewManager *m_tableViewMgr;
    NSMutableArray *_m_rowsData;
    MMTableView *_m_tableView;
    NSString *_m_username;
    WCFinderDataItem *_finderFeed;
    WCCoverPostReporter *_coverPostReporter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCCoverPostReporter *coverPostReporter; // @synthesize coverPostReporter=_coverPostReporter;
@property(retain, nonatomic) WCFinderDataItem *finderFeed; // @synthesize finderFeed=_finderFeed;
@property(retain, nonatomic) NSString *m_username; // @synthesize m_username=_m_username;
@property(retain, nonatomic) MMTableView *m_tableView; // @synthesize m_tableView=_m_tableView;
@property(retain, nonatomic) NSMutableArray *m_rowsData; // @synthesize m_rowsData=_m_rowsData;
- (long long)coverContentSourceFromFinderTabType:(unsigned long long)arg1;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)onFinishedSelectFinderFeed:(id)arg1;
- (void)finderFeedPickerPreviewViewController:(id)arg1 didClickDoneWithDataItem:(id)arg2;
- (void)finderFeedPickerViewControllerDidClickCancel:(id)arg1;
- (void)onClickSelectFromFinder;
- (void)showImagePicker:(long long)arg1;
- (void)onClickProfessionalCraft;
- (void)onClickTakePhoto;
- (void)onClickSelectFromAlbum;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)handleDidFinishPickingSightWithInfo:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (id)getNavigationController;
- (id)getViewController;
- (void)onFinishedSelectImage:(id)arg1;
- (void)popToMessageSessionView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)reloadRowData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

