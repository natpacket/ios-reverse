//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ICdnComMgrExt-Protocol.h"

@class NSMutableDictionary;

@interface WCCardCDNDownloadHelper : NSObject <ICdnComMgrExt>
{
    NSMutableDictionary *_clientMsgId2DownloadInfoMap;
}

- (void).cxx_destruct;
- (void)OnCdnDownload:(id)arg1;
- (void)OnCdnInit;
- (id)getMd5:(id)arg1;
- (id)download:(id)arg1;
- (id)init;
- (void)dealloc;

@end

