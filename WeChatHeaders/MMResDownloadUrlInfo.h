//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"
#import "WCTColumnCoding-Protocol.h"

@class MMResSignatureDataInfos, NSData, NSString;

@interface MMResDownloadUrlInfo : MMObject <PBCoding, WCTColumnCoding>
{
    _Bool _isEncrypt;
    _Bool _isCompress;
    _Bool _isLoginUsrRelated;
    _Bool _isPage;
    _Bool _isDownloaded;
    unsigned int _fileId;
    unsigned int _supportVersion;
    unsigned int _downloadPriority;
    unsigned int _retryCnt;
    unsigned int _protocal;
    NSString *_srcUrl;
    NSString *_version;
    NSString *_md5;
    NSString *_originalMd5;
    NSData *_signatureData;
    MMResSignatureDataInfos *_arrSignatureDataInfo;
    NSString *_originalSha1;
}

+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_originalSha1;
+ (void)PBArrayAdd_retryCnt;
+ (void)PBArrayAdd_downloadPriority;
+ (void)PBArrayAdd_originalMd5;
+ (void)PBArrayAdd_arrSignatureDataInfo;
+ (void)PBArrayAdd_signatureData;
+ (void)PBArrayAdd_isDownloaded;
+ (void)PBArrayAdd_supportVersion;
+ (void)PBArrayAdd_fileId;
+ (void)PBArrayAdd_isLoginUsrRelated;
+ (void)PBArrayAdd_isCompress;
+ (void)PBArrayAdd_md5;
+ (void)PBArrayAdd_isEncrypt;
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_srcUrl;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *originalSha1; // @synthesize originalSha1=_originalSha1;
@property(readonly, nonatomic) unsigned int protocal; // @synthesize protocal=_protocal;
@property(retain, nonatomic) MMResSignatureDataInfos *arrSignatureDataInfo; // @synthesize arrSignatureDataInfo=_arrSignatureDataInfo;
@property(retain, nonatomic) NSData *signatureData; // @synthesize signatureData=_signatureData;
@property(nonatomic) _Bool isDownloaded; // @synthesize isDownloaded=_isDownloaded;
@property(nonatomic) _Bool isPage; // @synthesize isPage=_isPage;
@property(nonatomic) unsigned int retryCnt; // @synthesize retryCnt=_retryCnt;
@property(nonatomic) unsigned int downloadPriority; // @synthesize downloadPriority=_downloadPriority;
@property(nonatomic) unsigned int supportVersion; // @synthesize supportVersion=_supportVersion;
@property(nonatomic) unsigned int fileId; // @synthesize fileId=_fileId;
@property(nonatomic) _Bool isLoginUsrRelated; // @synthesize isLoginUsrRelated=_isLoginUsrRelated;
@property(nonatomic) _Bool isCompress; // @synthesize isCompress=_isCompress;
@property(retain, nonatomic) NSString *originalMd5; // @synthesize originalMd5=_originalMd5;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(nonatomic) _Bool isEncrypt; // @synthesize isEncrypt=_isEncrypt;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *srcUrl; // @synthesize srcUrl=_srcUrl;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

