//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WCActionSheetDelegate-Protocol.h"
#import "WCFinderLongPressIntervalGestureRecognizerDelegate-Protocol.h"

@class MMUILabel, NSString, PAGView, UIImageView, UILabel, WCFinderFullCollectionToolbarItemButton;
@protocol WCFinderFeedToolbarActionDelegate;

@interface WCFinderFullCollectionToolbarView : UIView <WCFinderLongPressIntervalGestureRecognizerDelegate, WCActionSheetDelegate>
{
    _Bool _hideFav;
    _Bool _allowFav;
    _Bool _isFav;
    _Bool _isDisableActionExceptLikes;
    _Bool _isCommentClose;
    _Bool _enablePrivateLike;
    _Bool _isPrivateAccount;
    _Bool _allowForward;
    _Bool _disableLikeAction;
    _Bool _disableCommentAction;
    id <WCFinderFeedToolbarActionDelegate> _delegate;
    WCFinderFullCollectionToolbarItemButton *_collectionBtn;
    WCFinderFullCollectionToolbarItemButton *_shareBtn;
    WCFinderFullCollectionToolbarItemButton *_likeBtn;
    WCFinderFullCollectionToolbarItemButton *_commentBtn;
    UILabel *_collectionTipsLabel;
    unsigned long long _collectionCount;
    long long _likeFlag;
    unsigned long long _likeNums;
    long long _feedObjectType;
    unsigned long long _commentNums;
    UIView *_likeDoubleIdentityShadowView;
    MMUILabel *_likeDoubleIdentityLabel;
    UIView *_triangleBViewShadowView;
    UIImageView *_triangleBView;
    unsigned long long _forwardCount;
    unsigned long long _wxStatusRefCount;
    PAGView *_likeExplosionView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PAGView *likeExplosionView; // @synthesize likeExplosionView=_likeExplosionView;
@property(nonatomic) _Bool disableCommentAction; // @synthesize disableCommentAction=_disableCommentAction;
@property(nonatomic) _Bool disableLikeAction; // @synthesize disableLikeAction=_disableLikeAction;
@property(nonatomic) unsigned long long wxStatusRefCount; // @synthesize wxStatusRefCount=_wxStatusRefCount;
@property(nonatomic) unsigned long long forwardCount; // @synthesize forwardCount=_forwardCount;
@property(nonatomic) _Bool allowForward; // @synthesize allowForward=_allowForward;
@property(nonatomic) _Bool isPrivateAccount; // @synthesize isPrivateAccount=_isPrivateAccount;
@property(nonatomic) _Bool enablePrivateLike; // @synthesize enablePrivateLike=_enablePrivateLike;
@property(retain, nonatomic) UIImageView *triangleBView; // @synthesize triangleBView=_triangleBView;
@property(retain, nonatomic) UIView *triangleBViewShadowView; // @synthesize triangleBViewShadowView=_triangleBViewShadowView;
@property(retain, nonatomic) MMUILabel *likeDoubleIdentityLabel; // @synthesize likeDoubleIdentityLabel=_likeDoubleIdentityLabel;
@property(retain, nonatomic) UIView *likeDoubleIdentityShadowView; // @synthesize likeDoubleIdentityShadowView=_likeDoubleIdentityShadowView;
@property(nonatomic) unsigned long long commentNums; // @synthesize commentNums=_commentNums;
@property(nonatomic) long long feedObjectType; // @synthesize feedObjectType=_feedObjectType;
@property(nonatomic) _Bool isCommentClose; // @synthesize isCommentClose=_isCommentClose;
@property(nonatomic) _Bool isDisableActionExceptLikes; // @synthesize isDisableActionExceptLikes=_isDisableActionExceptLikes;
@property(nonatomic) unsigned long long likeNums; // @synthesize likeNums=_likeNums;
@property(nonatomic) long long likeFlag; // @synthesize likeFlag=_likeFlag;
@property(nonatomic) _Bool isFav; // @synthesize isFav=_isFav;
@property(nonatomic) _Bool allowFav; // @synthesize allowFav=_allowFav;
@property(nonatomic) _Bool hideFav; // @synthesize hideFav=_hideFav;
@property(nonatomic) unsigned long long collectionCount; // @synthesize collectionCount=_collectionCount;
@property(retain, nonatomic) UILabel *collectionTipsLabel; // @synthesize collectionTipsLabel=_collectionTipsLabel;
@property(retain, nonatomic) WCFinderFullCollectionToolbarItemButton *commentBtn; // @synthesize commentBtn=_commentBtn;
@property(retain, nonatomic) WCFinderFullCollectionToolbarItemButton *likeBtn; // @synthesize likeBtn=_likeBtn;
@property(retain, nonatomic) WCFinderFullCollectionToolbarItemButton *shareBtn; // @synthesize shareBtn=_shareBtn;
@property(retain, nonatomic) WCFinderFullCollectionToolbarItemButton *collectionBtn; // @synthesize collectionBtn=_collectionBtn;
@property(nonatomic) __weak id <WCFinderFeedToolbarActionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)createOneLikeExplosionView;
- (void)tryBindDynaimcIconToItemButton:(id)arg1 color:(id)arg2 size:(struct CGSize)arg3 defaultIconName:(id)arg4 defaultIconColor:(id)arg5 iconKey:(id)arg6 updateBlock:(CDUnknownBlockType)arg7;
- (id)whiteColorWithAlphaComponent;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)selectButtonWithAnimation:(id)arg1 selectedImage:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)triggerCollectionAnimation;
- (void)didClickCollectionBtn:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)didClickCommentBtn:(id)arg1;
- (void)didClickShareBtn:(id)arg1;
- (void)triggerLikeAnimationIsPrivate:(_Bool)arg1;
- (void)didClickLikeBtn:(id)arg1;
- (void)showAnonymousLikeActionSheet;
- (_Bool)longPressGesEnabled;
- (void)onFinderLongPressIntervalClick:(id)arg1 isInterval:(_Bool)arg2;
- (void)hiddenlikeDoubleIdentityLabel:(_Bool)arg1;
- (void)updateLikeEducateTipsLayout;
- (void)initlikeDoubleIdentityLabel;
- (void)updateCenterAlignment;
- (void)updateLikeContainer:(_Bool)arg1 disableLikeAction:(_Bool)arg2;
- (void)updateCommentContaier;
- (void)updateShareContainer:(_Bool)arg1;
- (void)updateCollectionContainer:(_Bool)arg1 allowFav:(_Bool)arg2;
- (_Bool)isShowingLikeEducateTips;
- (void)needsShowLikeTips:(_Bool)arg1;
- (void)updateLikeEducateTipsContainer:(id)arg1;
- (void)updateCommentContainer:(_Bool)arg1;
- (void)updateCommentCount:(long long)arg1 commentClose:(_Bool)arg2 isDisableActionExceptLikes:(_Bool)arg3 likeFlag:(long long)arg4 feedObjectType:(long long)arg5 likeNum:(unsigned long long)arg6 collectNum:(unsigned long long)arg7 isFav:(_Bool)arg8 likeEducateTips:(id)arg9 allowForward:(_Bool)arg10 hideFav:(_Bool)arg11 allowFav:(_Bool)arg12 isPrivateAccount:(_Bool)arg13 forwardCount:(unsigned long long)arg14 wxStatusRefCount:(unsigned long long)arg15 disableLikeAction:(_Bool)arg16 disableCommentAction:(_Bool)arg17;
- (void)setupSubView;
- (void)prefetchDynamicIcons;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

