//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ILocationMgrExt-Protocol.h"
#import "WCFinderLiveExt-Protocol.h"

@class FinderLocation, MMFinderLiveImageOcrOp, MMFinderLiveTask, MMLiveTaskId, NSData, NSString, WCFinderDataItem, WCFinderLiveShareItem;

@interface MMFinderGameLiveStarterViewModel : NSObject <ILocationMgrExt, WCFinderLiveExt>
{
    int _createGameLiveScene;
    int _wxaGameLiveScene;
    unsigned int _currJoinTeamMode;
    unsigned int _currJoinTeamCoinValue;
    WCFinderDataItem *_dataItem;
    WCFinderLiveShareItem *_shareItem;
    long long _entryScene;
    NSString *_appId;
    NSData *_spamCheckInfo;
    FinderLocation *_locationInfo;
    NSString *_liveGameAuthTicket;
    NSString *_liveCoverUrl;
    NSString *_defaultLiveCoverUrl;
    NSString *_liveDescription;
    MMLiveTaskId *_liveTaskId;
    NSString *_finderUsername;
    MMFinderLiveTask *_finderLiveTask;
    MMFinderLiveImageOcrOp *_ocrOp;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveImageOcrOp *ocrOp; // @synthesize ocrOp=_ocrOp;
@property(retain, nonatomic) MMFinderLiveTask *finderLiveTask; // @synthesize finderLiveTask=_finderLiveTask;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(retain, nonatomic) MMLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
@property(retain, nonatomic) NSString *liveDescription; // @synthesize liveDescription=_liveDescription;
@property(retain, nonatomic) NSString *defaultLiveCoverUrl; // @synthesize defaultLiveCoverUrl=_defaultLiveCoverUrl;
@property(retain, nonatomic) NSString *liveCoverUrl; // @synthesize liveCoverUrl=_liveCoverUrl;
@property(retain, nonatomic) NSString *liveGameAuthTicket; // @synthesize liveGameAuthTicket=_liveGameAuthTicket;
@property(retain, nonatomic) FinderLocation *locationInfo; // @synthesize locationInfo=_locationInfo;
@property(retain, nonatomic) NSData *spamCheckInfo; // @synthesize spamCheckInfo=_spamCheckInfo;
@property(nonatomic) unsigned int currJoinTeamCoinValue; // @synthesize currJoinTeamCoinValue=_currJoinTeamCoinValue;
@property(nonatomic) unsigned int currJoinTeamMode; // @synthesize currJoinTeamMode=_currJoinTeamMode;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) int wxaGameLiveScene; // @synthesize wxaGameLiveScene=_wxaGameLiveScene;
@property(nonatomic) int createGameLiveScene; // @synthesize createGameLiveScene=_createGameLiveScene;
@property(nonatomic) long long entryScene; // @synthesize entryScene=_entryScene;
@property(retain, nonatomic) WCFinderLiveShareItem *shareItem; // @synthesize shareItem=_shareItem;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void)assembleSpamCheckInfoWithCoverPicFeature:(id)arg1 headImgPicFeat:(id)arg2;
- (void)asyncGetCreateLiveImageOcrSpamInfo:(id)arg1 appId:(id)arg2 coverImgUrl:(id)arg3 coverImgPath:(id)arg4 headImg:(id)arg5 headImgPath:(id)arg6 headUrl:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (void)createMiniGameLiveWithAckSpamMsg:(_Bool)arg1 successBlock:(CDUnknownBlockType)arg2;
- (void)createGameLivePrepareWithGeneralParamsModel:(id)arg1 gameLiveParams:(id)arg2 lotteryPanel:(id)arg3 Success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)updateLocationInfoWithCachedLocation:(id)arg1;
- (void)updateLiveGameAuthTicket:(id)arg1;
- (void)updateLiveDescription:(id)arg1;
- (void)updateLiveShareItem:(id)arg1;
- (void)updateGameLiveDataItemCompletion:(CDUnknownBlockType)arg1;
- (id)getLiveCoverUrl;
- (void)updateLiveCoverUrl:(id)arg1;
- (void)fetchLocation;
- (id)initWithLiveTaskId:(id)arg1 appId:(id)arg2 andGameLiveEntryScene:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

