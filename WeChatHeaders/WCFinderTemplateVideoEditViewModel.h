//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MJTemplateSessionDelegate-Protocol.h"

@class MJTemplateSession, NSArray, NSMutableArray, NSString, OMJMovieOptions;

@interface WCFinderTemplateVideoEditViewModel : NSObject <MJTemplateSessionDelegate>
{
    _Bool _onlyImageEdit;
    MJTemplateSession *_templateSession;
    NSString *_firstVideoPath;
    OMJMovieOptions *_movieOptions;
    NSMutableArray *_musicInfos;
    NSArray *_assetInfos;
    NSArray *_templateInfos;
}

+ (id)movieOptionsWithLyricEnable:(_Bool)arg1 ostMuted:(_Bool)arg2 bgmMuted:(_Bool)arg3;
+ (id)genOutputParmsWithTemplateInfo:(id)arg1 musicInfo:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool onlyImageEdit; // @synthesize onlyImageEdit=_onlyImageEdit;
@property(retain, nonatomic) NSArray *templateInfos; // @synthesize templateInfos=_templateInfos;
@property(retain, nonatomic) NSArray *assetInfos; // @synthesize assetInfos=_assetInfos;
@property(retain, nonatomic) NSMutableArray *musicInfos; // @synthesize musicInfos=_musicInfos;
@property(retain, nonatomic) OMJMovieOptions *movieOptions; // @synthesize movieOptions=_movieOptions;
@property(copy, nonatomic) NSString *firstVideoPath; // @synthesize firstVideoPath=_firstVideoPath;
@property(retain, nonatomic) MJTemplateSession *templateSession; // @synthesize templateSession=_templateSession;
- (_Bool)templateSessionCanContinueStartUpCore;
- (id)assetInfosWithMaterialInfos:(id)arg1;
- (void)changeTemplateWithTemplate:(id)arg1 musicID:(id)arg2 progressBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)changeTemplateWithTemplate:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)changeMusicInfo:(id)arg1 option:(id)arg2 progressBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)changeMusicInfo:(id)arg1 isBgmMuted:(_Bool)arg2 progressBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)changeMusicInfo:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)musicIndexOfMusicId:(id)arg1;
- (id)templateIdAtIndex:(unsigned long long)arg1;
- (id)templateInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)templateCount;
- (void)safeInsertMusicToFront:(id)arg1;
- (id)musicInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)musicCount;
- (id)genMutableArrayWithArray:(id)arg1;
- (_Bool)isBGMMuted;
- (_Bool)isOSTMuted;
- (_Bool)isLyricEnable;
- (void)setStateOfOST:(_Bool)arg1 bgm:(_Bool)arg2 lyricEnable:(_Bool)arg3;
- (void)setBGMMuted:(_Bool)arg1;
- (void)updateMovieOptions:(id)arg1;
- (id)finderDefaultTemplateMovieOptions;
- (id)emptyTemplateMovieOptions;
- (id)currentMovieOptions;
- (void)cleanUpMovieSessionWithCompletion:(CDUnknownBlockType)arg1;
- (void)cleanUpWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)stopPlayWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)cancelExportingWithCompletion:(CDUnknownBlockType)arg1;
- (void)startExportingWithProgressBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)startPlayWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)renderView;
- (void)startMoiveCreationWithTemplateId:(id)arg1 musicId:(id)arg2 progressBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (_Bool)hasLoadingTemplate;
- (void)genNotUseVideoTemplateAndLoadingTemplateWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)startMoiveCreationAndFetchRecTemplateProgressBlock:(CDUnknownBlockType)arg1 recommendTemplateFetchCompletionBlock:(CDUnknownBlockType)arg2;
- (void)startBlankMoiveCreationAndFetchRecTemplateProgressBlock:(CDUnknownBlockType)arg1 movieCompletionBlock:(CDUnknownBlockType)arg2 needRecommendTemplate:(_Bool)arg3 recommendTemplateFetchCompletionBlock:(CDUnknownBlockType)arg4;
- (void)startBlankMoiveCreationAndFetchFromWeChatSvrWithProgressBlock:(CDUnknownBlockType)arg1 movieCompletionBlock:(CDUnknownBlockType)arg2 recommendTemplateFetchCompletionBlock:(CDUnknownBlockType)arg3;
- (_Bool)createMovieSession;
- (void)startUpMaasCoreWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)hasStartUpMaasCore;
- (id)initWithMaterialInfos:(id)arg1 firstVideoPath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

