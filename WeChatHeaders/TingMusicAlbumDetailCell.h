//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TingAutoSizeCollectionViewCell.h"

@class MMUIButton, MMUILabel, PAGView, TingItem, UILabel, UIView;
@protocol TingMusicAlbumDetailCellDelegate;

@interface TingMusicAlbumDetailCell : TingAutoSizeCollectionViewCell
{
    _Bool _playableFlag;
    _Bool _shouldSetBottomLineToScreenWidthFlag;
    int _playStatus;
    id <TingMusicAlbumDetailCellDelegate> _delegate;
    TingItem *_tingItem;
    UILabel *_numberLabel;
    MMUILabel *_songNameLabel;
    MMUILabel *_timeLabel;
    MMUILabel *_replacePlayLabel;
    MMUIButton *_listenLaterButton;
    UIView *_highlightedView;
    UIView *_bottomLine;
    PAGView *_pagView;
    UIView *_coverLayerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *coverLayerView; // @synthesize coverLayerView=_coverLayerView;
@property(retain, nonatomic) PAGView *pagView; // @synthesize pagView=_pagView;
@property(nonatomic) _Bool shouldSetBottomLineToScreenWidthFlag; // @synthesize shouldSetBottomLineToScreenWidthFlag=_shouldSetBottomLineToScreenWidthFlag;
@property(nonatomic) _Bool playableFlag; // @synthesize playableFlag=_playableFlag;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIView *highlightedView; // @synthesize highlightedView=_highlightedView;
@property(retain, nonatomic) MMUIButton *listenLaterButton; // @synthesize listenLaterButton=_listenLaterButton;
@property(retain, nonatomic) MMUILabel *replacePlayLabel; // @synthesize replacePlayLabel=_replacePlayLabel;
@property(retain, nonatomic) MMUILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) MMUILabel *songNameLabel; // @synthesize songNameLabel=_songNameLabel;
@property(retain, nonatomic) UILabel *numberLabel; // @synthesize numberLabel=_numberLabel;
@property(retain, nonatomic) TingItem *tingItem; // @synthesize tingItem=_tingItem;
@property(nonatomic, getter=isPlaying) int playStatus; // @synthesize playStatus=_playStatus;
@property(nonatomic) __weak id <TingMusicAlbumDetailCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setBottomLineToScreenWidth:(_Bool)arg1;
- (void)updateDisplay:(id)arg1 withIndex:(id)arg2;
- (void)updateDisplay:(id)arg1;
- (void)setIsPlayable:(_Bool)arg1 showMVJumpLabel:(_Bool)arg2;
- (void)likeClicked:(id)arg1;
- (void)listenLaterClicked:(id)arg1;
- (void)layoutSubviews;
- (void)configureLayout;
- (id)initWithFrame:(struct CGRect)arg1;

@end

