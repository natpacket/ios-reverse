//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"
#import "ShakeMsgNotifyMgrDelegate-Protocol.h"

@class NSString, ShakeMsgNotifyMgr, ShakeMusicStorage, ShakePeopleStorage, ShakeTvStorage;

@interface ShakeMgr : MMUserService <ShakeMsgNotifyMgrDelegate, MMServiceProtocol>
{
    long long m_shakeType;
    ShakePeopleStorage *m_peopleStorage;
    ShakeMusicStorage *m_musicStorage;
    ShakeTvStorage *m_tvStorage;
    long long m_peopleStorageRefCount;
    long long m_pageStorageRefCount;
    long long m_musicStorageRefCount;
    long long m_tvStorageRefCount;
    long long m_shakeShareStorageRefCount;
    ShakeMsgNotifyMgr *m_shakeMsgNotifyMgr;
    long long m_scene;
    NSString *m_sessionId;
    long long m_shakeTimestamp;
    NSString *m_shakeSessionId;
    _Bool _foreground;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool foreground; // @synthesize foreground=_foreground;
- (void)jumpFromScene:(long long)arg1;
- (long long)getShakeTimestamp;
- (void)setShakeTimestamp:(long long)arg1;
- (id)getShakeSessionId;
- (void)setShakeSessionId:(id)arg1;
- (id)getSessionId;
- (void)setSessionId:(id)arg1;
- (long long)getShakeScene;
- (void)setShakeScene:(long long)arg1;
- (void)onShakeMsgUnreadCountChanged;
- (void)insertMsgItem:(id)arg1;
- (void)deleteAllMessages;
- (void)deleteMessageItem:(id)arg1;
- (void)markMessageListRead:(id)arg1;
- (id)getMessagesFrom:(id)arg1 maxCount:(unsigned int)arg2;
- (id)getUnreadMsgPidDesc;
- (id)getLastestUnreadMessage;
- (id)getUnreadMessages;
- (unsigned long long)getUnreadMessageCount;
- (_Bool)hasUnreadMessages;
- (void)endMusicStorage;
- (void)beginMusicStorage;
- (void)endPeopleStorage;
- (void)beginPeopleStorage;
- (void)endTvStorage;
- (void)beginTvStorage;
- (void)ClearTvStorage;
- (void)SaveTvStorage:(_Bool)arg1;
- (id)getTvStorage;
- (void)LoadTvStorage;
- (void)ClearMusicStorage;
- (void)SaveMusicStorage:(_Bool)arg1;
- (id)getMusicStorage;
- (void)LoadMusicStorage;
- (void)ClearPeopleStorage;
- (void)SavePeopleStorage:(_Bool)arg1;
- (id)getPeopleStorage;
- (void)LoadPeopleStorage;
- (void)setSoundStatus:(long long)arg1;
- (long long)getSoundStatus;
- (_Bool)canShowShakeTV;
- (_Bool)isShakeMusicOversea;
- (_Bool)canShowShakeMusic;
- (long long)getShakeType;
- (void)shakeSwitch:(long long)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
