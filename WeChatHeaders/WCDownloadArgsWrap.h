//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCPlayerMediaExt-Protocol.h"

@class NSString;

@interface WCDownloadArgsWrap : NSObject <WCPlayerMediaExt>
{
    struct C2CDownloadRequest _request;
    _Bool _isHLSVideo;
    _Bool _isColdSNSData;
    _Bool _isHotSNSVideo;
    _Bool _isUseMultithread;
    unsigned int _cacheMediaType;
    int _fileType;
    int _appType;
    int _limitRate;
    int _requestVideoFormat;
    int _videoFlagPolicy;
    int _chatType;
    unsigned int _blockSize;
    unsigned int _maxHttpRedirectCount;
    unsigned int _concurrentCount;
    int _predownloadRatio;
    int _predownloadMinsize;
    int _bitrate;
    NSString *_fileKey;
    unsigned long long _downloadType;
    unsigned long long _scene;
    NSString *_formatPath;
    id _userInfo;
    NSString *_aggregateName;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _completeBlock;
    NSString *_savePath;
    NSString *_fileMd5;
    unsigned long long _fileSize;
    NSString *_fileID;
    NSString *_aesKey;
    NSString *_msgExtra;
    NSString *_requestVideoFlag;
    NSString *_hlsVideoFlag;
    NSString *_SNSVideoColdRule;
    NSString *_url;
    NSString *_host;
    NSString *_referer;
    unsigned long long _snsDecryptKey;
    NSString *_customRequestHeader;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) int bitrate; // @synthesize bitrate=_bitrate;
@property(nonatomic) int predownloadMinsize; // @synthesize predownloadMinsize=_predownloadMinsize;
@property(nonatomic) int predownloadRatio; // @synthesize predownloadRatio=_predownloadRatio;
@property(nonatomic) unsigned int concurrentCount; // @synthesize concurrentCount=_concurrentCount;
@property(nonatomic) _Bool isUseMultithread; // @synthesize isUseMultithread=_isUseMultithread;
@property(retain, nonatomic) NSString *customRequestHeader; // @synthesize customRequestHeader=_customRequestHeader;
@property(nonatomic) unsigned int maxHttpRedirectCount; // @synthesize maxHttpRedirectCount=_maxHttpRedirectCount;
@property(nonatomic) unsigned long long snsDecryptKey; // @synthesize snsDecryptKey=_snsDecryptKey;
@property(retain, nonatomic) NSString *referer; // @synthesize referer=_referer;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) unsigned int blockSize; // @synthesize blockSize=_blockSize;
@property(copy, nonatomic) NSString *SNSVideoColdRule; // @synthesize SNSVideoColdRule=_SNSVideoColdRule;
@property(nonatomic) _Bool isHotSNSVideo; // @synthesize isHotSNSVideo=_isHotSNSVideo;
@property(nonatomic) _Bool isColdSNSData; // @synthesize isColdSNSData=_isColdSNSData;
@property(nonatomic) int chatType; // @synthesize chatType=_chatType;
@property(retain, nonatomic) NSString *hlsVideoFlag; // @synthesize hlsVideoFlag=_hlsVideoFlag;
@property(nonatomic) _Bool isHLSVideo; // @synthesize isHLSVideo=_isHLSVideo;
@property(retain, nonatomic) NSString *requestVideoFlag; // @synthesize requestVideoFlag=_requestVideoFlag;
@property(nonatomic) int videoFlagPolicy; // @synthesize videoFlagPolicy=_videoFlagPolicy;
@property(nonatomic) int requestVideoFormat; // @synthesize requestVideoFormat=_requestVideoFormat;
@property(retain, nonatomic) NSString *msgExtra; // @synthesize msgExtra=_msgExtra;
@property(nonatomic) int limitRate; // @synthesize limitRate=_limitRate;
@property(retain, nonatomic) NSString *aesKey; // @synthesize aesKey=_aesKey;
@property(retain, nonatomic) NSString *fileID; // @synthesize fileID=_fileID;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NSString *fileMd5; // @synthesize fileMd5=_fileMd5;
@property(retain, nonatomic) NSString *savePath; // @synthesize savePath=_savePath;
@property(nonatomic) int appType; // @synthesize appType=_appType;
@property(nonatomic) int fileType; // @synthesize fileType=_fileType;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(nonatomic) unsigned int cacheMediaType; // @synthesize cacheMediaType=_cacheMediaType;
@property(retain, nonatomic) NSString *aggregateName; // @synthesize aggregateName=_aggregateName;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSString *formatPath; // @synthesize formatPath=_formatPath;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned long long downloadType; // @synthesize downloadType=_downloadType;
@property(retain, nonatomic) NSString *fileKey; // @synthesize fileKey=_fileKey;
- (int)getBitrate;
- (id)getFormatVideoPath;
- (id)getTempVideoPath;
- (id)getMediaWrapUrl;
- (id)getMediaWrapIdentifier;
- (struct C2CDownloadRequest)getMarsRequest;
- (void)setFileSizeMaxLimit:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

