//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LocalJSEventHandler_BaseEvent.h"

#import "IStoreEmotionSingleDownloadMgrExt-Protocol.h"

@class NSString;

@interface LocalJSEventHandler_emoticonImg : LocalJSEventHandler_BaseEvent <IStoreEmotionSingleDownloadMgrExt>
{
    unsigned long long _operation;
}

@property(nonatomic) unsigned long long operation; // @synthesize operation=_operation;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (void)startDownloadWithMd5:(id)arg1;
- (void)handleJSEvent:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
