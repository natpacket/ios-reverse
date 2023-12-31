//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CMessageWrap, CdnUploadTaskInfo, NSString;

@protocol RecordUploadCDNMgrDelegate <NSObject>

@optional
- (void)OnUploadMsgDataFail:(CMessageWrap *)arg1;
- (void)OnUploadRecordMsgDataSuccess:(CMessageWrap *)arg1;
- (void)OnUploadProgressChanged:(CMessageWrap *)arg1 total:(unsigned long long)arg2 remain:(unsigned long long)arg3;
- (void)OnUploadRecordForHistory:(CMessageWrap *)arg1 uploadInfo:(CdnUploadTaskInfo *)arg2 errMsg:(NSString *)arg3;
- (void)onUploadCDNRecordMsgModMsgByBitSet:(NSString *)arg1 MsgWrap:(CMessageWrap *)arg2 BitSet:(unsigned int)arg3;
@end

