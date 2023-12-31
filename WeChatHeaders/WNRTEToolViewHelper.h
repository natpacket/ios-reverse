//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMPickLocationViewControllerDelegate-Protocol.h"
#import "UIDocumentPickerDelegate-Protocol.h"
#import "WCFileBrowseDelegate-Protocol.h"

@class MMPickLocationViewController, NSMutableArray, NSString, RTEAttributeNode;
@protocol WNRTEToolViewHelperDelegate;

@interface WNRTEToolViewHelper : NSObject <MMPickLocationViewControllerDelegate, WCFileBrowseDelegate, UIDocumentPickerDelegate>
{
    unsigned int _mmassetCount;
    id <WNRTEToolViewHelperDelegate> _delegate;
    NSMutableArray *_arrAttachments;
    MMPickLocationViewController *_locationViewCtrl;
    RTEAttributeNode *_recordingAttribute;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RTEAttributeNode *recordingAttribute; // @synthesize recordingAttribute=_recordingAttribute;
@property(retain, nonatomic) MMPickLocationViewController *locationViewCtrl; // @synthesize locationViewCtrl=_locationViewCtrl;
@property(retain, nonatomic) NSMutableArray *arrAttachments; // @synthesize arrAttachments=_arrAttachments;
@property(nonatomic) unsigned int mmassetCount; // @synthesize mmassetCount=_mmassetCount;
@property(nonatomic) __weak id <WNRTEToolViewHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void)insertSeperateLine;
- (void)onVoiceRecordEnd;
- (void)onVoiceRecordRealBegin;
- (_Bool)onVoiceRecordBegin;
- (void)onCancelSeletctedLocation;
- (void)onFinishSelectedLocation;
- (id)onGetRightBarButton;
- (void)onCreatPostLocationView;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (void)onFileBrowseMultiSelect:(id)arg1;
- (void)onFileBrowseOpeniCloud;
- (void)showFilePickerView:(unsigned int)arg1;
- (void)onAddImageItemComplete;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (void)showImagePicker:(long long)arg1 withAvailableCount:(unsigned int)arg2;
- (void)onTakePhotoForPost;
- (void)onCreatePostImageView:(unsigned int)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

