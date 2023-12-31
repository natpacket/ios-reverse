//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UploadStateProcessor.h"

#import "MMAppAttachFileMgrExt-Protocol.h"

@class CMessageWrap, NSMutableArray, NSString;

@interface BigFileCheckProcessor : UploadStateProcessor <MMAppAttachFileMgrExt>
{
    CMessageWrap *_msgWrap;
    NSMutableArray *_bigFileTasks;
    NSMutableArray *_uploadTaskList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *uploadTaskList; // @synthesize uploadTaskList=_uploadTaskList;
@property(retain, nonatomic) NSMutableArray *bigFileTasks; // @synthesize bigFileTasks=_bigFileTasks;
@property(retain, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap=_msgWrap;
- (void)convertUploadBigFileRecordData:(id)arg1;
- (void)onBatchCheckBigFileUploadResult:(_Bool)arg1 respList:(id)arg2 wrapMsg:(id)arg3 errMsg:(id)arg4;
- (void)transformToNextState;
- (id)getStateName;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

