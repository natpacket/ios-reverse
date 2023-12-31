//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "EGORefreshTableHeaderDelegate-Protocol.h"
#import "EmoticonSearchViewControllerDelegate-Protocol.h"
#import "InputControllerDelegate-Protocol.h"
#import "MMGrowTextViewDelegate-Protocol.h"
#import "MMUIHalfScreenViewControllerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCFinderCardWebViewControllerDelegate-Protocol.h"
#import "WCFinderCommentAdTableViewCellDelegate-Protocol.h"
#import "WCFinderCommentBaseViewProtocol-Protocol.h"
#import "WCFinderCommentDetailHeaderViewDelegate-Protocol.h"
#import "WCFinderCommentDetailViewModelDelegate-Protocol.h"
#import "WCFinderContentHeaderViewDelegate-Protocol.h"
#import "WCFinderFansProfileViewControllerDelegate-Protocol.h"
#import "WCFinderFeedBaseViewControllerProtocol-Protocol.h"
#import "WCFinderFeedDetailCommentCellActionDelegate-Protocol.h"
#import "WCFinderFeedDetailRootCommentCellDelegate-Protocol.h"
#import "WCFinderFeedbackViewDelegate-Protocol.h"
#import "WCFinderHalfScreenProtocol-Protocol.h"
#import "WCFinderRefreshTableFooterViewDelegate-Protocol.h"
#import "WCGeneralMonitorCellProtocol-Protocol.h"
#import "WCGeneralMonitorDelegate-Protocol.h"

@class EmojiInputView, EmoticonBoardView, EmoticonCustomManageAddLogic, MMUILabel, NSIndexPath, NSMutableSet, NSString, UIButton, UIImageView, UILabel, UIPanGestureRecognizer, UIScreenEdgePanGestureRecognizer, UITableView, UITapGestureRecognizer, UIView, WCFinderAdReportInfo, WCFinderAnimationLoadingView, WCFinderComment, WCFinderCommentDetailHeaderView, WCFinderCommentDetailTextView, WCFinderCommentDetailViewModel, WCFinderCommentIdentityActionSheetView, WCFinderCommentListHeaderRefreshView, WCFinderCommentSelfActionSheet, WCFinderContentHeaderView, WCFinderCreateCoordinator, WCFinderFeedbackView, WCFinderHeadImageView, WCFinderRefreshTableFooterView, WCInputController;
@protocol WCFinderCommentDetailViewControllerDelegate;

@interface WCFinderCommentDetailViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate, MMGrowTextViewDelegate, WCFinderCommentDetailHeaderViewDelegate, WCFinderRefreshTableFooterViewDelegate, InputControllerDelegate, WCFinderFeedDetailCommentCellActionDelegate, WCFinderCommentDetailViewModelDelegate, WCFinderFeedDetailRootCommentCellDelegate, EGORefreshTableHeaderDelegate, WCActionSheetDelegate, WCFinderFansProfileViewControllerDelegate, MMUIHalfScreenViewControllerDelegate, WCFinderContentHeaderViewDelegate, WCGeneralMonitorDelegate, WCGeneralMonitorCellProtocol, WCFinderCardWebViewControllerDelegate, WCFinderHalfScreenProtocol, EmoticonSearchViewControllerDelegate, WCFinderCommentAdTableViewCellDelegate, WCFinderFeedbackViewDelegate, WCFinderCommentBaseViewProtocol, WCFinderFeedBaseViewControllerProtocol>
{
    _Bool _statusBarHidden;
    _Bool _disableCommentFunctions;
    _Bool _callFromDetail;
    _Bool _isStatusBarColorBlack;
    _Bool _isCurrentRepaly;
    _Bool _isCurrentRepalySubComment;
    _Bool _shouldSaveLastCommentIdentity;
    _Bool _showTitle;
    id <WCFinderCommentDetailViewControllerDelegate> _delegate;
    unsigned long long _enterType;
    UITableView *_tableView;
    WCFinderCommentDetailTextView *_growTextView;
    UIView *_textViewBackGroundView;
    UIView *_inputBackView;
    UITapGestureRecognizer *_tapGesture;
    NSIndexPath *_currentRepalyIndexPath;
    WCFinderCommentDetailHeaderView *_headerView;
    UIView *_containerView;
    WCFinderRefreshTableFooterView *_footerView;
    UIButton *_expressionButton;
    UIButton *_backgroundButton;
    EmoticonBoardView *_emoticonBoardView;
    WCInputController *_inputController;
    UILabel *_stateTipsLabel;
    WCFinderAnimationLoadingView *_loadingView;
    WCFinderCommentDetailViewModel *_viewModel;
    UIView *_commentBackgroundView;
    unsigned long long _createTime;
    UIPanGestureRecognizer *_panGesture;
    WCFinderCommentListHeaderRefreshView *_headerRefreshView;
    UIView *_emptyHeaderView;
    UIView *_inputBottomView;
    WCFinderContentHeaderView *_contentHeaderView;
    WCFinderFeedbackView *_feedbackView;
    UIView *_authenticationErrorHeaderView;
    UILabel *_commentCloseTips;
    UIView *_lastTipHeaderView;
    unsigned long long _lastTipHeaderType;
    WCFinderCreateCoordinator *_createCoordinator;
    unsigned long long _commentTextMaxLimit;
    unsigned long long _commentInputMaxLineWrap;
    UIScreenEdgePanGestureRecognizer *_popBackInteractivePopGesture;
    unsigned long long _commentStyleType;
    double _inputViewDefaultHeight;
    MMUILabel *_educateDoubleIdentityLabel;
    UIView *_educateDoubleIdentityShadowView;
    UIView *_triangleBViewShadowView;
    UIImageView *_triangleBView;
    NSIndexPath *_indexPath;
    WCFinderHeadImageView *_avatarImageView;
    UIImageView *_iconImageView;
    WCFinderCommentIdentityActionSheetView *_identityActionSheet;
    double _lastCloseTimestamp;
    WCFinderAdReportInfo *_adReportInfo;
    UIView *_emojiInputBGView;
    EmojiInputView *_emojiInputView;
    EmoticonCustomManageAddLogic *_addEmoticonLogic;
    double _heightRatio;
    WCFinderComment *_showFansProfileComment;
    unsigned long long _viewerScene;
    WCFinderCommentSelfActionSheet *_selfActionSheet;
    NSMutableSet *_exposedKeywords;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *exposedKeywords; // @synthesize exposedKeywords=_exposedKeywords;
@property(retain, nonatomic) WCFinderCommentSelfActionSheet *selfActionSheet; // @synthesize selfActionSheet=_selfActionSheet;
@property(nonatomic) unsigned long long viewerScene; // @synthesize viewerScene=_viewerScene;
@property(retain, nonatomic) WCFinderComment *showFansProfileComment; // @synthesize showFansProfileComment=_showFansProfileComment;
@property(nonatomic) double heightRatio; // @synthesize heightRatio=_heightRatio;
@property(retain, nonatomic) EmoticonCustomManageAddLogic *addEmoticonLogic; // @synthesize addEmoticonLogic=_addEmoticonLogic;
@property(retain, nonatomic) EmojiInputView *emojiInputView; // @synthesize emojiInputView=_emojiInputView;
@property(retain, nonatomic) UIView *emojiInputBGView; // @synthesize emojiInputBGView=_emojiInputBGView;
@property(retain, nonatomic) WCFinderAdReportInfo *adReportInfo; // @synthesize adReportInfo=_adReportInfo;
@property(nonatomic) _Bool showTitle; // @synthesize showTitle=_showTitle;
@property(nonatomic) _Bool shouldSaveLastCommentIdentity; // @synthesize shouldSaveLastCommentIdentity=_shouldSaveLastCommentIdentity;
@property(nonatomic) double lastCloseTimestamp; // @synthesize lastCloseTimestamp=_lastCloseTimestamp;
@property(retain, nonatomic) WCFinderCommentIdentityActionSheetView *identityActionSheet; // @synthesize identityActionSheet=_identityActionSheet;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) WCFinderHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) UIImageView *triangleBView; // @synthesize triangleBView=_triangleBView;
@property(retain, nonatomic) UIView *triangleBViewShadowView; // @synthesize triangleBViewShadowView=_triangleBViewShadowView;
@property(retain, nonatomic) UIView *educateDoubleIdentityShadowView; // @synthesize educateDoubleIdentityShadowView=_educateDoubleIdentityShadowView;
@property(retain, nonatomic) MMUILabel *educateDoubleIdentityLabel; // @synthesize educateDoubleIdentityLabel=_educateDoubleIdentityLabel;
@property(nonatomic) double inputViewDefaultHeight; // @synthesize inputViewDefaultHeight=_inputViewDefaultHeight;
@property(nonatomic) unsigned long long commentStyleType; // @synthesize commentStyleType=_commentStyleType;
@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *popBackInteractivePopGesture; // @synthesize popBackInteractivePopGesture=_popBackInteractivePopGesture;
@property(nonatomic) unsigned long long commentInputMaxLineWrap; // @synthesize commentInputMaxLineWrap=_commentInputMaxLineWrap;
@property(nonatomic) unsigned long long commentTextMaxLimit; // @synthesize commentTextMaxLimit=_commentTextMaxLimit;
@property(retain, nonatomic) WCFinderCreateCoordinator *createCoordinator; // @synthesize createCoordinator=_createCoordinator;
@property(nonatomic) unsigned long long lastTipHeaderType; // @synthesize lastTipHeaderType=_lastTipHeaderType;
@property(nonatomic) __weak UIView *lastTipHeaderView; // @synthesize lastTipHeaderView=_lastTipHeaderView;
@property(retain, nonatomic) UILabel *commentCloseTips; // @synthesize commentCloseTips=_commentCloseTips;
@property(retain, nonatomic) UIView *authenticationErrorHeaderView; // @synthesize authenticationErrorHeaderView=_authenticationErrorHeaderView;
@property(retain, nonatomic) WCFinderFeedbackView *feedbackView; // @synthesize feedbackView=_feedbackView;
@property(retain, nonatomic) WCFinderContentHeaderView *contentHeaderView; // @synthesize contentHeaderView=_contentHeaderView;
@property(nonatomic) __weak UIView *inputBottomView; // @synthesize inputBottomView=_inputBottomView;
@property(retain, nonatomic) UIView *emptyHeaderView; // @synthesize emptyHeaderView=_emptyHeaderView;
@property(retain, nonatomic) WCFinderCommentListHeaderRefreshView *headerRefreshView; // @synthesize headerRefreshView=_headerRefreshView;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(nonatomic) unsigned long long createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) UIView *commentBackgroundView; // @synthesize commentBackgroundView=_commentBackgroundView;
@property(retain, nonatomic) WCFinderCommentDetailViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UILabel *stateTipsLabel; // @synthesize stateTipsLabel=_stateTipsLabel;
@property(retain, nonatomic) WCInputController *inputController; // @synthesize inputController=_inputController;
@property(retain, nonatomic) EmoticonBoardView *emoticonBoardView; // @synthesize emoticonBoardView=_emoticonBoardView;
@property(retain, nonatomic) UIButton *backgroundButton; // @synthesize backgroundButton=_backgroundButton;
@property(retain, nonatomic) UIButton *expressionButton; // @synthesize expressionButton=_expressionButton;
@property(retain, nonatomic) WCFinderRefreshTableFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) WCFinderCommentDetailHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) _Bool isCurrentRepalySubComment; // @synthesize isCurrentRepalySubComment=_isCurrentRepalySubComment;
@property(retain, nonatomic) NSIndexPath *currentRepalyIndexPath; // @synthesize currentRepalyIndexPath=_currentRepalyIndexPath;
@property(nonatomic) _Bool isCurrentRepaly; // @synthesize isCurrentRepaly=_isCurrentRepaly;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) UIView *inputBackView; // @synthesize inputBackView=_inputBackView;
@property(retain, nonatomic) UIView *textViewBackGroundView; // @synthesize textViewBackGroundView=_textViewBackGroundView;
@property(retain, nonatomic) WCFinderCommentDetailTextView *growTextView; // @synthesize growTextView=_growTextView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool isStatusBarColorBlack; // @synthesize isStatusBarColorBlack=_isStatusBarColorBlack;
@property(nonatomic) unsigned long long enterType; // @synthesize enterType=_enterType;
@property(nonatomic) __weak id <WCFinderCommentDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool callFromDetail; // @synthesize callFromDetail=_callFromDetail;
@property(nonatomic) _Bool disableCommentFunctions; // @synthesize disableCommentFunctions=_disableCommentFunctions;
@property(nonatomic) _Bool statusBarHidden; // @synthesize statusBarHidden=_statusBarHidden;
- (void)registerYReportSdk;
- (void)updateHalfScreenHeightRatio:(double)arg1;
- (id)getHalfContainerView;
- (_Bool)isInSubScene;
- (void)monitorView:(id)arg1 unExposedCells:(id)arg2;
- (void)monitorView:(id)arg1 newExposedCells:(id)arg2;
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
- (unsigned long long)feedViewerScene;
- (unsigned long long)feedViewControllerScene;
- (void)onSearchEmoticonViewControllerDidClose;
- (void)onSearchEmoticonViewControllerSendEmoticon:(id)arg1;
- (void)scrollToTop;
- (_Bool)hidesStatusBar;
- (_Bool)shouldStopPlayingVideo;
- (id)viewmodelOfCommentVC;
- (_Bool)presentWithAnimation;
- (void)enterShowKeyBoard;
- (_Bool)canUseCache;
- (unsigned long long)commentViewControllerShowType;
- (void)onHalfScreenPageWillClose:(id)arg1 action:(long long)arg2;
- (void)fansProfileViewController:(id)arg1 clickFinderActionWithWXUsername:(id)arg2;
- (void)fansProfileViewController:(id)arg1 clickPrivateMsgWithContact:(id)arg2 finderContact:(id)arg3 comment:(id)arg4;
- (void)fansProfileViewController:(id)arg1 clickActionWithComment:(id)arg2 type:(unsigned long long)arg3;
- (void)clickToToast;
- (void)egoRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (_Bool)egoRefreshTableHeaderDataSourceIsLoading:(id)arg1;
- (struct CGRect)containerViewFrame;
- (_Bool)isInProfileScene;
- (void)reportUserComment:(id)arg1;
- (_Bool)isSelfComment:(id)arg1;
- (_Bool)isSelfPostComment:(id)arg1;
- (_Bool)isSelfPostFeed;
- (void)showRevertBlackListActionViewWithComment:(id)arg1;
- (void)showBlackListActionViewWithComment:(id)arg1;
- (void)showDeleteconfirmActionSheetWithComment:(id)arg1 rootComment:(id)arg2;
- (void)showActionSheetWithComment:(id)arg1 rootComment:(id)arg2 emotionWrap:(id)arg3;
- (void)showActionSheetFromBigEmoticonWithEmotionWrap:(id)arg1 comment:(id)arg2;
- (void)showEmoticonBrowserVCwithEmoticonWrap:(id)arg1 comment:(id)arg2;
- (void)finderFeedSubCommentTableViewCell:(id)arg1 tapEmoticonView:(id)arg2 comment:(id)arg3 atIndexPath:(id)arg4;
- (void)finderFeedSubCommentTableViewCell:(id)arg1 likeComment:(id)arg2 atIndexPath:(id)arg3;
- (void)finderFeedSubCommentTableViewCell:(id)arg1 clickReplyUsername:(id)arg2 atIndexPath:(id)arg3;
- (void)onClickSubCommentNickname:(id)arg1;
- (void)onClickSubCommentAvatar:(id)arg1;
- (void)finderFeedSubCommentTableViewCell:(id)arg1 onLongPressAtIndexPath:(id)arg2;
- (void)onClickSubCommentReadMore:(id)arg1 isExpand:(_Bool)arg2;
- (void)finderFeedDataItemUpdate:(id)arg1;
- (void)startLoadingNextPage;
- (void)retryFetchNextPage;
- (void)showRetryNextPageFetchView;
- (void)retryEmptyFetchAction:(id)arg1;
- (void)showEmptyRetryFetchView;
- (void)onFinderCardWebViewControllerWillBeClosed;
- (void)onFinderCardWebViewControllerWillResume;
- (void)onFinderCardWebViewControllerJumpToOthers;
- (id)adFeedbackParamsWithSection:(unsigned long long)arg1;
- (void)onFinderFeedbackViewDidCancel:(id)arg1;
- (void)_closeFeedbackView:(id)arg1 toastText:(id)arg2;
- (void)onFinderFeedbackView:(id)arg1 shouldCloseWithReasons:(id)arg2;
- (void)onFinderFeedbackViewComplainButtonDidClick:(id)arg1;
- (void)onFinderFeedbackViewDislikeButtonDidClick:(id)arg1;
- (void)onFinderFeedbackViewLikeButtonDidClick:(id)arg1;
- (void)onClickCollectionAction:(id)arg1;
- (void)headerViewExpandText:(_Bool)arg1;
- (void)headerViewShowStateChanged:(_Bool)arg1;
- (void)_updateCommentDetailVCPushState;
- (void)_jumpWithJumpInfo:(id)arg1 style:(id)arg2;
- (void)onFeedClickJumpInfo:(id)arg1 style:(id)arg2;
- (void)onFinderJumpInfoViewDidClick:(id)arg1;
- (void)onClickUserHead:(id)arg1;
- (void)onClickUserHeadNickname:(id)arg1;
- (void)onClickUserHeadAvatar:(id)arg1;
- (id)getCommentMusicFromContentVM:(id)arg1;
- (void)onClickOriginalStatement:(id)arg1;
- (void)onClickMoreAction:(id)arg1;
- (void)onClickEventEntry:(id)arg1;
- (void)clickContentPOIAction:(id)arg1;
- (void)onClickContentExtReadingAction:(id)arg1;
- (void)onClickContentUsernameAction:(id)arg1;
- (void)onClickContentMentionAction:(id)arg1 nickname:(id)arg2 dataItem:(id)arg3;
- (void)onClickContentTopicAction:(id)arg1 dataItem:(id)arg2;
- (void)onClickContentReadMoreAction:(id)arg1 isExpand:(_Bool)arg2;
- (void)finderSelectAccountChange;
- (void)finderFeedCommentCloseStatusChange;
- (void)finderFeedCommentSubCommentFetchFailWithCommentID:(unsigned long long)arg1 direction:(unsigned long long)arg2 retCode:(int)arg3;
- (void)finderFeedCommentFetchByRefCommentWithTid:(id)arg1 refCommentID:(unsigned long long)arg2 refCommentIndexPath:(id)arg3;
- (void)showEmptyTipsView;
- (void)stopLoadingView;
- (void)finderFeedCommentFetchWithSpecialCode:(int)arg1;
- (void)finderFeedCommentPostNetworError:(int)arg1 errorMsg:(id)arg2 comment:(id)arg3;
- (void)finderFeedCommentNetworkError:(int)arg1 tid:(id)arg2 direction:(unsigned long long)arg3;
- (void)reloadSubCommentListWithRootComment:(unsigned long long)arg1;
- (void)reloadSectionWith:(unsigned long long)arg1;
- (void)finderFeedSubCommentPostTid:(id)arg1 rootCommentID:(unsigned long long)arg2;
- (void)finderFeedCommentFeedWasDeleted;
- (void)finderFeedCommentSubCommentDataChange:(unsigned long long)arg1;
- (void)finderFeedCommentClickRefcontentFullTextTid:(id)arg1 rootCommentID:(unsigned long long)arg2;
- (void)finderFeedCommentClickFullTextTid:(id)arg1 rootCommentID:(unsigned long long)arg2;
- (void)finderFeedCommentClickLikeTid:(id)arg1 rootCommentID:(unsigned long long)arg2;
- (void)finderFeedCommentPostTid:(id)arg1 commentID:(unsigned long long)arg2;
- (void)finderFeedCommentDataChange:(id)arg1;
- (void)finderFeedCommentIsEmpty:(id)arg1;
- (void)finderFeedCommentNoMoreData:(id)arg1 direction:(unsigned long long)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)_updateContentHeaderViewShowState;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onCommentClickWithComment:(id)arg1 clickKeyword:(struct WCFinderKeywordAction)arg2 forCell:(id)arg3;
- (void)showCommentProfileViewWithComment:(id)arg1;
- (void)rootCommentCell:(id)arg1 clickCommentRepostAtSection:(unsigned long long)arg2;
- (void)rootCommentCell:(id)arg1 clickNicknameAtSection:(unsigned long long)arg2;
- (void)rootCommentCell:(id)arg1 clickAvatarAtSection:(unsigned long long)arg2;
- (void)rootCommentCell:(id)arg1 longPressAtSection:(unsigned long long)arg2;
- (void)rootCommentCell:(id)arg1 clickFullRefContentTextAtSection:(unsigned long long)arg2 isExpand:(_Bool)arg3;
- (void)rootCommentCell:(id)arg1 clickFullTextAtSection:(unsigned long long)arg2 isExpand:(_Bool)arg3;
- (void)rootCommentCell:(id)arg1 likeCommentSection:(unsigned long long)arg2;
- (void)rootCommentCell:(id)arg1 clickTextViewAtSection:(unsigned long long)arg2;
- (void)rootCommentCell:(id)arg1 clickEmoticonView:(id)arg2 atSection:(unsigned long long)arg3 comment:(id)arg4;
- (void)rootCommentCell:(id)arg1 clickReplyUsername:(id)arg2 atSection:(unsigned long long)arg3;
- (void)commentAdCell:(id)arg1 clickFeedbackButton:(id)arg2 atSection:(unsigned long long)arg3;
- (void)commentAdCell:(id)arg1 longPressAtSection:(unsigned long long)arg2;
- (void)commentAdCell:(id)arg1 clickJumpInfo:(id)arg2 atSection:(unsigned long long)arg3;
- (void)commentAdCell:(id)arg1 clickFullTextAtSection:(unsigned long long)arg2 isExpand:(_Bool)arg3;
- (void)commentAdCell:(id)arg1 clickNicknameAtSection:(unsigned long long)arg2;
- (void)commentAdCell:(id)arg1 clickAvatarAtSection:(unsigned long long)arg2;
- (void)onClickSubCommentWeChat:(id)arg1;
- (void)onClickSubCommentFinder:(id)arg1;
- (void)showCommentUserProfileWithComment:(id)arg1;
- (void)replySubCommentAtIndex:(id)arg1 cell:(id)arg2;
- (void)replyRootCommentAtSection:(unsigned long long)arg1 cell:(id)arg2;
- (_Bool)isEnableTriggerRefreshAtScroll:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)handlePopGesture:(id)arg1;
- (void)handleTableViewPanGesture:(id)arg1;
- (void)keyboardDidShow:(double)arg1;
- (void)keyboardWillHide;
- (_Bool)shouldRespondToKeyBoardEvent;
- (void)MMGrowTextViewDidPasted:(id)arg1 pastedText:(id)arg2;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)didCommitText:(id)arg1;
- (void)onSelectEmoticonSearchItem;
- (void)growTextViewDidClickSendWithText:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)handleExcessiveWrap;
- (void)textViewTextDidChange;
- (void)keyboardDidHide;
- (void)onSelectorSelfDefinedEmotcion:(id)arg1;
- (void)closeCommentVC;
- (void)onClickCloseCommentDetailHeaderBtn;
- (void)reloadLastTipsInset;
- (void)showErrorTipsWithType:(unsigned long long)arg1;
- (void)clickErrorHeaderViewAction;
- (void)resignResponder;
- (void)exitEnterComment;
- (void)scrollCommentToTop;
- (void)viewWillBePresented:(_Bool)arg1;
- (_Bool)useBlackStatusbar;
- (id)navigationBarBackgroundColor;
- (void)reloadExpressionButtonImage:(long long)arg1;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)tapAction:(id)arg1;
- (void)requestInitDataWithAnimation;
- (void)updateCommentSpamState;
- (void)updateCommetIdentityView;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)updateTextViewPostCommentIdentity;
- (void)updateCommentIdentityStatus;
- (void)showEducateDoubleIdentityLabel;
- (void)hiddenEducateDoubleIdentityLabel;
- (void)clickCommentIdentityChange;
- (_Bool)isMentionByFeedAuthor;
- (void)addGrowTextView;
- (void)onBackgroundButtonClicked:(id)arg1;
- (void)checkMentionStateWhenSwitchIdentity;
- (void)setGrowTextViewPlaceholderWithReplyNickname:(id)arg1 isDefaultComment:(_Bool)arg2 useVMData:(_Bool)arg3;
- (void)setupInputView;
- (void)updateViewModelReplyScene:(int)arg1;
- (void)setUpTextView;
- (void)createEmojiInputView;
- (void)initEmoticonView;
- (void)setUpShowTitleView;
- (void)configureTableView;
- (void)updateCommentCountTitle;
- (void)emoticonBoardViewWillHide;
- (void)emoticonBoardViewDidShow;
- (void)keyboardDidShow;
- (void)keyboardWillShow;
- (void)tapBecomeFirstResponder;
- (void)activeInput;
- (void)initEducateDoubleIdentityLabel;
- (void)dealloc;
- (void)openCommentNextAction;
- (void)viewDidLoad;
- (void)resetUI;
- (id)tid;
- (void)restoreCommentIdentity;
- (void)correctCommentIdentity;
- (void)reloadLayout;
- (void)viewWillLayoutSubviews;
- (void)viewDidPop:(_Bool)arg1;
- (void)updateEducateLabelShowCount;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidPushOrPresent:(_Bool)arg1;
- (void)viewWillBePushOrPresent:(_Bool)arg1;
- (void)reportTopicInfo:(id)arg1 withReportType:(unsigned long long)arg2;
- (void)viewableExposeReport;
- (void)reportReferSomeone:(id)arg1 withEventType:(long long)arg2;
- (void)reportAvatarWithEventType:(long long)arg1;
- (void)reportRedPacketWithReportType:(long long)arg1;
- (void)reportEventWithReportType:(long long)arg1;
- (void)reportPOIWithReportType:(long long)arg1;
- (void)reportAdEntryWithJumperInfoView:(id)arg1 reportType:(long long)arg2;
- (void)reportAdEntryWithReportType:(long long)arg1;
- (id)jumpInfoStyleToDict:(id)arg1;
- (void)reportUniversalJumperWithJumperInfoView:(id)arg1 eventType:(unsigned long long)arg2;
- (void)prefetchUniversalJumperWithJumpInfo:(id)arg1;
- (void)reportExposeAction;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithViewModel:(id)arg1 showTitle:(_Bool)arg2 enterType:(unsigned long long)arg3 viewerScene:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

