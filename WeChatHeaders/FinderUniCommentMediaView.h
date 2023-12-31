//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFlexBaseView.h"

@class CAGradientLayer, FinderUniCommentImageView, FinderUniCommentMediaItem, MMUIButton, MMUILabel, SightIconView;

@interface FinderUniCommentMediaView : WCFlexBaseView
{
    unsigned long long _mode;
    CDUnknownBlockType _deleteHandler;
    CDUnknownBlockType _clickHandler;
    FinderUniCommentImageView *_imageView;
    SightIconView *_playButton;
    MMUIButton *_closeButton;
    FinderUniCommentMediaItem *_mediaItem;
    MMUIButton *_backgroundButton;
    MMUILabel *_durationLabel;
    CAGradientLayer *_durationGradientLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAGradientLayer *durationGradientLayer; // @synthesize durationGradientLayer=_durationGradientLayer;
@property(retain, nonatomic) MMUILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) MMUIButton *backgroundButton; // @synthesize backgroundButton=_backgroundButton;
@property(retain, nonatomic) FinderUniCommentMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) SightIconView *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) FinderUniCommentImageView *imageView; // @synthesize imageView=_imageView;
@property(copy, nonatomic) CDUnknownBlockType clickHandler; // @synthesize clickHandler=_clickHandler;
@property(copy, nonatomic) CDUnknownBlockType deleteHandler; // @synthesize deleteHandler=_deleteHandler;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (void)onBackgroundButtonClicked;
- (void)closeButtonClicked;
- (void)layoutSubviews;
- (void)updateDisplay;
- (id)currentVideoInfo;
- (id)currentImageInfo;
- (void)updateWithMediaItem:(id)arg1;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

