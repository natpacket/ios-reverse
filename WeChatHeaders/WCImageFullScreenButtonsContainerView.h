//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class WCMomentsBizOriginalArticleButton;

@interface WCImageFullScreenButtonsContainerView : MMUIView
{
    unsigned long long _contentItemScene;
    CDUnknownBlockType _originalArticleBlock;
    WCMomentsBizOriginalArticleButton *_bizOriginalArticleButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCMomentsBizOriginalArticleButton *bizOriginalArticleButton; // @synthesize bizOriginalArticleButton=_bizOriginalArticleButton;
@property(copy, nonatomic) CDUnknownBlockType originalArticleBlock; // @synthesize originalArticleBlock=_originalArticleBlock;
@property(nonatomic) unsigned long long contentItemScene; // @synthesize contentItemScene=_contentItemScene;
- (void)onClickOriginalArticleButton;
- (void)layoutSubviews;
- (void)initBizOriginalArticleButton;
- (_Bool)canShowBizOriginalArticleButtonWithMediaItem:(id)arg1;
- (void)showMediaItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

