//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "IMsgExt-Protocol.h"
#import "MMAxAuthLogicDelegate-Protocol.h"
#import "MMConfigMgrExt-Protocol.h"
#import "MMKernelExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class MMAuthInfo, MMMultiHostAuthInfo, NSData, NSMutableDictionary, NSSet, NSString;

@interface MMAuthService : MMUserService <MMConfigMgrExt, MMKernelExt, IMsgExt, MMAxAuthLogicDelegate, MMServiceProtocol>
{
    _Bool m_hasLoadUseAesGcmSessionKeyConfig;
    _Bool m_useAesGcmSessionKey;
    _Bool m_useSm4GcmAlgo;
    unsigned int _authStartTime;
    unsigned int _axTicketExpireTime;
    unsigned int _axTicketAutoRetry;
    NSData *_ecdhKey;
    NSSet *_useAesGcmSessionKeyCgis;
    MMAuthInfo *_oriAuthInfo;
    MMMultiHostAuthInfo *_mainAuthInfo;
    NSMutableDictionary *_axAuthWrapDic;
    NSMutableDictionary *_axAuthWrapFromHostDic;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int axTicketAutoRetry; // @synthesize axTicketAutoRetry=_axTicketAutoRetry;
@property(nonatomic) unsigned int axTicketExpireTime; // @synthesize axTicketExpireTime=_axTicketExpireTime;
@property(nonatomic) unsigned int authStartTime; // @synthesize authStartTime=_authStartTime;
@property(retain) NSMutableDictionary *axAuthWrapFromHostDic; // @synthesize axAuthWrapFromHostDic=_axAuthWrapFromHostDic;
@property(retain) NSMutableDictionary *axAuthWrapDic; // @synthesize axAuthWrapDic=_axAuthWrapDic;
@property(retain) MMMultiHostAuthInfo *mainAuthInfo; // @synthesize mainAuthInfo=_mainAuthInfo;
@property(retain) MMAuthInfo *oriAuthInfo; // @synthesize oriAuthInfo=_oriAuthInfo;
@property(retain) NSSet *useAesGcmSessionKeyCgis; // @synthesize useAesGcmSessionKeyCgis=_useAesGcmSessionKeyCgis;
@property(retain) NSData *ecdhKey; // @synthesize ecdhKey=_ecdhKey;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)onMMDynamicConfigUpdated;
- (void)onAuthOK;
- (void)onAxAuthLogicFailed:(id)arg1;
- (void)onAxAuthLogicSuccess:(id)arg1 clientSessionKey:(id)arg2 serverSessionKey:(id)arg3 serverId:(id)arg4 hostAlgoList:(id)arg5;
- (void)adjustEncryptAlgoForAuthInfo:(id)arg1;
- (void)setUseSm4GcmSwitchEnabled:(_Bool)arg1;
- (void)loadUseAesGcmSessionKeyConfig;
- (unsigned long long)checkAxAuthStateForHost:(id)arg1;
- (id)mainHostDecryptKeyForEncryptAlgo:(int)arg1;
- (id)authInfoForCgi:(unsigned int)arg1 host:(id)arg2;
- (void)startAxAuthRequestsOnMainThread;
- (void)updateAxAuthSecRespList:(id)arg1 authStartTime:(unsigned int)arg2;
- (basic_string_0ec669f3)cEcdhkey;
@property(retain, nonatomic) NSData *mainHostServerId; // @dynamic mainHostServerId;
- (void)updateMainHostClientSessionKey:(id)arg1 serverSessionKey:(id)arg2 hostAlgoList:(id)arg3;
@property(retain, nonatomic) NSData *oriSessionKey; // @dynamic oriSessionKey;
- (void)onServiceInit;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

