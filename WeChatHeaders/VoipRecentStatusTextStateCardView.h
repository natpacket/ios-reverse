//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VoipRecentStatusCardView.h"

#import "RichTextLayoutDelegate-Protocol.h"
#import "VoipRecentStatusProperties-Protocol.h"

@class NSString, RichTextView, TextStateCardReporter, TextStateModel, UIImageView, UILabel, UIView, VoipRecentStatusFadeView, VoipRecentStatusTextStatePublishIconButton, VoipRecentStatusTextStatePublishSourceView;

@interface VoipRecentStatusTextStateCardView : VoipRecentStatusCardView <RichTextLayoutDelegate, VoipRecentStatusProperties>
{
    _Bool _isSoundBtnHidden;
    _Bool _shouldPlaySound;
    _Bool _isVisable;
    _Bool _hasShownBefore;
    CDUnknownBlockType _didClickSoundButtonCallback;
    CDUnknownBlockType _didClickOpenPageButtonCallback;
    UIView *_backgroundView;
    VoipRecentStatusTextStatePublishIconButton *_textStatePublishIconButton;
    VoipRecentStatusTextStatePublishSourceView *_textStatePublishSourceView;
    RichTextView *_descriptionRichTextView;
    UILabel *_positionLabel;
    TextStateModel *_textStateModel;
    UIView *_soundView;
    UIImageView *_soundIconImageView;
    UIView *_openPageHotView;
    VoipRecentStatusFadeView *_topFadeView;
    VoipRecentStatusFadeView *_bottomFadeView;
    TextStateCardReporter *_reporter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TextStateCardReporter *reporter; // @synthesize reporter=_reporter;
@property(nonatomic) _Bool hasShownBefore; // @synthesize hasShownBefore=_hasShownBefore;
@property(retain, nonatomic) VoipRecentStatusFadeView *bottomFadeView; // @synthesize bottomFadeView=_bottomFadeView;
@property(retain, nonatomic) VoipRecentStatusFadeView *topFadeView; // @synthesize topFadeView=_topFadeView;
@property(retain, nonatomic) UIView *openPageHotView; // @synthesize openPageHotView=_openPageHotView;
@property(retain, nonatomic) UIImageView *soundIconImageView; // @synthesize soundIconImageView=_soundIconImageView;
@property(retain, nonatomic) UIView *soundView; // @synthesize soundView=_soundView;
@property(retain, nonatomic) TextStateModel *textStateModel; // @synthesize textStateModel=_textStateModel;
@property(retain, nonatomic) UILabel *positionLabel; // @synthesize positionLabel=_positionLabel;
@property(retain, nonatomic) RichTextView *descriptionRichTextView; // @synthesize descriptionRichTextView=_descriptionRichTextView;
@property(retain, nonatomic) VoipRecentStatusTextStatePublishSourceView *textStatePublishSourceView; // @synthesize textStatePublishSourceView=_textStatePublishSourceView;
@property(retain, nonatomic) VoipRecentStatusTextStatePublishIconButton *textStatePublishIconButton; // @synthesize textStatePublishIconButton=_textStatePublishIconButton;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(copy, nonatomic) CDUnknownBlockType didClickOpenPageButtonCallback; // @synthesize didClickOpenPageButtonCallback=_didClickOpenPageButtonCallback;
@property(copy, nonatomic) CDUnknownBlockType didClickSoundButtonCallback; // @synthesize didClickSoundButtonCallback=_didClickSoundButtonCallback;
@property(nonatomic) _Bool isVisable; // @synthesize isVisable=_isVisable;
@property(nonatomic) _Bool shouldPlaySound; // @synthesize shouldPlaySound=_shouldPlaySound;
@property(nonatomic) _Bool isSoundBtnHidden; // @synthesize isSoundBtnHidden=_isSoundBtnHidden;
- (double)lineWidthAtY:(double)arg1 lineIndex:(long long)arg2 richTextView:(id)arg3;
- (void)onCardShow;
- (void)onSilenceViewClickWithSender:(id)arg1;
- (void)onClickOpenPageHotViewWithSender:(id)arg1;
- (double)preferredHeight;
- (void)layoutSubviews;
- (id)initWithUserName:(id)arg1 textStateModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

