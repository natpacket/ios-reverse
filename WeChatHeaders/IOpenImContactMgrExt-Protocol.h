//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CContact, CPushContact, NSString, OpenIMArchivePopUpInfo;

@protocol IOpenImContactMgrExt <NSObject>

@optional
- (void)onUpdateOpenIMStorageArchivePopUp:(NSString *)arg1 privacyAgreementUrl:(NSString *)arg2 success:(_Bool)arg3 errMsg:(NSString *)arg4;
- (void)onGetOpenIMArchivePopUpInfo:(NSString *)arg1 archivePopUpInfo:(OpenIMArchivePopUpInfo *)arg2 success:(_Bool)arg3 errMsg:(NSString *)arg4;
- (void)onOpenIMStorageArchivePopUp:(NSString *)arg1 privacyAgreementUrl:(NSString *)arg2;
- (void)onDisableContactVerifyByOpenIMFriReqAcceptedInWxWork:(CPushContact *)arg1;
- (void)onOpenImGetContactOpenUrlDone:(NSString *)arg1 openUrl:(NSString *)arg2 errorTip:(NSString *)arg3 scene:(unsigned int)arg4;
- (void)onOpenImGetContactDone:(NSString *)arg1 contact:(CContact *)arg2;
@end

