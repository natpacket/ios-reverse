//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FaceRecogInternelHandler.h"

#import "FaceRecogBaseHandlerDelegate-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class FaceRecogResultView, NSString;

@interface FaceRecog3rdVerifyHandler : FaceRecogInternelHandler <PBMessageObserverDelegate, FaceRecogBaseHandlerDelegate>
{
    FaceRecogResultView *_prepareView;
}

- (void).cxx_destruct;
- (void)handle3rdVerifyResult:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)didUploadFaceData:(id)arg1;
- (void)startVerifyFor3rdParty:(id)arg1 verifyInfo:(id)arg2 needVideo:(_Bool)arg3 feedbackUrl:(id)arg4 businessTip:(id)arg5;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
