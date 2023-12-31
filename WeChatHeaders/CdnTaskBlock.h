//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CdnTaskBlock : NSObject
{
    struct C2CUploadRequest request;
    int _mode;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _existOnSvrBlock;
    CDUnknownBlockType _uploadCompleteBlock;
    CDUnknownBlockType _moovReadyBlock;
    CDUnknownBlockType _m3u8ReadyBlock;
    CDUnknownBlockType _requestDataReadyCallback;
    CDUnknownBlockType _fastCompleteBlock;
    CDUnknownBlockType _downloadCompleteBlock;
    CDUnknownBlockType _preloadCompleteBlock;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType preloadCompleteBlock; // @synthesize preloadCompleteBlock=_preloadCompleteBlock;
@property(copy, nonatomic) CDUnknownBlockType downloadCompleteBlock; // @synthesize downloadCompleteBlock=_downloadCompleteBlock;
@property(copy, nonatomic) CDUnknownBlockType fastCompleteBlock; // @synthesize fastCompleteBlock=_fastCompleteBlock;
@property(copy, nonatomic) CDUnknownBlockType requestDataReadyCallback; // @synthesize requestDataReadyCallback=_requestDataReadyCallback;
@property(copy, nonatomic) CDUnknownBlockType m3u8ReadyBlock; // @synthesize m3u8ReadyBlock=_m3u8ReadyBlock;
@property(copy, nonatomic) CDUnknownBlockType moovReadyBlock; // @synthesize moovReadyBlock=_moovReadyBlock;
@property(copy, nonatomic) CDUnknownBlockType uploadCompleteBlock; // @synthesize uploadCompleteBlock=_uploadCompleteBlock;
@property(copy, nonatomic) CDUnknownBlockType existOnSvrBlock; // @synthesize existOnSvrBlock=_existOnSvrBlock;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(nonatomic) int mode; // @synthesize mode=_mode;

@end

