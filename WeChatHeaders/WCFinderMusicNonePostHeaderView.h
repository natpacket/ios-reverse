//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderMusicBaseHeaderView.h"

#import "MMMusicPlayerContollerDelegate-Protocol.h"
#import "RichTextLayoutDelegate-Protocol.h"
#import "WCFinderFeedContentTextClickActionDelegate-Protocol.h"

@class FinderMusicTopicInfo, MMMusicVCOpenParams, MMUIButton, MMWebImageView, NSString, RichTextView, UILabel, UIView, WCFinderAuthInfoIconView;

@interface WCFinderMusicNonePostHeaderView : WCFinderMusicBaseHeaderView <WCFinderFeedContentTextClickActionDelegate, RichTextLayoutDelegate, MMMusicPlayerContollerDelegate>
{
    FinderMusicTopicInfo *_musicTopicInfo;
    MMMusicVCOpenParams *_openMusicParams;
    MMWebImageView *_mediaBkgImage;
    RichTextView *_songNameTextView;
    UILabel *_songDescLabel;
    MMUIButton *_favBtn;
    UILabel *_nicknameLabel;
    WCFinderAuthInfoIconView *_authIconView;
    MMUIButton *_playMusicBtn;
    UIView *_playButtonBGView;
}

+ (id)getSongDescByMusicTopicInfo:(id)arg1;
+ (id)convertFromFinderMusicInfo:(id)arg1;
+ (id)buildTitleTextView:(double)arg1;
+ (id)buildSongDetailLabel:(double)arg1;
+ (_Bool)canShowAuthorView:(id)arg1;
+ (double)heightWithMusicTopicInfo:(id)arg1 andViewWidth:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *playButtonBGView; // @synthesize playButtonBGView=_playButtonBGView;
@property(retain, nonatomic) MMUIButton *playMusicBtn; // @synthesize playMusicBtn=_playMusicBtn;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authIconView; // @synthesize authIconView=_authIconView;
@property(retain, nonatomic) UILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) MMUIButton *favBtn; // @synthesize favBtn=_favBtn;
@property(retain, nonatomic) UILabel *songDescLabel; // @synthesize songDescLabel=_songDescLabel;
@property(retain, nonatomic) RichTextView *songNameTextView; // @synthesize songNameTextView=_songNameTextView;
@property(retain, nonatomic) MMWebImageView *mediaBkgImage; // @synthesize mediaBkgImage=_mediaBkgImage;
@property(retain, nonatomic) MMMusicVCOpenParams *openMusicParams; // @synthesize openMusicParams=_openMusicParams;
@property(retain, nonatomic) FinderMusicTopicInfo *musicTopicInfo; // @synthesize musicTopicInfo=_musicTopicInfo;
- (void)playClicked:(id)arg1;
- (void)onClickToPlayMusic:(id)arg1 playState:(long long)arg2 clickedOnBtn:(_Bool)arg3;
- (void)onClickAuthorView;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)onClickFavAction;
- (void)updateWithMusicTopicInfo:(id)arg1;
- (void)layoutSubviews;
- (void)updateLayout;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

