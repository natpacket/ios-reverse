//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMFinderLiveResPathManagerProtocol-Protocol.h"

@class FinderLiveButtonInfo, MMFinderLiveBottomButtonAnimationItem, MMFinderLiveResDownloadManager, MMTimer, NSMutableArray, NSString;
@protocol MMFinderLiveBottomButtonStyleManagerDelegate;

@interface MMFinderLiveBottomButtonStyleManager : NSObject <MMFinderLiveResPathManagerProtocol>
{
    id <MMFinderLiveBottomButtonStyleManagerDelegate> _delegate;
    MMFinderLiveResDownloadManager *_downloadMgr;
    FinderLiveButtonInfo *_currentButtonInfo;
    NSMutableArray *_pendingAnimationItems;
    MMFinderLiveBottomButtonAnimationItem *_playingAnimationItem;
    MMTimer *_animationCountdownTimer;
    NSString *_liveShoppingButtonBubblePAGPath;
    NSString *_curColorHex;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *curColorHex; // @synthesize curColorHex=_curColorHex;
@property(retain, nonatomic) NSString *liveShoppingButtonBubblePAGPath; // @synthesize liveShoppingButtonBubblePAGPath=_liveShoppingButtonBubblePAGPath;
@property(retain, nonatomic) MMTimer *animationCountdownTimer; // @synthesize animationCountdownTimer=_animationCountdownTimer;
@property(retain, nonatomic) MMFinderLiveBottomButtonAnimationItem *playingAnimationItem; // @synthesize playingAnimationItem=_playingAnimationItem;
@property(retain, nonatomic) NSMutableArray *pendingAnimationItems; // @synthesize pendingAnimationItems=_pendingAnimationItems;
@property(retain, nonatomic) FinderLiveButtonInfo *currentButtonInfo; // @synthesize currentButtonInfo=_currentButtonInfo;
@property(retain, nonatomic) MMFinderLiveResDownloadManager *downloadMgr; // @synthesize downloadMgr=_downloadMgr;
@property(nonatomic) __weak id <MMFinderLiveBottomButtonStyleManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)zipPath:(id)arg1;
- (id)unzipPath:(id)arg1;
- (id)resPath:(id)arg1;
- (id)cachePath:(id)arg1;
- (id)cacheFolder;
- (void)cleanUnusedResources;
- (void)refreshResourceUsageAtPath:(id)arg1;
- (void)onAnimationTimerFired;
- (void)scheduleAnimationTimerIfNeeded;
- (void)tryPlayPendingAnimation;
- (void)onAnimationDownloadSuccess:(id)arg1 localFilePath:(id)arg2;
- (void)onAnimationDownloadFailed:(id)arg1;
- (void)handleButtonIconInfoResReady:(id)arg1 iconPath:(id)arg2 bgPath:(id)arg3;
- (_Bool)isString:(id)arg1 equalToOther:(id)arg2;
- (void)addNewAnimationInfos:(id)arg1;
- (void)handleButtonInfo:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

