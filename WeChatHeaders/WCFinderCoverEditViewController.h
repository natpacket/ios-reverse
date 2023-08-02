//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "EditImageTextInputDelegate-Protocol.h"
#import "WCEditImageOperationDelegate-Protocol.h"
#import "WCFinderCoverPreviewViewDelegate-Protocol.h"

@class EditImageTextToolV2, MMUIButton, NSString, UIButton, WCEditImageSafeAreaScrollView, WCFinderCoverPreviewView, WCFinderEditTextWidgetStateArray, WCFinderVideoSliderView;

@interface WCFinderCoverEditViewController : MMUIViewController <WCFinderCoverPreviewViewDelegate, EditImageTextInputDelegate, WCEditImageOperationDelegate>
{
    WCFinderEditTextWidgetStateArray *_coverTextWidgetState;
    WCFinderCoverPreviewView *_previewView;
    MMUIButton *_modeSwitchBtn;
    MMUIButton *_addTextWidgetBtn;
    EditImageTextToolV2 *_currEditTextWidget;
    WCFinderVideoSliderView *_sliderView;
    UIButton *_finishBtn;
    MMUIButton *_cancelButton;
    CDUnknownBlockType _chooseBlock;
    WCEditImageSafeAreaScrollView *_eIScrollView;
}

+ (_Bool)isHttpUrl:(id)arg1;
+ (id)ensureMediaUrlPath:(id)arg1 dataItem:(id)arg2;
+ (id)getCurPlayUrlWithDataItem:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCEditImageSafeAreaScrollView *eIScrollView; // @synthesize eIScrollView=_eIScrollView;
@property(copy, nonatomic) CDUnknownBlockType chooseBlock; // @synthesize chooseBlock=_chooseBlock;
@property(retain, nonatomic) MMUIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *finishBtn; // @synthesize finishBtn=_finishBtn;
@property(retain, nonatomic) WCFinderVideoSliderView *sliderView; // @synthesize sliderView=_sliderView;
@property(retain, nonatomic) EditImageTextToolV2 *currEditTextWidget; // @synthesize currEditTextWidget=_currEditTextWidget;
@property(retain, nonatomic) MMUIButton *addTextWidgetBtn; // @synthesize addTextWidgetBtn=_addTextWidgetBtn;
@property(retain, nonatomic) MMUIButton *modeSwitchBtn; // @synthesize modeSwitchBtn=_modeSwitchBtn;
@property(retain, nonatomic) WCFinderCoverPreviewView *previewView; // @synthesize previewView=_previewView;
@property(retain, nonatomic) WCFinderEditTextWidgetStateArray *coverTextWidgetState; // @synthesize coverTextWidgetState=_coverTextWidgetState;
- (struct CGRect)getAssetPreviewFrame;
- (_Bool)loadMediaInfoSuc;
- (unsigned long long)feedViewControllerScene;
- (void)editImageViewdidEndDraw;
- (void)editImageViewDidStartDraw;
- (void)editImageShowTextInputView:(id)arg1 displayStr:(id)arg2 lineColor:(id)arg3 textStyle:(unsigned long long)arg4;
- (void)confirmEditText:(id)arg1 withColor:(id)arg2 style:(unsigned long long)arg3 backgroundColor:(id)arg4;
- (void)cancelEditText:(id)arg1;
- (id)getCurSelectCoverPreviewModel;
- (void)onClickCancelAction;
- (void)onClickFinishAction;
- (void)startTextToolWithDisplayStr:(id)arg1 lineColor:(id)arg2 textStyle:(unsigned long long)arg3;
- (id)getCoverEditImageResult;
- (void)onClickAddTextWidgetAction;
- (void)onClickModeSwitchAction;
- (void)updateEditScrollArea;
- (void)loadCoverInfoByVideoURL:(id)arg1 coverTimeStamp:(double)arg2 compositionTask:(id)arg3 modeStyle:(unsigned int)arg4 cropRectModel:(id)arg5 chooseBlock:(CDUnknownBlockType)arg6;
- (void)_updateModeSwitchBtn:(id)arg1;
- (id)genBtn;
- (id)genPostDataReportDict;
- (void)layoutAllSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
