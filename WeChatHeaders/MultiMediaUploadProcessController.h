//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "UploadStateProcessorDelegate-Protocol.h"

@class CMessageWrap, NSMutableArray, NSString, UploadStateProcessor;
@protocol MultiMediaUploadProcessControllerDelegate;

@interface MultiMediaUploadProcessController : MMObject <UploadStateProcessorDelegate>
{
    _Bool _bJustUploadDataWithoutMD5Hit;
    _Bool _isStopped;
    NSString *_identifier;
    CMessageWrap *_msgWrap;
    id <MultiMediaUploadProcessControllerDelegate> _delegate;
    UploadStateProcessor *_state;
    NSMutableArray *_uploadTaskList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *uploadTaskList; // @synthesize uploadTaskList=_uploadTaskList;
@property(retain, nonatomic) UploadStateProcessor *state; // @synthesize state=_state;
@property(nonatomic) _Bool isStopped; // @synthesize isStopped=_isStopped;
@property(nonatomic) __weak id <MultiMediaUploadProcessControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool bJustUploadDataWithoutMD5Hit; // @synthesize bJustUploadDataWithoutMD5Hit=_bJustUploadDataWithoutMD5Hit;
@property(retain, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap=_msgWrap;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)onMediaDataUploadSuccess:(id)arg1;
- (void)updateUploadProgressWithTotal:(unsigned long long)arg1 remain:(unsigned long long)arg2;
- (void)updateMediaWrapWithBitset:(int)arg1;
- (void)onHistoryRecordDataUploadFinishWithCdnInfo:(id)arg1 errorMsg:(id)arg2;
- (void)onStateProcessFinished:(_Bool)arg1;
- (void)changeToState:(id)arg1;
- (void)updateUploadTaskList:(id)arg1;
- (id)getUploadTaskList;
- (id)getDataList;
- (id)getMediaWrap;
- (void)onAssetSetMsgStartUpload;
- (void)stopTask;
- (void)startTask;
- (id)initWithMsgWrap:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
