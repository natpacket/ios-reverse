//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "IMsgExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class BrandServiceStorage, NSString;

@interface BrandServiceMgr : MMUserService <MMServiceProtocol, IMsgExt>
{
    BrandServiceStorage *m_serviceStorage;
}

- (void).cxx_destruct;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)saveStorage;
- (void)loadStorage;
- (id)pathForStorage;
- (void)updateReceiveSwitchOffTime:(unsigned int)arg1 forUser:(id)arg2;
- (unsigned int)getReceiveSwitchOffTimeForUser:(id)arg1;
- (void)ResetLocationForUser:(id)arg1;
- (_Bool)HasSetLocationForUser:(id)arg1;
- (void)MarkHasSetLocationForUser:(id)arg1;
- (long long)GetContinueLocationReportInterval;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

