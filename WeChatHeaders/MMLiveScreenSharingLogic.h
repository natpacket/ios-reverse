//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMLiveBizArticleListViewControllerDelegate-Protocol.h"
#import "MMLiveScreenSharingViewControllerDelegate-Protocol.h"
#import "MMLiveTaskMgrExt-Protocol.h"
#import "UIDocumentPickerDelegate-Protocol.h"
#import "WCFileBrowseDelegate-Protocol.h"

@class FinderBizUserInfo, MMFinderLiveTask, MMLiveScreenSharingViewController, MMLiveTask, MMLiveTaskId, NSDate, NSString;
@protocol MMLiveScreenSharingLogicOperationDelegate, MMLiveScreenSharingLogicUIDelegate;

@interface MMLiveScreenSharingLogic : NSObject <MMLiveTaskMgrExt, WCFileBrowseDelegate, UIDocumentPickerDelegate, MMLiveScreenSharingViewControllerDelegate, MMLiveBizArticleListViewControllerDelegate>
{
    id <MMLiveScreenSharingLogicOperationDelegate> _operationDelegate;
    id <MMLiveScreenSharingLogicUIDelegate> _UIDelegate;
    MMLiveTaskId *_taskId;
    MMLiveScreenSharingViewController *_presentationScreenSharingViewController;
    NSDate *_currentReportedStartTime;
    NSString *_currentReportedFileType;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *currentReportedFileType; // @synthesize currentReportedFileType=_currentReportedFileType;
@property(retain, nonatomic) NSDate *currentReportedStartTime; // @synthesize currentReportedStartTime=_currentReportedStartTime;
@property(retain, nonatomic) MMLiveScreenSharingViewController *presentationScreenSharingViewController; // @synthesize presentationScreenSharingViewController=_presentationScreenSharingViewController;
@property(readonly, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak id <MMLiveScreenSharingLogicUIDelegate> UIDelegate; // @synthesize UIDelegate=_UIDelegate;
@property(nonatomic) __weak id <MMLiveScreenSharingLogicOperationDelegate> operationDelegate; // @synthesize operationDelegate=_operationDelegate;
- (id)reportedFileTypeForBiz;
- (id)reportedFileTypeForAssetInfo:(id)arg1;
- (id)reportedFileTypeForImage;
- (id)reportedFileTypeForLogicController:(id)arg1;
- (void)reportFilePresentationDidStop;
- (void)reportFilePresentationDidStartWithFileType:(id)arg1;
- (void)onLiveTask:(id)arg1 isPureAudioModeChanged:(_Bool)arg2 showTip:(_Bool)arg3;
- (void)liveScreenSharingViewControllerDidClickStartButton:(id)arg1;
- (void)brandArticleListViewController:(id)arg1 searchViewController:(id)arg2 didSelectWithArticle:(id)arg3;
- (void)brandArticleListViewController:(id)arg1 didSelectWithArticle:(id)arg2;
- (void)documentPickerWasCancelled:(id)arg1;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (void)onFileBrowseOpeniCloud;
- (void)onFileBrowser:(id)arg1 assetPickerController:(id)arg2 clickAssetInfo:(id)arg3;
- (void)onFileBrowser:(id)arg1 clickFile:(id)arg2;
- (_Bool)isGivingFilePresentation;
- (void)hideAndStopFilePresentation;
- (void)showAndStartBizArticlePresentationFromPreparationViewController:(id)arg1;
- (void)showAndStartWebPresentationFromPreparationViewController:(id)arg1;
- (void)showAndStartAssetPresentationFromPreparationViewController:(id)arg1;
- (void)showAndStartImagePresentationFromPreparationViewController:(id)arg1;
- (void)showAndStartDocumentPresentationFromPreparationViewController:(id)arg1;
- (void)showAndStartFilePresentationFromPreparationViewController:(id)arg1;
- (void)openFilePreparationFromViewController:(id)arg1 withBizArticle:(id)arg2;
- (void)openFilePreparationFromViewController:(id)arg1 withWebURL:(id)arg2 title:(id)arg3;
- (void)openFilePreparationFromAssetPickerController:(id)arg1 withAssetInfo:(id)arg2;
- (void)openFilePreparationFromViewController:(id)arg1 withImageURL:(id)arg2;
- (void)openFilePreparationFromViewController:(id)arg1 withDocumentURL:(id)arg2;
- (void)openFilePreparationFromViewController:(id)arg1 withFileURL:(id)arg2;
- (void)openFilePreparationFromViewController:(id)arg1 withBrowseInfo:(id)arg2;
- (void)openBrandArticleListViewController;
- (void)openDocumentPickerViewController;
- (void)openFileBrowser;
- (id)createWebViewControllerWithBizArticle:(id)arg1 visibleViewController:(id)arg2;
- (id)createWebViewControllerWithWebURL:(id)arg1;
- (id)createWebViewPresetUI;
- (id)createFileDetailViewControllerWithLogicController:(id)arg1;
- (void)showToastIfFileTypeNotSupported;
- (_Bool)supportsPDFFileWithPath:(id)arg1;
- (_Bool)supportsImageTypeForFileURL:(id)arg1;
- (_Bool)supportsFileTypeForLogicController:(id)arg1;
- (id)fileDetailLogicControllerWithFileURL:(id)arg1;
- (id)fileDetailLogicControllerWithBrowseInfo:(id)arg1;
- (void)stopSharingFiles;
- (void)selectActionsWhileSharingFiles;
- (void)selectFiles;
@property(readonly, nonatomic) _Bool isSharingFiles;
@property(readonly, nonatomic) FinderBizUserInfo *bizUserInfo;
- (id)operationViewModel;
@property(readonly, nonatomic) MMFinderLiveTask *finderLiveTask;
@property(readonly, nonatomic) MMLiveTask *liveTask;
- (void)clearLive;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

