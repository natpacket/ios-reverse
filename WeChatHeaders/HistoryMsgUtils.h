//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface HistoryMsgUtils : NSObject
{
}

+ (void)reportWhenReceiveInviteMsg:(id)arg1;
+ (void)reportWhenShowHistoryMsg:(id)arg1;
+ (_Bool)isMsgUseCdnUpload:(id)arg1;
+ (_Bool)isCanSendOriginAppMsg:(id)arg1;
+ (_Bool)canSendOriMsg:(id)arg1;
+ (_Bool)isNeedUploadDataMsg:(id)arg1;
+ (id)getThumbnailWithMsgWrap:(id)arg1;
+ (id)covertToAddMsgWithMsgWrap:(id)arg1;
+ (id)genTextMsgWithText:(id)arg1 msgWrap:(id)arg2;
+ (_Bool)checkHistoryUploadInfo:(id)arg1;
+ (_Bool)isCloseOldHistoryMsgUpload;
+ (_Bool)isOpenNewHistoryMsgUpload;
+ (_Bool)isOpenNewHistoryMsgShow;
+ (_Bool)isJoinGroupMsgNeedDownloadMsg:(id)arg1;

@end

