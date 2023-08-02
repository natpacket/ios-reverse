//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMEmoticonResExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class NSMutableArray, NSMutableSet, NSString;

@interface MMEasterEggMgr : MMUserService <MMEmoticonResExt, MMServiceProtocol>
{
    _Bool m_isShowEgg;
    unsigned int m_uiEasterEggLastUpdateTime;
    NSMutableArray *m_arrEgg;
    NSMutableSet *m_disabledAppIdSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *disabledAppIdSet; // @synthesize disabledAppIdSet=m_disabledAppIdSet;
- (void)disableEasterEggWithAppId:(id)arg1;
- (id)easterEggWithMessage:(id)arg1 isSender:(_Bool)arg2;
- (_Bool)isShowEasterEgg;
- (void)dealloc;
- (id)init;
- (id)disabledAppIdListKey;
- (void)decodeDisabledAppIdList;
- (void)encodeDisabledAppIdList;
- (id)parseEggAnimationFromAnimTypeNode:(struct XmlReaderNode_t *)arg1 dirPath:(id)arg2 clientEggVersion:(long long)arg3 ignoreImageName:(_Bool)arg4;
- (id)parseTopAnimationFromTopAnimNode:(struct XmlReaderNode_t *)arg1 dirPath:(id)arg2;
- (void)onEmoticonResDeleteForSubType:(unsigned int)arg1;
- (void)onEmoticonResUpdateForSubType:(unsigned int)arg1 dirPath:(id)arg2;
- (void)initEggWithConfigDirPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

