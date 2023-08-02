//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

#import "GameChatInputToolViewDelegate-Protocol.h"
#import "GameNoticeHalfScreenViewDelegate-Protocol.h"
#import "IWebviewResourceManagerExt-Protocol.h"
#import "MMLiteAppCloseExt-Protocol.h"
#import "MMLiteAppShowStatusChangeExt-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class EmoticonBoardView, GCInputAtModel, GCSelfUnTouchableView, GCWebInputToolView, GameChatRoomViewController, GameSkStoreController, NSDictionary, NSMutableDictionary, NSString, UIControl;

@interface WebviewJSEventHandler_gameCenterFacade : WebviewJSEventHandlerBase <GameChatInputToolViewDelegate, IWebviewResourceManagerExt, MMLiteAppShowStatusChangeExt, MMLiteAppCloseExt, WCActionSheetDelegate, GameNoticeHalfScreenViewDelegate>
{
    double _collapseChildHeight;
    double _expandChildHeight;
    GameChatRoomViewController *_childChatRoomVC;
    NSDictionary *_inputToolConfigDict;
    NSString *_inputIdentifierName;
    GCWebInputToolView *_inputToolView;
    UIControl *_inputBgView;
    GCSelfUnTouchableView *_inputLayerView;
    EmoticonBoardView *_emoticonBoardView;
    GCInputAtModel *_inputAtModel;
    GameSkStoreController *_skStoreController;
    NSMutableDictionary *_webDurationReportDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *webDurationReportDict; // @synthesize webDurationReportDict=_webDurationReportDict;
@property(retain, nonatomic) GameSkStoreController *skStoreController; // @synthesize skStoreController=_skStoreController;
@property(retain, nonatomic) GCInputAtModel *inputAtModel; // @synthesize inputAtModel=_inputAtModel;
@property(retain, nonatomic) EmoticonBoardView *emoticonBoardView; // @synthesize emoticonBoardView=_emoticonBoardView;
@property(retain, nonatomic) GCSelfUnTouchableView *inputLayerView; // @synthesize inputLayerView=_inputLayerView;
@property(retain, nonatomic) UIControl *inputBgView; // @synthesize inputBgView=_inputBgView;
@property(retain, nonatomic) GCWebInputToolView *inputToolView; // @synthesize inputToolView=_inputToolView;
@property(retain, nonatomic) NSString *inputIdentifierName; // @synthesize inputIdentifierName=_inputIdentifierName;
@property(retain, nonatomic) NSDictionary *inputToolConfigDict; // @synthesize inputToolConfigDict=_inputToolConfigDict;
@property(retain, nonatomic) GameChatRoomViewController *childChatRoomVC; // @synthesize childChatRoomVC=_childChatRoomVC;
@property(nonatomic) double expandChildHeight; // @synthesize expandChildHeight=_expandChildHeight;
@property(nonatomic) double collapseChildHeight; // @synthesize collapseChildHeight=_collapseChildHeight;
- (void)gameNoticeViewDidDismiss;
- (void)gameNoticeViewDidClickAdditionBtn;
- (void)gameNoticeViewDidConfirmWithCheck:(_Bool)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)initGameLiteApp:(id)arg1;
- (id)keyForCurrentLiteAppPageWithAppId:(id)arg1 appPtr:(unsigned long long)arg2 pageId:(unsigned int)arg3;
- (void)showAppStoreVc:(id)arg1;
- (void)preloadAppStoreVc:(id)arg1;
- (id)gameCenterPlugin;
- (void)updateClientReport:(id)arg1;
- (void)addWebViewReportExtInfo:(id)arg1;
- (void)setNavigationBarStatus:(id)arg1;
- (void)getGameWeakNetInfo:(id)arg1 params:(id)arg2;
- (void)postMessageToInteractWeb:(id)arg1 params:(id)arg2;
- (void)createInteractWebView:(id)arg1 params:(id)arg2;
- (void)showActionSheet:(id)arg1 params:(id)arg2;
- (void)saveBannerWebCache:(id)arg1 params:(id)arg2;
- (void)getGameBannerState:(id)arg1 params:(id)arg2;
- (void)changeGameBannerState:(id)arg1 params:(id)arg2;
- (void)updateGameBanner:(id)arg1 params:(id)arg2;
- (void)switchToGameTab:(id)arg1 params:(id)arg2;
- (void)notifyAccountState:(id)arg1 params:(id)arg2;
- (void)chatRoomAtMember:(id)arg1;
- (id)customEventParamFromEventInfo:(id)arg1;
- (void)gameWebTransfer:(id)arg1;
- (void)gameExtTransfer:(id)arg1;
- (void)browseEmoticonView:(id)arg1;
- (void)showInputToolView:(id)arg1;
- (void)downloadGameVideo:(id)arg1;
- (void)preloadVideoList:(id)arg1 params:(id)arg2;
- (void)cancelPreloadVideo:(id)arg1 params:(id)arg2;
- (void)showGameNoticeInfoView:(id)arg1 params:(id)arg2;
- (id)getParentMMUIViewController;
- (void)showToast:(id)arg1 params:(id)arg2;
- (void)fetchGameCenterEntranceInfo:(id)arg1 params:(id)arg2;
- (void)handleWithEventInfo:(id)arg1;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)dealloc;
- (id)customEventParamFromEventInfo:(id)arg1;
- (void)chatRoomAtMember:(id)arg1;
- (void)deleteChatRoomMemberByUserName:(id)arg1 params:(id)arg2;
- (void)searchChatRoomMemberByName:(id)arg1 params:(id)arg2;
- (id)findChatRoomViewController;
- (void)destoryChildGameChatroom:(id)arg1 params:(id)arg2;
- (void)changeChildGameChatroomState:(id)arg1 params:(id)arg2;
- (void)preloadChildGameChatroom:(id)arg1 params:(id)arg2;
- (void)quitGameLifeChatroom:(id)arg1 params:(id)arg2;
- (void)openGameLifeChatroom:(id)arg1 params:(id)arg2;
- (id)__arrCustomMenuItemsFromParams:(id)arg1 forKey:(id)arg2;
- (void)showGameShareWindow:(id)arg1 params:(id)arg2;
- (id)browseEmoticonViewWithParams:(id)arg1;
- (id)emojiInfoFromBase64Str:(id)arg1;
- (void)onInputViewShowChange:(_Bool)arg1;
- (void)notifyInputStateChange;
- (double)getVisibleHeight;
- (void)didSelectWithEmotcion:(id)arg1;
- (id)emojiInfoDictForEmojiWrap:(id)arg1;
- (id)imgParamDictFromEmoticon:(id)arg1 pickMmImage:(id)arg2;
- (void)onInputViewFrameChange;
- (void)didCommitText:(id)arg1;
- (void)textDidChanged:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)hideInputView;
- (void)onInputBgTouched;
- (void)showInputBgView:(_Bool)arg1;
- (void)setEmoticonBoardViewTypeStr:(id)arg1;
- (void)initInputToolViewIfNeed;
- (void)handleAtPannel;
- (void)showInputToolWithParamDict:(id)arg1 identifierName:(id)arg2;
- (void)saveMiniGameVideoToAlbum:(id)arg1 params:(id)arg2;
- (void)uploadMiniGameVideoToShare:(id)arg1 params:(id)arg2;
- (void)delMiniGameVideo:(id)arg1 params:(id)arg2;
- (id)dictionaryForVideoLocalInfo:(id)arg1;
- (void)getLocalMiniGameVideo:(id)arg1 params:(id)arg2;
- (void)addSignInfoIfNeedWithRequestParams:(id)arg1;
- (void)handleExtTransfer:(id)arg1 gameJsEvent:(id)arg2;
- (void)asyncCompleteWithEventInfo:(id)arg1 result:(id)arg2;
- (void)asymcCompleteWithMessage:(id)arg1 success:(_Bool)arg2 dict:(id)arg3 eventInfo:(id)arg4;
- (void)handleWebTransfer:(id)arg1 gameJsEvent:(id)arg2;
- (void)onLiteAppClose:(id)arg1 appPtr:(unsigned long long)arg2 extraData:(id)arg3;
- (void)onLiteAppShowStatusChange:(id)arg1 page:(id)arg2 appPtr:(unsigned long long)arg3 pageId:(unsigned int)arg4 show:(unsigned char)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

