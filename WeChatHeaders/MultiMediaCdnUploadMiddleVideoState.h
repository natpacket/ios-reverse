//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MultiMediaUploadBaseState.h"

@class NSString;

@interface MultiMediaCdnUploadMiddleVideoState : MultiMediaUploadBaseState
{
    _Bool _enableHitCheck;
    int _retryCount;
    NSString *_uploadFileKey;
    unsigned long long _totalFileSize;
    unsigned long long _haveUploadSize;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long haveUploadSize; // @synthesize haveUploadSize=_haveUploadSize;
@property(nonatomic) unsigned long long totalFileSize; // @synthesize totalFileSize=_totalFileSize;
@property(nonatomic) int retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) NSString *uploadFileKey; // @synthesize uploadFileKey=_uploadFileKey;
@property(nonatomic) _Bool enableHitCheck; // @synthesize enableHitCheck=_enableHitCheck;
- (_Bool)retryUpload;
- (struct C2CUploadRequest)getUploadRequest;
- (void)onCdnUploadDataSuccess:(id)arg1 aesk:(id)arg2;
- (void)retryUploadDataWithoutHitcheck;
- (void)checkDataMd5:(id)arg1;
- (void)onUploadFail:(id)arg1;
- (void)startUpload;
- (id)getStateName;
- (void)stop;
- (void)start;
- (id)initWithContext:(id)arg1;

@end
