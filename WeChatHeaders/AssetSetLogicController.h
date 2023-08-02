//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "ForwardMessageLogicDelegate-Protocol.h"
#import "ImgFullScreenViewControllerDelegate-Protocol.h"
#import "MsgDataSaveLogicDelegate-Protocol.h"

@class AssetSetView, CMessageWrap, ForwardMessageLogicController, MMUIViewController, MsgDataSaveLogic, NSArray, NSString;

@interface AssetSetLogicController : MMObject <ForwardMessageLogicDelegate, MsgDataSaveLogicDelegate, ImgFullScreenViewControllerDelegate>
{
    ForwardMessageLogicController *m_forwardMsgLogic;
    MsgDataSaveLogic *m_msgDataSaveLogic;
    NSArray *m_originDataList;
    CMessageWrap *m_originMsg;
    CMessageWrap *m_recordMsg;
    int _scene;
    AssetSetView *_view;
    CDUnknownBlockType _CustomExitAction;
    CDUnknownBlockType _CustomImgFastBrowseAction;
    CDUnknownBlockType _CustomMsgLocateAction;
    CDUnknownBlockType _CustomSpamAction;
    MMUIViewController *_viewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMUIViewController *viewController; // @synthesize viewController=_viewController;
@property(copy, nonatomic) CDUnknownBlockType CustomSpamAction; // @synthesize CustomSpamAction=_CustomSpamAction;
@property(copy, nonatomic) CDUnknownBlockType CustomMsgLocateAction; // @synthesize CustomMsgLocateAction=_CustomMsgLocateAction;
@property(copy, nonatomic) CDUnknownBlockType CustomImgFastBrowseAction; // @synthesize CustomImgFastBrowseAction=_CustomImgFastBrowseAction;
@property(copy, nonatomic) CDUnknownBlockType CustomExitAction; // @synthesize CustomExitAction=_CustomExitAction;
@property(retain, nonatomic) AssetSetView *view; // @synthesize view=_view;
@property(nonatomic) int scene; // @synthesize scene=_scene;
- (id)getOriginDataList;
- (id)getOriginMsg;
- (void)onImgFullScreenViewDidAppear;
- (id)getOriginViewAtIndex:(unsigned int)arg1;
- (struct CGRect)getOriginRectAtIndex:(unsigned int)arg1;
- (void)onMsgDataSaveLogicEnd:(_Bool)arg1 expiredMsgs:(id)arg2;
- (id)getViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)reportAction:(int)arg1 indexList:(id)arg2;
- (id)buildAssetSetMsgFromIndexList:(id)arg1;
- (id)buildFavItemFromDataList:(id)arg1;
- (id)buildRecordMsgFromIndexList:(id)arg1;
- (id)buildMsgListFromIndexList:(id)arg1;
- (id)getDataListFromIndexList:(id)arg1;
- (_Bool)isInPreview;
- (id)getDisplayTitle;
- (int)findIndexOfData:(id)arg1;
- (id)getDataAtIndex:(int)arg1;
- (int)getDataListCount;
- (void)handleClickDownloadWithIndexList:(id)arg1;
- (void)handleClickFavoriteWithIndexList:(id)arg1;
- (void)handleClickForwardWithIndexList:(id)arg1;
- (void)handleClickMultiSelect;
- (void)onSelectItemAtIndexPath:(id)arg1 originView:(id)arg2;
- (void)handleClickMsgLocate;
- (void)handleClickFavorite;
- (void)handleClickShareFriend:(id)arg1;
- (void)handleClickMore;
- (void)handleClickImgFastBrowse;
- (void)handleClickExit;
- (id)initWithRecordMsg:(id)arg1 dataList:(id)arg2 viewController:(id)arg3;
- (id)initWithMsg:(id)arg1 dataList:(id)arg2 viewController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

