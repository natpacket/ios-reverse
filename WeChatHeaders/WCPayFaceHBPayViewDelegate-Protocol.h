//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCPayFaceHBPayViewDelegate <NSObject>
- (void)onUserEndScreenCapture;
- (void)onUserstartScreenCapture;
- (void)OnHBSlide:(unsigned int)arg1 select:(unsigned int)arg2 Type:(unsigned int)arg3;
- (void)OnCaptureScreen;
- (NSString *)loadActionSheetTip;
- (void)OnLoadMoreRedEnvelopesList;
- (void)OnFaceHBViewHistory;
- (void)OnFaceHBViewDetail;
- (void)OnFaceHBDeleteHB;
- (void)OnFaceHBMyRedEnvelopesList;
- (void)OnFaceHBPayManage;
- (void)OnFaceHBPayCancel;
@end

