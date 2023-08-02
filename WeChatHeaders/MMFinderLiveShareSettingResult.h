//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface MMFinderLiveShareSettingResult : NSObject
{
    int _currentLiveMode;
    unsigned int _trialTimeHour;
    unsigned int _trialTimeMinute;
    unsigned int _priceInWecoin;
    long long _currentVisibilityMode;
    NSArray *_selectedVisibleFileLists;
    NSArray *_orignalContactList;
    NSArray *_visibilityContactChatRoomIdList;
    NSArray *_visibilityContactUsernameList;
    long long _purchaseLivePreviewType;
    NSArray *_freeContactChatroomList;
    NSArray *_freeContactUsernameList;
    NSArray *_freeContactListForDigestDisplay;
    NSArray *_selectedFreeFileList;
}

+ (unsigned long long)transferSelectModeFromVisibilityMode:(long long)arg1 liveMode:(int)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *selectedFreeFileList; // @synthesize selectedFreeFileList=_selectedFreeFileList;
@property(retain, nonatomic) NSArray *freeContactListForDigestDisplay; // @synthesize freeContactListForDigestDisplay=_freeContactListForDigestDisplay;
@property(retain, nonatomic) NSArray *freeContactUsernameList; // @synthesize freeContactUsernameList=_freeContactUsernameList;
@property(retain, nonatomic) NSArray *freeContactChatroomList; // @synthesize freeContactChatroomList=_freeContactChatroomList;
@property(nonatomic) unsigned int priceInWecoin; // @synthesize priceInWecoin=_priceInWecoin;
@property(nonatomic) unsigned int trialTimeMinute; // @synthesize trialTimeMinute=_trialTimeMinute;
@property(nonatomic) unsigned int trialTimeHour; // @synthesize trialTimeHour=_trialTimeHour;
@property(nonatomic) long long purchaseLivePreviewType; // @synthesize purchaseLivePreviewType=_purchaseLivePreviewType;
@property(retain, nonatomic) NSArray *visibilityContactUsernameList; // @synthesize visibilityContactUsernameList=_visibilityContactUsernameList;
@property(retain, nonatomic) NSArray *visibilityContactChatRoomIdList; // @synthesize visibilityContactChatRoomIdList=_visibilityContactChatRoomIdList;
@property(retain, nonatomic) NSArray *orignalContactList; // @synthesize orignalContactList=_orignalContactList;
@property(retain, nonatomic) NSArray *selectedVisibleFileLists; // @synthesize selectedVisibleFileLists=_selectedVisibleFileLists;
@property(nonatomic) int currentLiveMode; // @synthesize currentLiveMode=_currentLiveMode;
@property(nonatomic) long long currentVisibilityMode; // @synthesize currentVisibilityMode=_currentVisibilityMode;

@end

