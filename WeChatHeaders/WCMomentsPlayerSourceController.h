//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCPlayerEventExt-Protocol.h"

@class NSMutableArray, NSString, WCDataItem, WCMediaItem, WCMomentsPlayerSourceConfigurationContext, WCMomentsPlayerSourceDetermination, WCMomentsPlayerSourceSession;
@protocol WCMomentsPlayerSourceControllerDataSource, WCMomentsPlayerSourceControllerDelegate;

@interface WCMomentsPlayerSourceController : NSObject <WCPlayerEventExt>
{
    id <WCMomentsPlayerSourceControllerDataSource> _dataSource;
    id <WCMomentsPlayerSourceControllerDelegate> _delegate;
    WCDataItem *_dataItem;
    WCMediaItem *_mediaItem;
    long long _playerScene;
    long long _sourceStatus;
    CDUnknownBlockType _sourceStatusDidChangeBlock;
    long long _switchType;
    WCMomentsPlayerSourceConfigurationContext *_configurationContext;
    NSMutableArray *_CDN_downloadRecords;
    WCMomentsPlayerSourceSession *_session;
    WCMomentsPlayerSourceDetermination *_currentSourceDetermination;
}

+ (_Bool)hasDownloadedVideoHDForMediaItem:(id)arg1;
+ (_Bool)hasDownloadedVideoLDForMediaItem:(id)arg1;
+ (_Bool)hasDownloadedVideoForDownloadArgs:(id)arg1;
+ (id)generateDownloadArgsHDForMediaItem:(id)arg1;
+ (id)generateDownloadArgsLDForMediaItem:(id)arg1;
+ (id)generateDownloadArgsDEFForMediaItem:(id)arg1;
+ (id)descriptionForSourceStatus:(long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCMomentsPlayerSourceDetermination *currentSourceDetermination; // @synthesize currentSourceDetermination=_currentSourceDetermination;
@property(retain, nonatomic) WCMomentsPlayerSourceSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSMutableArray *CDN_downloadRecords; // @synthesize CDN_downloadRecords=_CDN_downloadRecords;
@property(retain, nonatomic) WCMomentsPlayerSourceConfigurationContext *configurationContext; // @synthesize configurationContext=_configurationContext;
@property(nonatomic) long long switchType; // @synthesize switchType=_switchType;
@property(copy, nonatomic) CDUnknownBlockType sourceStatusDidChangeBlock; // @synthesize sourceStatusDidChangeBlock=_sourceStatusDidChangeBlock;
@property(nonatomic) long long sourceStatus; // @synthesize sourceStatus=_sourceStatus;
@property(nonatomic) long long playerScene; // @synthesize playerScene=_playerScene;
@property(readonly, nonatomic) WCMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(readonly, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(nonatomic) __weak id <WCMomentsPlayerSourceControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <WCMomentsPlayerSourceControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)onPlayerSwitchDataSource:(id)arg1;
- (void)onPlayerDownloadStop:(id)arg1 downloadInfo:(id)arg2;
- (void)onPlayerDownloadComplete:(id)arg1 downloadInfo:(id)arg2;
- (void)onPlayerDownloadStartFail:(int)arg1 argsWrap:(id)arg2;
- (void)onPlayerDownloadMoovReady:(id)arg1 progressInfo:(id)arg2;
- (void)onPlayerStartDownload:(id)arg1;
- (_Bool)_isDownloadArgsMatched:(id)arg1;
- (void)didEnterFullScreen;
- (void)didFinishSwitchingSource;
- (void)willStartSwitchingSource;
- (void)playerSessionDidEnd;
- (void)playerSessionWillEnd:(id)arg1;
- (void)playerSessionDidStart:(id)arg1;
- (void)playerSessionWillStart;
- (void)_clearSession;
- (void)_createSession;
- (id)_prepareHDSwitchDownloadArgs;
- (id)prepareHDSwitchDownloadArgs;
- (id)_prepareFullScreenDownloadArgs;
- (id)prepareFullScreenDownloadArgs;
- (id)_preparePreviewDownloadArgs;
- (id)preparePreviewDownloadArgs;
- (id)_preparePreloadDownloadArgs;
- (id)preparePreloadDownloadArgs;
- (long long)getSwitchTypeFromSourceStatus:(long long)arg1;
- (void)updateSwitchTypeIfNeeded;
- (long long)getInitialSourceStatus;
@property(readonly, nonatomic) _Bool canSwitchSource;
- (void)_initConfigurationContext;
- (void)dealloc;
- (id)initWithDataItem:(id)arg1 mediaItem:(id)arg2;
- (int)durationMSFromStartTime:(id)arg1 toEndTime:(id)arg2;
- (long long)timestampMSWithTime:(id)arg1;
- (void)reportString_9_appendingEvents:(id)arg1;
- (void)reportString_8_appendingPrediction:(id)arg1;
- (void)reportString_7_appendingPlayerSwitchSource:(id)arg1;
- (void)reportString_6_appendingDownloadInfoForFullScreen:(id)arg1;
- (void)reportString_4_appendingDownloadInfoForFullScreen:(id)arg1;
- (void)reportString_5_appendingDownloadInfoForPreview:(id)arg1;
- (void)reportString_3_appendingDownloadInfoForPreview:(id)arg1;
- (void)reportString_2_appendingConfigurationResults:(id)arg1;
- (void)reportString_1_appendingConfigurations:(id)arg1;
- (void)reportString_0_appendingBaseInfo:(id)arg1;
- (id)validDownloadContextForFullScreen;
- (id)validDownloadContextForPreview;
- (void)reportPlayerSession;
- (_Bool)hasDownloadedVideoHD;
- (_Bool)hasDownloadedVideoLD;
- (id)generateDownloadArgsHD;
- (id)generateDownloadArgsLD;
- (id)generateDownloadArgsDEF;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
