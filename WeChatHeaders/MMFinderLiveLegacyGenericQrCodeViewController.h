//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMFinderLiveQrCodeViewController.h"

#import "MMFinderLiveGenericQrCodeViewDelegate-Protocol.h"
#import "MMFinderLiveQrCodeReporter-Protocol.h"

@class FinderLiveShareLiveQRCodeInfo, NSString, WCFinderContact;

@interface MMFinderLiveLegacyGenericQrCodeViewController : MMFinderLiveQrCodeViewController <MMFinderLiveQrCodeReporter, MMFinderLiveGenericQrCodeViewDelegate>
{
    unsigned int _isSpamModPic;
    WCFinderContact *_anchorContact;
    FinderLiveShareLiveQRCodeInfo *_qrCodeInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderLiveShareLiveQRCodeInfo *qrCodeInfo; // @synthesize qrCodeInfo=_qrCodeInfo;
@property(nonatomic) unsigned int isSpamModPic; // @synthesize isSpamModPic=_isSpamModPic;
@property(retain, nonatomic) WCFinderContact *anchorContact; // @synthesize anchorContact=_anchorContact;
- (void)reportShareQRCodeAction:(unsigned long long)arg1;
- (void)clearBackgroundImage;
- (void)setBackgroundImage:(id)arg1;
- (void)onLiveGenericQrCodeViewBackgroundImageChangeRequested:(id)arg1;
- (void)onShareButtonInvoked;
- (void)onSaveImageButtonInvoked;
- (void)onCancelButtonInvoked;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithEditImageAttr:(id)arg2;
- (id)reporter;
- (id)createQrCodeView;
- (void)fetchDetailsQRCodeInfoWithLiveTaskId:(id)arg1 contact:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

