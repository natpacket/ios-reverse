//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMSightCameraViewController.h"

#import "MMImagePickerManagerDelegate-Protocol.h"
#import "ShortVideoBarDelegate-Protocol.h"

@class MMImagePickerManagerOptionObj, NSString, WCFinderCameraViewModel;
@protocol WCFinderCameraViewControllerDelegate;

@interface WCFinderCameraViewController : MMSightCameraViewController <ShortVideoBarDelegate, MMImagePickerManagerDelegate>
{
    WCFinderCameraViewModel *_viewModel;
    id <WCFinderCameraViewControllerDelegate> _cameraDelegate;
    MMImagePickerManagerOptionObj *_optionObj;
    unsigned long long _enterTime;
    NSString *_traceId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *traceId; // @synthesize traceId=_traceId;
@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
@property(retain, nonatomic) MMImagePickerManagerOptionObj *optionObj; // @synthesize optionObj=_optionObj;
@property(nonatomic) __weak id <WCFinderCameraViewControllerDelegate> cameraDelegate; // @synthesize cameraDelegate=_cameraDelegate;
@property(retain, nonatomic) WCFinderCameraViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)registerYReportSdk;
- (id)shortVideoToolBarGetTemplateFollowFeedId;
- (unsigned long long)getFinderPostEnterScene;
- (void)onShortVideoShootBtnClicked;
- (void)close;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)changeCameraCaptureSessionToRun:(_Bool)arg1;
- (_Bool)useTransparentNavibar;
- (void)showImagePicker;
- (_Bool)hidesStatusBar;
- (void)viewWillBeDismissed:(_Bool)arg1;
- (void)viewWillPresentQuickReplySession:(id)arg1;
- (void)viewDidPresent:(_Bool)arg1;
- (void)viewDidPush:(_Bool)arg1;
- (id)getReportExtInfoDismissState:(_Bool)arg1 eventCode:(long long)arg2;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewWillBePushOrPresent:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)handleDefaultCameraFrontBackDevice;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

