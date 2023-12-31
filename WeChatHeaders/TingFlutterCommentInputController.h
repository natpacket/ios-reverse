//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "InputControllerDelegate-Protocol.h"
#import "MMGrowTextViewDelegate-Protocol.h"
#import "MMUIHalfScreenViewControllerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCCommentDetailViewModelDelegate-Protocol.h"
#import "WCFinderCommentDetailTextViewMentionDelegate-Protocol.h"
#import "WCGeneralMonitorDelegate-Protocol.h"

@class CommentInputRequest, EmoticonBoardView, FinderCommentInfo, NSMutableArray, NSString, TingMusicCommentCallBack, UIButton, UIImageView, UIView, WCCommentInputView, WCFinderCommentDetailTextView, WCFinderCommentIdentityActionSheetView, WCFinderHeadImageView, WCInputController;

@interface TingFlutterCommentInputController : UIViewController <InputControllerDelegate, MMGrowTextViewDelegate, UIGestureRecognizerDelegate, WCActionSheetDelegate, MMUIHalfScreenViewControllerDelegate, WCGeneralMonitorDelegate, WCFinderCommentDetailTextViewMentionDelegate, WCCommentDetailViewModelDelegate>
{
    CDUnknownBlockType _keyboardDidHideHandler;
    WCInputController *_inputController;
    WCCommentInputView *_inputBackView;
    double _inputViewDefaultHeight;
    UIView *_textViewBackGroundView;
    UIView *_commentBackgroundView;
    WCFinderCommentDetailTextView *_growTextView;
    WCFinderHeadImageView *_avatarImageView;
    UIButton *_expressionButton;
    UIImageView *_iconImageView;
    EmoticonBoardView *_emoticonBoardView;
    unsigned long long _commentTextMaxLimit;
    unsigned long long _commentStyleType;
    NSMutableArray *_pastedStrArray;
    NSMutableArray *_commitPastedStrArray;
    WCFinderCommentIdentityActionSheetView *_identityActionSheet;
    CommentInputRequest *_inputRequest;
    CDUnknownBlockType _inputResult;
    FinderCommentInfo *_replyCommentInfo;
    TingMusicCommentCallBack *_commentCallback;
    struct _NSRange _commentTextViewLatestSelectionRange;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TingMusicCommentCallBack *commentCallback; // @synthesize commentCallback=_commentCallback;
@property(retain, nonatomic) FinderCommentInfo *replyCommentInfo; // @synthesize replyCommentInfo=_replyCommentInfo;
@property(copy, nonatomic) CDUnknownBlockType inputResult; // @synthesize inputResult=_inputResult;
@property(retain, nonatomic) CommentInputRequest *inputRequest; // @synthesize inputRequest=_inputRequest;
@property(retain, nonatomic) WCFinderCommentIdentityActionSheetView *identityActionSheet; // @synthesize identityActionSheet=_identityActionSheet;
@property(nonatomic) struct _NSRange commentTextViewLatestSelectionRange; // @synthesize commentTextViewLatestSelectionRange=_commentTextViewLatestSelectionRange;
@property(retain, nonatomic) NSMutableArray *commitPastedStrArray; // @synthesize commitPastedStrArray=_commitPastedStrArray;
@property(retain, nonatomic) NSMutableArray *pastedStrArray; // @synthesize pastedStrArray=_pastedStrArray;
@property(nonatomic) unsigned long long commentStyleType; // @synthesize commentStyleType=_commentStyleType;
@property(nonatomic) unsigned long long commentTextMaxLimit; // @synthesize commentTextMaxLimit=_commentTextMaxLimit;
@property(retain, nonatomic) EmoticonBoardView *emoticonBoardView; // @synthesize emoticonBoardView=_emoticonBoardView;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIButton *expressionButton; // @synthesize expressionButton=_expressionButton;
@property(retain, nonatomic) WCFinderHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) WCFinderCommentDetailTextView *growTextView; // @synthesize growTextView=_growTextView;
@property(retain, nonatomic) UIView *commentBackgroundView; // @synthesize commentBackgroundView=_commentBackgroundView;
@property(retain, nonatomic) UIView *textViewBackGroundView; // @synthesize textViewBackGroundView=_textViewBackGroundView;
@property(nonatomic) double inputViewDefaultHeight; // @synthesize inputViewDefaultHeight=_inputViewDefaultHeight;
@property(retain, nonatomic) WCCommentInputView *inputBackView; // @synthesize inputBackView=_inputBackView;
@property(retain, nonatomic) WCInputController *inputController; // @synthesize inputController=_inputController;
@property(copy, nonatomic) CDUnknownBlockType keyboardDidHideHandler; // @synthesize keyboardDidHideHandler=_keyboardDidHideHandler;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showEducateDoubleIdentity;
- (void)keyboardDidHide;
- (void)keyboardWillHide;
- (void)keyboardDidShow;
- (void)keyboardDidShow:(double)arg1;
- (void)keyboardWillShow;
- (void)emoticonBoardViewWillHide;
- (void)emoticonBoardViewDidShow;
- (void)didCommitPastedArray;
- (void)cleanPastedTextArray;
- (void)addPastedText:(id)arg1;
- (id)willPostComment:(id)arg1;
- (void)didCommitText:(id)arg1;
- (void)didCommitEmptyText;
- (_Bool)canCommitWithText:(id)arg1;
- (void)clearCurrentInput;
- (void)growTextViewDidClickSendWithText:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)textViewTextDidChange;
- (void)MMGrowTextViewDidPasted:(id)arg1 pastedText:(id)arg2;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)clickToToast;
- (void)updateCommentSpamState;
- (_Bool)commentFunctionIsSpam;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)clickCommentIdentityChange;
- (void)reloadExpressionButtonImage:(long long)arg1;
- (void)setGrowTextViewPlaceholderWithReplyNickname:(id)arg1 isDefaultComment:(_Bool)arg2 useVMData:(_Bool)arg3;
- (void)updateCommetIdentityView;
- (void)updateTextViewPostCommentIdentity;
- (void)updateCommentIdentityStatus;
- (double)inputViewYForInputController;
- (void)addGrowTextView;
- (id)commentIdentityNickname;
- (id)postAuthorIconImageColor;
- (struct CGSize)inputBackViewSize;
- (void)layoutInputBackView;
- (double)getVisibleHeight;
- (void)setupInputView;
- (void)setUpTextView;
- (double)defaultInputBottomViewHeight;
- (void)initEmoticonView;
- (unsigned long long)getCommentIdentityType;
- (void)updateCommentIdentityType:(unsigned long long)arg1;
- (_Bool)isSelfComment:(id)arg1;
- (_Bool)isSelfPostComment:(id)arg1;
- (_Bool)isFinderComment:(unsigned long long)arg1;
- (void)setupFlutterCallback:(id)arg1;
- (void)resignInput:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resetComment;
- (void)exitEnterComment;
- (void)resignResponder;
- (void)tapBecomeFirstResponder;
- (void)activeInput:(id)arg1 resultHanlder:(CDUnknownBlockType)arg2;
- (void)resetUI;
- (void)reloadLayout;
- (void)layoutIconImageView;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (id)containerView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

