//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VideoUploadTask.h"

#import "MsgDataDownloadDelegate-Protocol.h"

@class MsgDataDownloadLogic, NSString, ThumbImageUploader, VideoEncodeParams;

@interface CompressVideoUploadTask : VideoUploadTask <MsgDataDownloadDelegate>
{
    _Bool _isSkipTransH264;
    _Bool _bTryHevcConvert;
    unsigned long long _m_ui64StartTime;
    VideoEncodeParams *_params;
    MsgDataDownloadLogic *_downloadLogic;
    ThumbImageUploader *_thumbImageUploader;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ThumbImageUploader *thumbImageUploader; // @synthesize thumbImageUploader=_thumbImageUploader;
@property(retain, nonatomic) MsgDataDownloadLogic *downloadLogic; // @synthesize downloadLogic=_downloadLogic;
@property(retain, nonatomic) VideoEncodeParams *params; // @synthesize params=_params;
@property(nonatomic) _Bool bTryHevcConvert; // @synthesize bTryHevcConvert=_bTryHevcConvert;
@property(nonatomic) _Bool isSkipTransH264; // @synthesize isSkipTransH264=_isSkipTransH264;
@property(nonatomic) unsigned long long m_ui64StartTime; // @synthesize m_ui64StartTime=_m_ui64StartTime;
- (void)onDownloadCancel:(id)arg1;
- (void)onDownloadExpireFail:(id)arg1;
- (void)onDownloadCommonFail:(id)arg1;
- (void)onDownloadSuccess:(id)arg1;
- (void)onUploadSucess:(id)arg1;
- (void)reportOnUploadSucc:(id)arg1;
- (void)onUploadFail:(id)arg1;
- (void)onCheckExistOnlyFail;
- (void)uploadVideoDataToCdn;
- (void)uploadVideoData;
- (void)tryUploadData;
- (void)downloadVideo;
- (void)convertCodeToH264;
- (void)asyncCompressVideo;
- (void)stopTask;
- (void)startTask;
- (_Bool)isNeedCompress;
- (id)initWithMsgWrap:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

