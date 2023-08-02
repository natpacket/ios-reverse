//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FaceRecogPayHandlerDelegate-Protocol.h"
#import "MMKindaFaceRegManager-Protocol.h"

@class FaceRecogPayHandler, MMVoidBoolStringI32StringCallback, MMVoidCallback, NSString;

@interface MMKindaFaceRegManagerImpl : NSObject <FaceRecogPayHandlerDelegate, MMKindaFaceRegManager>
{
    MMVoidBoolStringI32StringCallback *_m_finishCallback;
    MMVoidCallback *_m_cancelCallback;
    FaceRecogPayHandler *_m_faceHandler;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FaceRecogPayHandler *m_faceHandler; // @synthesize m_faceHandler=_m_faceHandler;
@property(retain, nonatomic) MMVoidCallback *m_cancelCallback; // @synthesize m_cancelCallback=_m_cancelCallback;
@property(retain, nonatomic) MMVoidBoolStringI32StringCallback *m_finishCallback; // @synthesize m_finishCallback=_m_finishCallback;
- (void)faceRecogPayHandlerDidCancel:(id)arg1;
- (void)faceRecogPayHandlerDidFinish:(id)arg1;
- (void)startFaceImpl:(int)arg1 strPackage:(id)arg2 strPackageSign:(id)arg3 finishCallback:(id)arg4 cancelCallback:(id)arg5 otherVerifyTitle:(id)arg6 faceVerifyTitle:(id)arg7;
- (void)startFaceImpl:(int)arg1 strPackage:(id)arg2 strPackageSign:(id)arg3 finishCallback:(id)arg4 cancelCallback:(id)arg5 otherVerifyTitle:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

