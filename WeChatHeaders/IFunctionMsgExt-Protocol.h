//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class BusinessInfo, CMessageWrap, NSArray, NSData, NSMutableData, NSMutableString, NSString;

@protocol IFunctionMsgExt

@optional
- (void)onFunctionMgrFetchMsgFailWithBussinessId:(unsigned long long)arg1 functionMsgId:(NSString *)arg2;
- (void)onFunctionMgrShowMsgs:(NSArray *)arg1 bussinessId:(unsigned long long)arg2 businessInfo:(BusinessInfo *)arg3;
- (void)onFunctionMgrWillShowMsg:(CMessageWrap *)arg1 bussinessId:(unsigned long long)arg2 canShow:(NSMutableString *)arg3;
- (void)onFunctionMsgRevoke:(NSData *)arg1 bussinessId:(unsigned long long)arg2 functionMsgId:(NSString *)arg3;
- (void)onFunctionMsgRequest:(NSMutableData *)arg1 bussinessId:(unsigned long long)arg2 functionMsgId:(NSString *)arg3;
- (void)onFunctionMsgResponse:(NSData *)arg1 bussinessId:(unsigned long long)arg2 functionMsgId:(NSString *)arg3;
@end
