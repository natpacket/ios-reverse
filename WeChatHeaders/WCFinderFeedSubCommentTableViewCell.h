//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "IStoreEmotionSingleDownloadMgrExt-Protocol.h"
#import "WCFinderContactExt-Protocol.h"
#import "WCFinderFeedCommentKeywordViewContainer-Protocol.h"
#import "WCFinderFeedContentTextClickActionDelegate-Protocol.h"
#import "WCFinderHeadImageViewDelegate-Protocol.h"
#import "WCGeneralMonitorCellProtocol-Protocol.h"

@class MMEmoticonView, MMUIButton, NSIndexPath, NSString, UIButton, UIImageView, UILabel, UIView, WCFinderAnimationLoadingView, WCFinderComment, WCFinderCommentLikeView, WCFinderFeedContentTextView, WCFinderFeedSubCommentCellStyleConfig, WCFinderHeadImageView;
@protocol WCFinderFeedDetailCommentCellActionDelegate;

@interface WCFinderFeedSubCommentTableViewCell : UITableViewCell <WCFinderFeedContentTextClickActionDelegate, WCFinderHeadImageViewDelegate, WCFinderContactExt, IStoreEmotionSingleDownloadMgrExt, WCGeneralMonitorCellProtocol, WCFinderFeedCommentKeywordViewContainer>
{
    multimap_8acdc1b4 _keywordsMap;
    _Bool _wechatAccountProfileSwitch;
    _Bool _isFriendIdentity;
    _Bool _isFinderIdentity;
    _Bool _enableShowFinder;
    _Bool _isSelfPost;
    id <WCFinderFeedDetailCommentCellActionDelegate> _delegate;
    NSIndexPath *_currentIndexPath;
    WCFinderHeadImageView *_avatarImageView;
    UILabel *_timeAndIpRegionLabel;
    UILabel *_nickNameLabel;
    WCFinderFeedContentTextView *_textView;
    WCFinderComment *_comment;
    UIView *_backView;
    UILabel *_authorBadgeLabel;
    UIImageView *_finderIconImageView;
    UIView *_hightLightView;
    UIButton *_failCommentTips;
    WCFinderCommentLikeView *_commentLikeView;
    UILabel *_authorLikeLabel;
    MMUIButton *_moreActionButton;
    MMEmoticonView *_emoticonView;
    UIView *_tipsBackGroundView;
    UIImageView *_emoticonEmptyTipsView;
    WCFinderAnimationLoadingView *_emoticonLoadingTipsView;
    WCFinderFeedSubCommentCellStyleConfig *_config;
}

+ (double)textViewMaxWidthWithFullWidth:(double)arg1 config:(id)arg2;
+ (double)cellHeightWith:(id)arg1 width:(double)arg2 forceExpand:(_Bool)arg3 config:(id)arg4;
+ (double)cellHeightWith:(id)arg1 width:(double)arg2 forceExpand:(_Bool)arg3;
+ (id)getContentWithComment:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFeedSubCommentCellStyleConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) WCFinderAnimationLoadingView *emoticonLoadingTipsView; // @synthesize emoticonLoadingTipsView=_emoticonLoadingTipsView;
@property(retain, nonatomic) UIImageView *emoticonEmptyTipsView; // @synthesize emoticonEmptyTipsView=_emoticonEmptyTipsView;
@property(retain, nonatomic) UIView *tipsBackGroundView; // @synthesize tipsBackGroundView=_tipsBackGroundView;
@property(retain, nonatomic) MMEmoticonView *emoticonView; // @synthesize emoticonView=_emoticonView;
@property(retain, nonatomic) MMUIButton *moreActionButton; // @synthesize moreActionButton=_moreActionButton;
@property(retain, nonatomic) UILabel *authorLikeLabel; // @synthesize authorLikeLabel=_authorLikeLabel;
@property(retain, nonatomic) WCFinderCommentLikeView *commentLikeView; // @synthesize commentLikeView=_commentLikeView;
@property(nonatomic) _Bool isSelfPost; // @synthesize isSelfPost=_isSelfPost;
@property(nonatomic) _Bool enableShowFinder; // @synthesize enableShowFinder=_enableShowFinder;
@property(nonatomic) _Bool isFinderIdentity; // @synthesize isFinderIdentity=_isFinderIdentity;
@property(nonatomic) _Bool isFriendIdentity; // @synthesize isFriendIdentity=_isFriendIdentity;
@property(nonatomic) _Bool wechatAccountProfileSwitch; // @synthesize wechatAccountProfileSwitch=_wechatAccountProfileSwitch;
@property(retain, nonatomic) UIButton *failCommentTips; // @synthesize failCommentTips=_failCommentTips;
@property(retain, nonatomic) UIView *hightLightView; // @synthesize hightLightView=_hightLightView;
@property(retain, nonatomic) UIImageView *finderIconImageView; // @synthesize finderIconImageView=_finderIconImageView;
@property(retain, nonatomic) UILabel *authorBadgeLabel; // @synthesize authorBadgeLabel=_authorBadgeLabel;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) WCFinderComment *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) WCFinderFeedContentTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) UILabel *timeAndIpRegionLabel; // @synthesize timeAndIpRegionLabel=_timeAndIpRegionLabel;
@property(retain, nonatomic) WCFinderHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) NSIndexPath *currentIndexPath; // @synthesize currentIndexPath=_currentIndexPath;
@property(nonatomic) __weak id <WCFinderFeedDetailCommentCellActionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getGeneralMonitorCellBizId;
- (id)findAllExposedKeywordUrls;
- (id)accessibilityLabel;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)onFeedContentTextView:(id)arg1 clickReplyUsername:(id)arg2 withRect:(struct CGRect)arg3;
- (void)onFeedContentTextView:(id)arg1 clickSubCommentWeChat:(id)arg2 withRect:(struct CGRect)arg3;
- (void)onFeedContentTextView:(id)arg1 clickSubComment:(id)arg2 withRect:(struct CGRect)arg3;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (void)onFeedContentTextView:(id)arg1 clickKeywordUrl:(id)arg2;
- (void)onFeedContentTextView:(id)arg1 clickReadMore:(_Bool)arg2;
- (void)onTapEmoticonView;
- (void)onClickMoreAction;
- (void)onClickLikeComment;
- (void)updateTopTitleLayout;
- (void)onFinderContactUpdate:(id)arg1;
- (void)hideTips;
- (void)showEmptyEmoticonTipsState;
- (void)showLoadingTipsState;
- (_Bool)isContentTruncated;
- (void)updateAvatarCornerWithAuthorFlag:(_Bool)arg1;
- (void)showViewHighLightByRefComment;
- (void)clickNickname;
- (void)clickAvatar;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)canBrowseEmoticon;
- (void)showCommentMenuView;
- (void)longPress:(id)arg1;
- (void)updateWithComment:(id)arg1 enableShowFinder:(_Bool)arg2 isCommentClose:(_Bool)arg3 isAuthor:(_Bool)arg4 config:(id)arg5;
- (void)updateWithComment:(id)arg1 enableShowFinder:(_Bool)arg2 isCommentClose:(_Bool)arg3 isAuthor:(_Bool)arg4;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void *)keywordsMap;
- (void)dealloc;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

