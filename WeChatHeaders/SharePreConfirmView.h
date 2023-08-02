//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIWindow.h"

#import "IMMGrowTextViewExt-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "IShortCutExt-Protocol.h"
#import "IUiUtilExt-Protocol.h"
#import "InputControllerDelegate-Protocol.h"
#import "MMGrowTextViewDelegate-Protocol.h"
#import "MMKernelExt-Protocol.h"
#import "MMSceneDelegateExt-Protocol.h"
#import "WCGroupUndoneEduViewDelegate-Protocol.h"

@class BaseMsgContentLogicController, ChatroomProfileView, DotLoadingView, EmoticonBoardView, MMGrowTextView, MMLoadingIndicatorView, MMUIButton, MMUILabel, NSArray, NSMutableSet, NSString, NamePreLabel, UIButton, UIImage, UIImageView, UILabel, UISwitch, UIView, UIViewController, WCGroupUndoneShareReport, WCInputController, WCPasteTextLengthLogic;
@protocol SharePreConfirmViewDelegate;

@interface SharePreConfirmView : MMUIWindow <IUiUtilExt, MMKernelExt, WCGroupUndoneEduViewDelegate, IShortCutExt, MMSceneDelegateExt, MMGrowTextViewDelegate, IMsgExt, InputControllerDelegate, IMMGrowTextViewExt>
{
    UIImageView *_inputView;
    EmoticonBoardView *_emoticonBoardView;
    UIButton *_expressionButton;
    MMGrowTextView *_textView;
    WCInputController *_inputController;
    UIImage *_thumbImage;
    NSString *_source;
    NSString *_thumbImageUrl;
    NSString *_defaultInputText;
    NSString *_defaultShowText;
    _Bool _isShowTextView;
    _Bool _hasInputSth;
    long long _currentOrientation;
    id <SharePreConfirmViewDelegate> _scvDelegate;
    WCPasteTextLengthLogic *pastelogic;
    NSString *_successText;
    UIView *m_textBackgroundImage;
    UIView *m_bottomView;
    UIImageView *m_backgroundView;
    UIView *m_backgroundBlurView;
    UILabel *m_titleView;
    UIView *m_headView;
    UIView *m_contentView;
    UIView *m_contentBlurView;
    UIView *m_preView;
    NamePreLabel *m_namePreView;
    UIView *m_barView;
    UIButton *m_chatroomInfoBtn;
    UIButton *m_preBackbutton;
    UIView *m_contentPreView;
    UIViewController *m_preViewController;
    BaseMsgContentLogicController *m_preViewMultiMsgLogic;
    ChatroomProfileView *m_chatroomTableViewInfo;
    long long m_statusBarOrientation;
    DotLoadingView *_loadingIndicator;
    UIView *_groupUndoneContentView;
    UISwitch *_gudSwitch;
    UILabel *_gudLabel;
    MMUIButton *_gudTipsBtn;
    NSMutableSet *m_accessViews;
    long long m_previousOrientation;
    MMLoadingIndicatorView *m_sendLoadingView;
    MMUILabel *m_sendLoadingLabel;
    _Bool _hideTitleView;
    _Bool _isFakeContact;
    _Bool _isTitleCenterWithouHeadImg;
    _Bool _canShowMsgList;
    _Bool _bShowGroupUndoneConfig;
    _Bool _bGroupUndoneFlag;
    _Bool _bShowWithRichtext;
    _Bool _isClickedSend;
    _Bool _bShouldHideContentArea;
    NSString *_title;
    NSArray *_m_msgRecordOriginList;
    NSString *_m_contentTitle;
    NSArray *_m_arrMsgs;
    NSArray *_m_arrToContacts;
    NSString *_fromAppName;
    NSString *_stayAtString;
    NSString *_confirmButtonTitle;
    NSString *_confirmButtonTips;
    NSString *_emoticonSource;
    WCGroupUndoneShareReport *_groupUndoneShareReport;
    UIImageView *_thumbImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(nonatomic) _Bool bShouldHideContentArea; // @synthesize bShouldHideContentArea=_bShouldHideContentArea;
@property(nonatomic) _Bool isClickedSend; // @synthesize isClickedSend=_isClickedSend;
@property(nonatomic) _Bool bShowWithRichtext; // @synthesize bShowWithRichtext=_bShowWithRichtext;
@property(retain, nonatomic) WCGroupUndoneShareReport *groupUndoneShareReport; // @synthesize groupUndoneShareReport=_groupUndoneShareReport;
@property(nonatomic) _Bool bGroupUndoneFlag; // @synthesize bGroupUndoneFlag=_bGroupUndoneFlag;
@property(nonatomic) _Bool bShowGroupUndoneConfig; // @synthesize bShowGroupUndoneConfig=_bShowGroupUndoneConfig;
@property(nonatomic) _Bool canShowMsgList; // @synthesize canShowMsgList=_canShowMsgList;
@property(nonatomic) _Bool isTitleCenterWithouHeadImg; // @synthesize isTitleCenterWithouHeadImg=_isTitleCenterWithouHeadImg;
@property(nonatomic) _Bool isFakeContact; // @synthesize isFakeContact=_isFakeContact;
@property(nonatomic) _Bool hideTitleView; // @synthesize hideTitleView=_hideTitleView;
@property(retain, nonatomic) NSString *emoticonSource; // @synthesize emoticonSource=_emoticonSource;
@property(retain, nonatomic) NSString *confirmButtonTips; // @synthesize confirmButtonTips=_confirmButtonTips;
@property(retain, nonatomic) NSString *confirmButtonTitle; // @synthesize confirmButtonTitle=_confirmButtonTitle;
@property(retain, nonatomic) NSString *stayAtString; // @synthesize stayAtString=_stayAtString;
@property(retain, nonatomic) NSString *fromAppName; // @synthesize fromAppName=_fromAppName;
@property(retain, nonatomic) NSArray *m_arrToContacts; // @synthesize m_arrToContacts=_m_arrToContacts;
@property(retain, nonatomic) NSArray *m_arrMsgs; // @synthesize m_arrMsgs=_m_arrMsgs;
@property(retain, nonatomic) NSString *m_contentTitle; // @synthesize m_contentTitle=_m_contentTitle;
@property(retain, nonatomic) NSArray *m_msgRecordOriginList; // @synthesize m_msgRecordOriginList=_m_msgRecordOriginList;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *successText; // @synthesize successText=_successText;
@property(retain, nonatomic) EmoticonBoardView *emoticonBoardView; // @synthesize emoticonBoardView=_emoticonBoardView;
@property(nonatomic) _Bool hasInputSth; // @synthesize hasInputSth=_hasInputSth;
@property(nonatomic) __weak id <SharePreConfirmViewDelegate> scvDelegate; // @synthesize scvDelegate=_scvDelegate;
@property(nonatomic) _Bool isShowTextView; // @synthesize isShowTextView=_isShowTextView;
@property(retain, nonatomic) NSString *defaultShowText; // @synthesize defaultShowText=_defaultShowText;
@property(retain, nonatomic) NSString *defaultInputText; // @synthesize defaultInputText=_defaultInputText;
@property(retain, nonatomic) NSString *thumbImageUrl; // @synthesize thumbImageUrl=_thumbImageUrl;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) UIImage *thumbImage; // @synthesize thumbImage=_thumbImage;
- (void)openAccessibilityAfterQuitPreview;
- (void)findAccessibilityViewAndClose:(id)arg1;
- (void)closeAccessbilityBeforeEnterPreview;
- (void)onPerformShortCut:(id)arg1;
- (void)onGUEConfirm:(id)arg1;
- (void)onGUEClose:(id)arg1;
- (void)onGUDSwitchChanged:(id)arg1;
- (void)onClickGroupUndoneTip:(id)arg1;
- (void)onSubSceneSizeChangedFrom:(struct CGSize)arg1 to:(struct CGSize)arg2;
- (id)svgIconName:(id)arg1 isHighlight:(_Bool)arg2;
- (void)onTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)moveToDefault;
- (void)moveAboveInputView;
- (void)onLoadImageOK:(id)arg1;
- (void)onKickQuit;
- (id)getWebThumbImage;
- (void)hideKeyBoard;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)reloadExpressionButtonImage:(long long)arg1;
- (void)onExpressionButtonClicked:(id)arg1;
- (_Bool)isFinderShareProductItem;
- (void)reportFinderShareProduct;
- (void)reportForwardTopicWithResult:(unsigned long long)arg1;
- (void)onCancel;
- (void)onConfirm;
- (void)emoticonBoardViewDidShow;
- (_Bool)shouldRespondToKeyBoardEvent;
- (void)keyboardDidHide;
- (void)textViewTextDidChange;
- (void)keyboardWillShow;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)didCommitEmptyText;
- (void)didCommitText:(id)arg1;
- (void)stayAtWeChat;
- (void)notifySendMsgOK;
- (void)showSendSuccessView;
- (void)resignInput;
- (void)becomeInput;
- (id)getBackgroundView;
- (void)initInputController;
- (void)initEmoticonView;
- (void)initInputToolView;
- (void)initBottomButtons;
- (void)recoverConfirmButton;
- (void)updateConfirmButtonState:(_Bool)arg1;
- (void)initLoadingViews:(id)arg1;
- (id)genBackgroundView;
- (id)blurEffectAlbumImage:(id)arg1 blurBgImageViewSize:(struct CGSize)arg2;
- (void)formMusicMVCardContentView:(id)arg1;
- (void)formGameLifeNameCardContentView:(id)arg1;
- (void)formFinderFeedContentView:(id)arg1;
- (void)formImageContentView:(id)arg1;
- (void)formEmoticonContentView:(id)arg1;
- (void)formLinkContentView:(id)arg1;
- (id)formFinderTopicShareContentViewCreateFeedView:(struct CGSize)arg1;
- (void)formFinderSharePOIRelatedContentView:(id)arg1;
- (void)formFinderColumnShareContentView:(id)arg1;
- (void)formFinderLiveBookShareContentView:(id)arg1;
- (void)formFinderLiveConnectInviteShareContentView:(id)arg1;
- (void)formFinderShopDisplayWindowShareContentView:(id)arg1;
- (void)formFinderGoodsShareContentView:(id)arg1;
- (void)formFinderLiveShareContentView:(id)arg1;
- (void)formFinderTopicShareContentView:(id)arg1;
- (void)formFinderGuaranteeContentView:(id)arg1;
- (void)formFinderEndorsementContentView:(id)arg1;
- (void)formFinderNameCardContentView:(id)arg1;
- (void)formFinderSharePureTextView:(id)arg1;
- (void)formFinderLongVideoShareContentView:(id)arg1;
- (void)formFinderShareContentView:(id)arg1;
- (void)formCardContentView:(id)arg1;
- (void)formRecordMsgContentView:(id)arg1;
- (void)formMultiMsgContentView;
- (void)formLocationMsgContentView:(id)arg1;
- (void)formNoteContentView:(id)arg1;
- (void)formContentViewByText:(id)arg1 desc:(id)arg2 previewSel:(SEL)arg3;
- (void)formContentViewByText:(id)arg1 previewSel:(SEL)arg2;
- (void)formContentViewByText:(id)arg1 lineNum:(long long)arg2;
- (void)formContentViewByText:(id)arg1 lineNum:(long long)arg2 width:(double)arg3 hideVoiceOver:(_Bool)arg4;
- (void)formContentViewByText:(id)arg1 desc:(id)arg2 lineNum:(long long)arg3 width:(double)arg4 hideVoiceOver:(_Bool)arg5;
- (void)formContentViewByText:(id)arg1 lineNum:(long long)arg2 width:(double)arg3;
- (void)initInputView;
- (void)initGroupUndoneView;
- (void)formGameVideoView:(id)arg1;
- (void)formNativeWeAppView:(id)arg1;
- (void)formWeAppView:(id)arg1;
- (void)setForwardThumbData:(id)arg1;
- (void)formTingListContentView:(id)arg1;
- (void)formTingAudioContentView:(id)arg1;
- (void)formTingLyricsContentView:(id)arg1;
- (void)initContentView;
- (void)initHeadViewBottomSperator:(id)arg1 margin:(double)arg2;
- (id)genHeadImageViewWithContract:(id)arg1;
- (id)genHeadViewWithMultiContract;
- (id)genHeadViewWithSingleContract;
- (void)initHeadView;
- (void)initTitleView;
- (void)viewLocationMsg:(id)arg1;
- (void)viewTextMsg:(id)arg1;
- (void)viewMultiMsg:(id)arg1;
- (void)viewNoteMsg:(id)arg1;
- (void)viewAssetSetMsg:(id)arg1;
- (void)viewRecordMsg:(id)arg1;
- (void)viewProductMsg:(id)arg1;
- (void)viewFileMediaMsg:(id)arg1;
- (void)viewMediaMsg:(id)arg1;
- (void)viewImageMsg:(id)arg1;
- (void)viewFileImageMsg:(id)arg1;
- (void)viewBecomeGuardianDisplayMsg:(id)arg1;
- (void)viewAuthorizeRequestDisplayMsg:(id)arg1;
- (void)viewImageWidthMsg:(id)arg1 img:(id)arg2;
- (void)viewMediaWidthMsg:(id)arg1 Path:(id)arg2;
- (void)viewFile:(id)arg1;
- (void)viewLink:(id)arg1;
- (void)showPreViewController:(id)arg1;
- (void)initMsgView:(id)arg1;
- (void)viewMsg:(id)arg1;
- (void)viewChatroomProfile:(id)arg1;
- (void)initChatroomProfileView:(id)arg1;
- (void)initOrUpdatePreViewMultiMsgLogicWithContact:(id)arg1;
- (void)onRoomInfoBack;
- (void)showPreViewAnimate:(_Bool)arg1 View:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)initPreViewAndBarView:(id)arg1 ContentView:(id)arg2;
- (void)addBlurView:(id)arg1 atPoint:(struct CGPoint)arg2;
- (id)getBlurView;
- (void)onPressBackBtn;
- (void)rotateToCurrentOrientation;
- (void)rotateToOrientation:(long long)arg1;
- (void)layoutSubviewToOrientation:(long long)arg1;
- (void)layoutLoadingView:(id)arg1;
- (void)layoutSubviews;
- (double)getVisibleHeight;
- (id)getInputText;
- (void)hideView:(_Bool)arg1;
- (void)doAnimation:(_Bool)arg1;
- (void)showView:(_Bool)arg1;
- (void)dealloc;
- (id)initWithCurrentWindow:(id)arg1;
- (id)initWithWindowScene:(id)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)internalInit;
- (void)setHidden:(_Bool)arg1;
- (void)unregisterEvent;
- (void)registerEvent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

