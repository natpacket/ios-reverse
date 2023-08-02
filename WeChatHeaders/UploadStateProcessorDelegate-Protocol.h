//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CMessageWrap, CdnUploadTaskInfo, NSArray, NSMutableArray, NSString, UploadStateProcessor;

@protocol UploadStateProcessorDelegate <NSObject>
- (void)onStateProcessFinished:(_Bool)arg1;
- (void)changeToState:(UploadStateProcessor *)arg1;
- (void)onHistoryRecordDataUploadFinishWithCdnInfo:(CdnUploadTaskInfo *)arg1 errorMsg:(NSString *)arg2;
- (void)onMediaDataUploadSuccess:(UploadStateProcessor *)arg1;
- (void)updateUploadProgressWithTotal:(unsigned long long)arg1 remain:(unsigned long long)arg2;
- (void)updateMediaWrapWithBitset:(int)arg1;
- (void)updateUploadTaskList:(NSMutableArray *)arg1;
- (NSMutableArray *)getUploadTaskList;
- (CMessageWrap *)getMediaWrap;
- (NSArray *)getDataList;
@end

