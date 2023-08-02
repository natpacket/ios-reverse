//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMFinderLiveGiftNotificationItem, MMFinderLiveGiftPlayItem, MMFinderLiveRewardAppMsgInfo, NSString;

@interface MMFinderLiveGiftComboItem : NSObject
{
    _Bool _isBatchFinished;
    _Bool _manualDelete;
    NSString *_comboId;
    MMFinderLiveRewardAppMsgInfo *_rewardAppMsgInfo;
    MMFinderLiveGiftNotificationItem *_notificationItem;
    MMFinderLiveGiftPlayItem *_playItem;
    long long _displayingSeconds;
    long long _totalPlayCount;
    long long _remainsPlayCount;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool manualDelete; // @synthesize manualDelete=_manualDelete;
@property(nonatomic) long long remainsPlayCount; // @synthesize remainsPlayCount=_remainsPlayCount;
@property(nonatomic) long long totalPlayCount; // @synthesize totalPlayCount=_totalPlayCount;
@property(nonatomic) long long displayingSeconds; // @synthesize displayingSeconds=_displayingSeconds;
@property(nonatomic) _Bool isBatchFinished; // @synthesize isBatchFinished=_isBatchFinished;
@property(retain, nonatomic) MMFinderLiveGiftPlayItem *playItem; // @synthesize playItem=_playItem;
@property(retain, nonatomic) MMFinderLiveGiftNotificationItem *notificationItem; // @synthesize notificationItem=_notificationItem;
@property(retain, nonatomic) MMFinderLiveRewardAppMsgInfo *rewardAppMsgInfo; // @synthesize rewardAppMsgInfo=_rewardAppMsgInfo;
@property(retain, nonatomic) NSString *comboId; // @synthesize comboId=_comboId;

@end

