//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderTemplateSelectBasicViewController.h"

#import "WCFinderPostMgrDelegate-Protocol.h"

@class FinderMusicInfo, NSMutableArray, NSString, WCFinderPostMgr, WCFinderTemplateVideoEditViewModel;
@protocol WCFinderMusicTemplateSelectVCDelegate;

@interface WCFinderMusicTemplateSelectViewController : WCFinderTemplateSelectBasicViewController <WCFinderPostMgrDelegate>
{
    id <WCFinderMusicTemplateSelectVCDelegate> _delegate;
    WCFinderTemplateVideoEditViewModel *_templateEditViewModel;
    FinderMusicInfo *_musicInfo;
    NSMutableArray *_materialInfo;
    NSString *_currentDisplayTemplateId;
    WCFinderPostMgr *_postMgr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderPostMgr *postMgr; // @synthesize postMgr=_postMgr;
@property(copy, nonatomic) NSString *currentDisplayTemplateId; // @synthesize currentDisplayTemplateId=_currentDisplayTemplateId;
@property(retain, nonatomic) NSMutableArray *materialInfo; // @synthesize materialInfo=_materialInfo;
@property(retain, nonatomic) FinderMusicInfo *musicInfo; // @synthesize musicInfo=_musicInfo;
@property(retain, nonatomic) WCFinderTemplateVideoEditViewModel *templateEditViewModel; // @synthesize templateEditViewModel=_templateEditViewModel;
@property(nonatomic) __weak id <WCFinderMusicTemplateSelectVCDelegate> delegate; // @synthesize delegate=_delegate;
- (id)postMgrGetFinderMusicInfo;
- (id)postMgrGetRecommendedMusicInfo;
- (void)onPostMgrPresentToPostViewControllerComplete;
- (void)onPostMgrImagePickerClickCancel;
- (id)postMgrGetMusicInfo;
- (id)getMusicViewModel;
- (void)onClickDone;
- (void)onClickCancel;
- (id)getReportExtInfoWithTemplateId:(id)arg1;
- (void)reloadData;
- (void)viewDidLoad;
- (_Bool)shouldFetchDataAfterViewDidLoad;
- (id)createViewModel;
- (void)pauseVideo;
- (void)playVideo;
- (void)setupDisplayView;
- (void)createDemoVideo;
- (void)viewDidBeInteractivePoped;
- (void)viewDidBePushOrPresent:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

