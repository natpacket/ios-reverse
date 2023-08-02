//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMWebViewPluginBase.h"

#import "BaseEmoticonViewDelegate-Protocol.h"
#import "EmoticonBoardViewDelegate-Protocol.h"
#import "InputControllerDelegate-Protocol.h"

@class EmoticonBoardView, MMGrowTextView, MMUIButton, MMUILabel, NSString, UIButton, UILabel, UIView, WCInputController;

@interface MMWebViewPlugin_InputKeyboard : MMWebViewPluginBase <EmoticonBoardViewDelegate, BaseEmoticonViewDelegate, InputControllerDelegate>
{
    CDUnknownBlockType _inputTextCallbackBlock;
    unsigned long long _maxInputLen;
    unsigned long long _showRemindWordCount;
    WCInputController *_inputController;
    UIView *_inputView;
    EmoticonBoardView *_emoticonBoardView;
    UIView *_clickSensingView;
    UIButton *_expressionButton;
    UILabel *_bottomRemindLabel;
    MMGrowTextView *_growTextView;
    NSString *_finishText;
    _Bool _bIsAlreadySendEvent;
    _Bool _bIsShowJSKeyBoard;
    _Bool _bOnlyShowSmileyPanel;
    double _smileyPanelDuration;
    unsigned long long _currentShowType;
    MMUIButton *_commentCancelBtn;
    MMUILabel *_writeCommentLabel;
    UIView *_backgroundGuardView;
    UIView *_seperatorLine;
    double _editBoxHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double editBoxHeight; // @synthesize editBoxHeight=_editBoxHeight;
@property(retain, nonatomic) UIView *seperatorLine; // @synthesize seperatorLine=_seperatorLine;
@property(retain, nonatomic) UIView *backgroundGuardView; // @synthesize backgroundGuardView=_backgroundGuardView;
@property(retain, nonatomic) MMUILabel *writeCommentLabel; // @synthesize writeCommentLabel=_writeCommentLabel;
@property(retain, nonatomic) MMUIButton *commentCancelBtn; // @synthesize commentCancelBtn=_commentCancelBtn;
@property(nonatomic) unsigned long long currentShowType; // @synthesize currentShowType=_currentShowType;
@property(nonatomic) _Bool m_bIsShowJSKeyBoard; // @synthesize m_bIsShowJSKeyBoard=_bIsShowJSKeyBoard;
- (void)onCommentCancelBtnClicked:(id)arg1;
- (double)inputViewHeightForShowTypeComment;
- (void)sendEmotionTextToJs:(id)arg1;
- (void)hideEmotionBoardAnimate;
- (void)deleteEmoticon;
- (void)didSelectorSelfDefinedEmotcion:(id)arg1;
- (void)didSelectorEmoticon:(id)arg1;
- (void)OnEmoticonStateDidChanged:(_Bool)arg1;
- (void)onSendButtonClicked;
- (void)clearViewAndController;
- (void)keyboardDidHide;
- (void)callBackToJs;
- (void)onHideKeyboard;
- (void)keyboardWillShow;
- (void)updateExpressionButtonPosition;
- (void)setupView:(double)arg1;
- (void)textDidChanged:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)didCommitText:(id)arg1;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (double)getVisibleHeight;
- (void)reloadExpressionButtonImage:(long long)arg1;
- (void)initEmoticonView;
- (void)layoutInputToolViewForShowTypeComment;
- (void)initInputViewForShowTypeComment;
- (void)initInputViewForShowTypeDefault;
- (void)initInputToolView;
- (void)handlePanAndTabOnView:(id)arg1;
- (void)onInputModeChangeTo:(long long)arg1 Animated:(_Bool)arg2;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)ensureInitInputViewWithCustomParams:(id)arg1;
- (void)showEmotionBoardAnimate;
- (void)showInputViewWithPlaceholder:(id)arg1 defaultText:(id)arg2 contentOffsetY:(id)arg3 disableScrollAdjustment:(_Bool)arg4 customParams:(id)arg5;
- (_Bool)showEmotionBoardOnly:(double)arg1 ToShow:(_Bool)arg2 EmotionBoardHeight:(double *)arg3;
- (void)hideKeyBoardByJsapiWithCB:(CDUnknownBlockType)arg1;
- (void)showKeyBoardWithPlaceholder:(id)arg1 defaultText:(id)arg2 maxTextLen:(unsigned long long)arg3 contentOffsetY:(id)arg4 disableScrollAdjustment:(_Bool)arg5 showRemindWordCount:(unsigned long long)arg6 callBackBlock:(CDUnknownBlockType)arg7 customParams:(id)arg8;
- (void)resignResponder;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

