//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface MMFinderLiveShareSettingInitParams : NSObject
{
    _Bool _forceDarkMode;
    _Bool _bindNotice;
    int _currentLiveMode;
    unsigned int _priceInWecoin;
    unsigned int _trialTimeHour;
    unsigned int _trialTimeMinute;
    long long _currentVisibilityMode;
    NSArray *_allVisibilityFileList;
    NSArray *_selectedVisibleFileLists;
    NSArray *_redPacketChooseIdList;
    NSArray *_visibilityContactChatRoomIdList;
    NSArray *_visibilityContactUsernameList;
    unsigned long long _chatroomContactSelectLimit;
    unsigned long long _contactFriendSelectLimit;
    NSArray *_freeContactChatroomList;
    NSArray *_freeContactUsernameList;
    NSArray *_freeContactListForDigestDisplay;
    NSArray *_selectedFreeFileList;
    unsigned long long _shareEntrySource;
    long long _purchaseLivePreviewType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int trialTimeMinute; // @synthesize trialTimeMinute=_trialTimeMinute;
@property(nonatomic) unsigned int trialTimeHour; // @synthesize trialTimeHour=_trialTimeHour;
@property(nonatomic) long long purchaseLivePreviewType; // @synthesize purchaseLivePreviewType=_purchaseLivePreviewType;
@property(nonatomic) _Bool bindNotice; // @synthesize bindNotice=_bindNotice;
@property(nonatomic) _Bool forceDarkMode; // @synthesize forceDarkMode=_forceDarkMode;
@property(nonatomic) unsigned long long shareEntrySource; // @synthesize shareEntrySource=_shareEntrySource;
@property(nonatomic) unsigned int priceInWecoin; // @synthesize priceInWecoin=_priceInWecoin;
@property(retain, nonatomic) NSArray *selectedFreeFileList; // @synthesize selectedFreeFileList=_selectedFreeFileList;
@property(retain, nonatomic) NSArray *freeContactListForDigestDisplay; // @synthesize freeContactListForDigestDisplay=_freeContactListForDigestDisplay;
@property(retain, nonatomic) NSArray *freeContactUsernameList; // @synthesize freeContactUsernameList=_freeContactUsernameList;
@property(retain, nonatomic) NSArray *freeContactChatroomList; // @synthesize freeContactChatroomList=_freeContactChatroomList;
@property(nonatomic) unsigned long long contactFriendSelectLimit; // @synthesize contactFriendSelectLimit=_contactFriendSelectLimit;
@property(nonatomic) unsigned long long chatroomContactSelectLimit; // @synthesize chatroomContactSelectLimit=_chatroomContactSelectLimit;
@property(retain, nonatomic) NSArray *visibilityContactUsernameList; // @synthesize visibilityContactUsernameList=_visibilityContactUsernameList;
@property(retain, nonatomic) NSArray *visibilityContactChatRoomIdList; // @synthesize visibilityContactChatRoomIdList=_visibilityContactChatRoomIdList;
@property(retain, nonatomic) NSArray *redPacketChooseIdList; // @synthesize redPacketChooseIdList=_redPacketChooseIdList;
@property(retain, nonatomic) NSArray *selectedVisibleFileLists; // @synthesize selectedVisibleFileLists=_selectedVisibleFileLists;
@property(retain, nonatomic) NSArray *allVisibilityFileList; // @synthesize allVisibilityFileList=_allVisibilityFileList;
@property(nonatomic) int currentLiveMode; // @synthesize currentLiveMode=_currentLiveMode;
@property(nonatomic) long long currentVisibilityMode; // @synthesize currentVisibilityMode=_currentVisibilityMode;

@end
