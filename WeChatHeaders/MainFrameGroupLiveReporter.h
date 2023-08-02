//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMGroupLiveMgrExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class NSMutableDictionary, NSString;

@interface MainFrameGroupLiveReporter : MMUserService <MMGroupLiveMgrExt, MMServiceProtocol>
{
    NSMutableDictionary *_chatroomLiveInfos;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *chatroomLiveInfos; // @synthesize chatroomLiveInfos=_chatroomLiveInfos;
- (void)onLiveCountChanged:(id)arg1;
- (_Bool)shouldShowGroupReddot:(id)arg1;
- (id)getOpenedGroupLiveIds:(id)arg1;
- (long long)getRedotType;
- (void)logEnterSessionWithGroupLive:(id)arg1 muteGroup:(_Bool)arg2;
- (void)logReceiveGroupLiveMsg:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

