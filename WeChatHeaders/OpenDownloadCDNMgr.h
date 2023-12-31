//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ICdnComMgrExt-Protocol.h"

@class CdnTaskInfo, NSMutableArray;
@protocol OpenDownloadCDNMgrDelegate;

@interface OpenDownloadCDNMgr : NSObject <ICdnComMgrExt>
{
    NSMutableArray *_arrFileInfo;
    CdnTaskInfo *_curTaskInfo;
    _Bool _bLargeFile;
    id <OpenDownloadCDNMgrDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bLargeFile; // @synthesize bLargeFile=_bLargeFile;
@property(nonatomic) __weak id <OpenDownloadCDNMgrDelegate> m_delegate; // @synthesize m_delegate;
- (void)OnCdnDownload:(id)arg1;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)OnSetCdnDnsInfo;
- (void)localCacheDownloadSuccess;
- (_Bool)CheckForLocalCache:(id)arg1;
- (_Bool)preCheckIfMsgWrapCanQuickDownload:(id)arg1;
- (void)LoadCacheData;
- (void)moveFileCacheToCommomCache;
- (void)addCommmonCache:(id)arg1;
- (id)GetFileCachePath;
- (id)getAppAttachFilePath:(id)arg1;
- (void)StopDownloadByUsr:(id)arg1;
- (void)StopDownload:(id)arg1 MsgWrap:(id)arg2 needNotify:(_Bool)arg3;
- (void)StopDownload:(id)arg1 MsgWrap:(id)arg2;
- (void)StopCurDownload;
- (_Bool)StartDownload:(id)arg1 MsgWrap:(id)arg2 Silent:(_Bool)arg3 autoDownload:(_Bool)arg4 behavior:(long long)arg5;
- (_Bool)StartDownload:(id)arg1 MsgWrap:(id)arg2 Silent:(_Bool)arg3 autoDownload:(_Bool)arg4;
- (_Bool)StartDownload:(id)arg1 MsgWrap:(id)arg2;
- (void)DownloadFail:(int)arg1 expired:(_Bool)arg2;
- (void)DownloadOk;
- (void)modMsgByBitSetInMainQueue:(id)arg1 MsgWrap:(id)arg2 BitSet:(unsigned int)arg3;
- (void)CheckQueue;
- (void)Pop;
- (id)GetTop;
- (void)DelTaskInDownloadQueue:(id)arg1;
- (_Bool)IsCurrentDownloading:(id)arg1 MsgWrap:(id)arg2;
- (_Bool)noQuotaDownloading:(id)arg1 MsgWrap:(id)arg2;
- (_Bool)InDownloading:(id)arg1 MsgWrap:(id)arg2;
- (void)dealloc;
- (id)init;

@end

