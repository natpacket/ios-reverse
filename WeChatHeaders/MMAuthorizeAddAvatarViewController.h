//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "AddAvatarUploadImageTaskDelegate-Protocol.h"
#import "MMImagePickerManagerDelegate-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class AddAvatarUploadImageTask, MMTableViewInfo, MMTipsViewController, NSString, UIButton, UIImage, WCTableViewNormalCellManager, WCUITextField;
@protocol MMAuthorizeAddAvatarViewControllerDelegate;

@interface MMAuthorizeAddAvatarViewController : MMUIViewController <PBMessageObserverDelegate, MMImagePickerManagerDelegate, UITextFieldDelegate, AddAvatarUploadImageTaskDelegate>
{
    _Bool _isBlockingToSave;
    _Bool _addSuccess;
    unsigned int _fromScene;
    unsigned int _sessionId;
    NSString *_navTitle;
    NSString *_appId;
    NSString *_defaultAvatarUrl;
    NSString *_defaultAvatarFileId;
    id <MMAuthorizeAddAvatarViewControllerDelegate> _delegate;
    MMTableViewInfo *_tableViewInfo;
    WCTableViewNormalCellManager *_nickNameCellInfo;
    WCUITextField *_nickNameTextField;
    UIButton *_randomBtn;
    UIButton *_saveBtn;
    UIImage *_pickerImage;
    NSString *_randomAvatarUrl;
    NSString *_randomAvatarFileId;
    NSString *_imageCdnUrl;
    NSString *_imageCdnFileId;
    MMTipsViewController *_tipsVC;
    AddAvatarUploadImageTask *_uploadTask;
    unsigned long long _stepStartTime;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool addSuccess; // @synthesize addSuccess=_addSuccess;
@property(nonatomic) unsigned long long stepStartTime; // @synthesize stepStartTime=_stepStartTime;
@property(retain, nonatomic) AddAvatarUploadImageTask *uploadTask; // @synthesize uploadTask=_uploadTask;
@property(retain, nonatomic) MMTipsViewController *tipsVC; // @synthesize tipsVC=_tipsVC;
@property(nonatomic) _Bool isBlockingToSave; // @synthesize isBlockingToSave=_isBlockingToSave;
@property(retain, nonatomic) NSString *imageCdnFileId; // @synthesize imageCdnFileId=_imageCdnFileId;
@property(retain, nonatomic) NSString *imageCdnUrl; // @synthesize imageCdnUrl=_imageCdnUrl;
@property(retain, nonatomic) NSString *randomAvatarFileId; // @synthesize randomAvatarFileId=_randomAvatarFileId;
@property(retain, nonatomic) NSString *randomAvatarUrl; // @synthesize randomAvatarUrl=_randomAvatarUrl;
@property(retain, nonatomic) UIImage *pickerImage; // @synthesize pickerImage=_pickerImage;
@property(retain, nonatomic) UIButton *saveBtn; // @synthesize saveBtn=_saveBtn;
@property(retain, nonatomic) UIButton *randomBtn; // @synthesize randomBtn=_randomBtn;
@property(retain, nonatomic) WCUITextField *nickNameTextField; // @synthesize nickNameTextField=_nickNameTextField;
@property(retain, nonatomic) WCTableViewNormalCellManager *nickNameCellInfo; // @synthesize nickNameCellInfo=_nickNameCellInfo;
@property(retain, nonatomic) MMTableViewInfo *tableViewInfo; // @synthesize tableViewInfo=_tableViewInfo;
@property(nonatomic) unsigned int sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) unsigned int fromScene; // @synthesize fromScene=_fromScene;
@property(nonatomic) __weak id <MMAuthorizeAddAvatarViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *defaultAvatarFileId; // @synthesize defaultAvatarFileId=_defaultAvatarFileId;
@property(copy, nonatomic) NSString *defaultAvatarUrl; // @synthesize defaultAvatarUrl=_defaultAvatarUrl;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *navTitle; // @synthesize navTitle=_navTitle;
- (void)reportAuthCostTime:(unsigned int)arg1 errCode:(int)arg2;
- (void)showErrMsg:(id)arg1 title:(id)arg2;
- (void)onSaveAvatarFailAndStopLoading:(id)arg1;
- (void)handleAddAvatarResp:(id)arg1;
- (void)handleGetRandomAvatarResp:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)sendAddAvatarReq;
- (void)onAddAvatarBtnClick;
- (void)onGetRandomAvatarBtnClicked;
- (void)onUploadImageFail:(unsigned int)arg1 errMsg:(id)arg2 task:(id)arg3;
- (void)onUploadImageCompleted:(id)arg1 task:(id)arg2;
- (void)startUploadImage:(id)arg1;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)onSightCameraCancel:(id)arg1;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (void)showImagePicker:(long long)arg1;
- (void)onPhotoLibrary;
- (void)onCamera;
- (void)onClickHeaderCell;
- (void)textFieldEditChange:(id)arg1;
- (void)keyboardHide:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1 reason:(long long)arg2;
- (void)makeNickNameCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeHeaderCell:(id)arg1 cellInfo:(id)arg2;
- (void)layoutSubviews;
- (void)initSaveBtn;
- (void)initRandomBtn;
- (void)makeTableViewInfo;
- (void)initTableView;
- (void)onNavBackBarButtonClicked;
- (void)initNavigationBar;
- (id)navigationBarBackgroundColor;
- (void)viewDidTransitionToNewSize;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

