//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "ILinkEventExt-Protocol.h"
#import "IMMLanguageMgrExt-Protocol.h"
#import "ITranslateSnsMgrExt-Protocol.h"
#import "IWCMyStoryUserStateUtilExt-Protocol.h"
#import "RichTextLayoutDelegate-Protocol.h"
#import "WCForceTouchTriggerLongPressProtocol-Protocol.h"

@class MMUIButton, NSMutableArray, NSString, RichTextView, UIButton, UINavigationController, UIView, WCDataItem, WCUserComment;
@protocol ILinkEventExt, WCCommentViewFBDelegate;

@interface WCCommentViewFB : MMUIView <RichTextLayoutDelegate, WCForceTouchTriggerLongPressProtocol, IMMLanguageMgrExt, IWCMyStoryUserStateUtilExt, ILinkEventExt, ITranslateSnsMgrExt>
{
    RichTextView *_contentView;
    id <ILinkEventExt> _urlLabelDelegate;
    RichTextView *_translateView;
    UIButton *_translateStatusView;
    UIView *_translateLineView;
    int eTranslateStatus;
    NSString *_copyedText;
    _Bool _isLongPressHandled;
    id <WCCommentViewFBDelegate> _commentDelegate;
    WCUserComment *_commentUserInfo;
    double _fMaxWidth;
    _Bool _shouldConfirmDelete;
    UINavigationController *navigationController;
    _Bool _isRedType;
    _Bool _isAdComment;
    UIButton *fulltextButton;
    NSMutableArray *hasNewStoryArray;
    double _firstTopHeight;
    WCDataItem *_dataItem;
    MMUIButton *_deleteCommentPlaceHolder;
    MMUIButton *_emotionView;
}

+ (id)makeDataWrapForWCTranslateOfComment:(id)arg1 andDataItemTid:(id)arg2;
+ (double)getVisibleHeightForSpecialContentWithCommentInfo:(id)arg1 withMaxWidth:(double)arg2;
+ (double)getExtentHeightEmotionView:(id)arg1 baseStyles:(id)arg2 maxWidth:(double)arg3;
+ (double)getVisibleHeightWithCommentInfo:(id)arg1 withMaxWidth:(double)arg2 fromDataItem:(id)arg3;
+ (id)genShowContentUserStr:(id)arg1 nickname:(id)arg2;
+ (id)genTranslateContentUserStr:(id)arg1 nickname:(id)arg2;
+ (id)genTranslateContentStrPrefix:(id)arg1;
+ (id)accessibilityLabelForTimeline:(id)arg1;
+ (id)getDisplayCommentContentPattern:(id)arg1;
+ (id)getDisplayCommentContent:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *emotionView; // @synthesize emotionView=_emotionView;
@property(retain, nonatomic) MMUIButton *deleteCommentPlaceHolder; // @synthesize deleteCommentPlaceHolder=_deleteCommentPlaceHolder;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(nonatomic) double firstTopHeight; // @synthesize firstTopHeight=_firstTopHeight;
@property(retain, nonatomic) WCUserComment *commentUserInfo; // @synthesize commentUserInfo=_commentUserInfo;
@property(nonatomic) _Bool isRedType; // @synthesize isRedType=_isRedType;
@property(nonatomic) _Bool shouldConfirmDelete; // @synthesize shouldConfirmDelete=_shouldConfirmDelete;
@property(nonatomic) __weak id <WCCommentViewFBDelegate> commentDelegate; // @synthesize commentDelegate=_commentDelegate;
@property(nonatomic) __weak id <ILinkEventExt> urlLabelDelegate; // @synthesize urlLabelDelegate=_urlLabelDelegate;
@property(nonatomic) double fMaxWidth; // @synthesize fMaxWidth=_fMaxWidth;
- (void)onClearUnreadStoryMarkWithUserName:(id)arg1;
- (void)onSetUnreadStoryMarkWithUserName:(id)arg1;
- (void)onLanguageChange;
- (double)lineWidthAtY:(double)arg1 lineIndex:(long long)arg2 richTextView:(id)arg3;
- (void)onFulltextBtnClick;
- (void)tryAddFullTextBtnView;
- (void)triggerLongPressFor3DTouchAtLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (void)onTranslateSnsChanged:(id)arg1;
- (void)onTranslateSnsFailed:(id)arg1 errTip:(id)arg2;
- (double)initTranslateStatusButton:(_Bool)arg1 withTitle:(id)arg2;
- (void)makeTranslateShowAnimation;
- (double)initContentTranslateView:(id)arg1;
- (void)onTranslate:(id)arg1;
- (void)onTranslateOrigin:(id)arg1;
- (void)onTranslateText:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)delayedTouchesEnded:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)resetNormal;
- (void)onViewLongPressed;
- (void)onSearchTopicClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onPhoneLongPressed:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onSearchTopicLongPressed:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)onLinkLongPressed:(id)arg1 withRect:(struct CGRect)arg2;
- (void)showMenuItemForCrashProtectedState:(struct CGRect)arg1;
- (void)showMenuItemForFoldText:(id)arg1 withRect:(struct CGRect)arg2;
- (void)showMenuItemForText:(id)arg1 withRect:(struct CGRect)arg2;
- (void)showEmoitionMenuItemWithRect:(struct CGRect)arg1;
- (void)showAtedFriendMenuItemForNoTextWithRect:(struct CGRect)arg1;
- (void)onRestore:(id)arg1;
- (void)onDelete:(id)arg1;
- (void)onSearch:(id)arg1;
- (void)onCopy:(id)arg1;
- (_Bool)canCommentDelete;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)onMenuControllerWillHide:(id)arg1;
- (void)setHighlightedColor;
- (void)setNormalColor;
- (double)getVisibleHeight;
- (void)manualLayoutSubViews;
- (void)onEmotionLongPress:(id)arg1;
- (void)onEmotionClick;
- (void)addEmotionView:(id)arg1 baseStyles:(id)arg2;
- (void)createSubviews;
- (void)dealloc;
- (void)initStoryUserStateFor:(id)arg1;
- (void)initHasNewStoryLogic;
- (id)initWithCommentUserInfo:(id)arg1 andDataItem:(id)arg2 isAdComment:(_Bool)arg3;
- (id)GetTranslateSnsKeyID;
- (id)dataItemTid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

