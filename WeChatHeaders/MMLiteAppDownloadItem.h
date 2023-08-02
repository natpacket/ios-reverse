//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMLiteAppOpenParam, NSString, ResourceMeta;

@interface MMLiteAppDownloadItem : NSObject
{
    _Bool _isUseCDNDownload;
    NSString *_appId;
    NSString *_baseId;
    NSString *_pId;
    NSString *_filePath;
    NSString *_signatureKey;
    NSString *_type;
    MMLiteAppOpenParam *_openParam;
    ResourceMeta *_resMeta;
    unsigned long long _startTime;
    unsigned long long _retryCount;
    unsigned long long _from;
    unsigned long long _tinkerTime;
    unsigned long long _downloadTime;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isUseCDNDownload; // @synthesize isUseCDNDownload=_isUseCDNDownload;
@property(nonatomic) unsigned long long downloadTime; // @synthesize downloadTime=_downloadTime;
@property(nonatomic) unsigned long long tinkerTime; // @synthesize tinkerTime=_tinkerTime;
@property(nonatomic) unsigned long long from; // @synthesize from=_from;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) ResourceMeta *resMeta; // @synthesize resMeta=_resMeta;
@property(retain, nonatomic) MMLiteAppOpenParam *openParam; // @synthesize openParam=_openParam;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *signatureKey; // @synthesize signatureKey=_signatureKey;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) NSString *pId; // @synthesize pId=_pId;
@property(retain, nonatomic) NSString *baseId; // @synthesize baseId=_baseId;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (id)init;

@end

