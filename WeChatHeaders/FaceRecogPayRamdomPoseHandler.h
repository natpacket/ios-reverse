//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FaceRecogFlashHandler.h"

#import "FaceRecogBaseViewDelegate-Protocol.h"
#import "FaceRecogPayConfigLogicDelegate-Protocol.h"
#import "FaceRecogPayHandlerProtocol-Protocol.h"

@class FaceRecogBaseView, FaceRecogPayConfigLogic, NSData, NSString;

@interface FaceRecogPayRamdomPoseHandler : FaceRecogFlashHandler <FaceRecogBaseViewDelegate, FaceRecogPayConfigLogicDelegate, FaceRecogPayHandlerProtocol>
{
    FaceRecogBaseView *_verifyView;
    _Bool _hasClickBizButton;
    int _poseMode;
    FaceRecogPayConfigLogic *_config;
    NSData *_resultHash;
    NSString *_otherVerifyTitle;
    NSString *_faceVerifyTitle;
}

- (void).cxx_destruct;
@property(nonatomic) int poseMode; // @synthesize poseMode=_poseMode;
@property(retain, nonatomic) NSString *faceVerifyTitle; // @synthesize faceVerifyTitle=_faceVerifyTitle;
@property(nonatomic) _Bool hasClickBizButton; // @synthesize hasClickBizButton=_hasClickBizButton;
@property(retain, nonatomic) NSString *otherVerifyTitle; // @synthesize otherVerifyTitle=_otherVerifyTitle;
@property(retain, nonatomic) NSData *resultHash; // @synthesize resultHash=_resultHash;
@property(retain, nonatomic) FaceRecogPayConfigLogic *config; // @synthesize config=_config;
- (long long)bizTitleMaxLen;
- (void)encodeVideoAsync:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)faceRecogDidRotate;
- (void)faceRecogDidClickBizBtn;
- (void)onGetPayBioConfig:(id)arg1 failedCauseOf:(int)arg2 errMsg:(id)arg3;
- (void)onGetPayBioConfigOK:(id)arg1 succeedForBioId:(unsigned long long)arg2;
- (void)onStartVerifyResult:(id)arg1;
- (void)onShowUITips:(id)arg1;
- (void)didDetectFace;
- (void)onCameraStart;
- (void)didAccessConfig;
- (_Bool)onStartRequestConfig:(id)arg1;
- (void)showView;
- (void)didAccessVideo;
- (void)initView;
- (id)initWithScene:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

