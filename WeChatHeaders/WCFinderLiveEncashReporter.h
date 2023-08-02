//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IWCFinderLiveEncashReporterCallback-Protocol.h"

@class NSString;

@interface WCFinderLiveEncashReporter : NSObject <IWCFinderLiveEncashReporterCallback>
{
    NSString *m_encashSessionId;
    long long m_lastSceneType;
}

- (void).cxx_destruct;
- (void)reportEncashAction:(unsigned long long)arg1 withSceneType:(long long)arg2;
- (void)onEncashAction:(unsigned long long)arg1;
- (void)openEncashPage;
- (void)unRegisterExtension;
- (void)registerExtension;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

