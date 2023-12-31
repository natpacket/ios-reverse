//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FinderJumpInfo, FinderLivePromotionEntrance, FinderLiveTagInfo, FinderLiveUserAttrUserSetting, LiveRoomImg, LiveWeappJumpInfo, MMFinderLiveContentVM, NSArray, NSMutableArray, NSString, SongListInfo, SpamRisk, WCFinderStarterLiveViewModel;

@interface MMFinderLiveStartParamsModel : NSObject
{
    unsigned int _userFlag;
    unsigned int _liveGlobalFlag;
    unsigned int _maxVisibilityChatroomCount;
    unsigned int _maxVisibilityFriendContactCount;
    unsigned int _maxRedPacketChatroomCount;
    unsigned int _shoppingNotAvailableFlag;
    unsigned int _randomConnectMicWaitTime;
    unsigned int _anchorPushMode;
    NSString *_finderUsername;
    NSArray *_liveNoticeList;
    MMFinderLiveContentVM *_recoverVM;
    NSArray *_allTags;
    FinderLiveTagInfo *_currentTag;
    NSMutableArray *_visibilityFileList;
    long long _redPacketChatroomSelectionStyle;
    SpamRisk *_spamJumpInfo;
    NSString *_anchorUsername;
    FinderLiveUserAttrUserSetting *_userSetting;
    SongListInfo *_songListInfo;
    LiveWeappJumpInfo *_weappJumpInfo;
    FinderLivePromotionEntrance *_promotionEntrance;
    LiveRoomImg *_liveRoomImages;
    WCFinderStarterLiveViewModel *_starterViewModel;
    FinderJumpInfo *_creatorCenterEntrance;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderJumpInfo *creatorCenterEntrance; // @synthesize creatorCenterEntrance=_creatorCenterEntrance;
@property(nonatomic) unsigned int anchorPushMode; // @synthesize anchorPushMode=_anchorPushMode;
@property(retain, nonatomic) WCFinderStarterLiveViewModel *starterViewModel; // @synthesize starterViewModel=_starterViewModel;
@property(retain, nonatomic) LiveRoomImg *liveRoomImages; // @synthesize liveRoomImages=_liveRoomImages;
@property(retain, nonatomic) FinderLivePromotionEntrance *promotionEntrance; // @synthesize promotionEntrance=_promotionEntrance;
@property(retain, nonatomic) LiveWeappJumpInfo *weappJumpInfo; // @synthesize weappJumpInfo=_weappJumpInfo;
@property(retain, nonatomic) SongListInfo *songListInfo; // @synthesize songListInfo=_songListInfo;
@property(retain, nonatomic) FinderLiveUserAttrUserSetting *userSetting; // @synthesize userSetting=_userSetting;
@property(nonatomic) unsigned int randomConnectMicWaitTime; // @synthesize randomConnectMicWaitTime=_randomConnectMicWaitTime;
@property(retain, nonatomic) NSString *anchorUsername; // @synthesize anchorUsername=_anchorUsername;
@property(nonatomic) unsigned int shoppingNotAvailableFlag; // @synthesize shoppingNotAvailableFlag=_shoppingNotAvailableFlag;
@property(retain, nonatomic) SpamRisk *spamJumpInfo; // @synthesize spamJumpInfo=_spamJumpInfo;
@property(nonatomic) long long redPacketChatroomSelectionStyle; // @synthesize redPacketChatroomSelectionStyle=_redPacketChatroomSelectionStyle;
@property(nonatomic) unsigned int maxRedPacketChatroomCount; // @synthesize maxRedPacketChatroomCount=_maxRedPacketChatroomCount;
@property(nonatomic) unsigned int maxVisibilityFriendContactCount; // @synthesize maxVisibilityFriendContactCount=_maxVisibilityFriendContactCount;
@property(nonatomic) unsigned int maxVisibilityChatroomCount; // @synthesize maxVisibilityChatroomCount=_maxVisibilityChatroomCount;
@property(retain, nonatomic) NSMutableArray *visibilityFileList; // @synthesize visibilityFileList=_visibilityFileList;
@property(retain, nonatomic) FinderLiveTagInfo *currentTag; // @synthesize currentTag=_currentTag;
@property(retain, nonatomic) NSArray *allTags; // @synthesize allTags=_allTags;
@property(nonatomic) unsigned int liveGlobalFlag; // @synthesize liveGlobalFlag=_liveGlobalFlag;
@property(nonatomic) unsigned int userFlag; // @synthesize userFlag=_userFlag;
@property(retain, nonatomic) MMFinderLiveContentVM *recoverVM; // @synthesize recoverVM=_recoverVM;
@property(retain, nonatomic) NSArray *liveNoticeList; // @synthesize liveNoticeList=_liveNoticeList;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;

@end

