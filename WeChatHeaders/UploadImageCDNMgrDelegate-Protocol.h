//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CMessageWrap, NSString;

@protocol UploadImageCDNMgrDelegate <NSObject>

@optional
- (void)OnUploadMsgDataFail:(CMessageWrap *)arg1;
- (void)OnUploadMsgDataSuccess:(CMessageWrap *)arg1;
- (void)onUploadBypassImageCdnFinish:(CMessageWrap *)arg1;
- (void)onUploadImageModMsg:(NSString *)arg1 MsgWrap:(CMessageWrap *)arg2;
- (void)onUploadImageModMsgByBitSet:(NSString *)arg1 MsgWrap:(CMessageWrap *)arg2 BitSet:(unsigned int)arg3;
@end

