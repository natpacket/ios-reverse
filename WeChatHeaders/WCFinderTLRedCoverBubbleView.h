//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WCFinderJumpInfoViewProtocol-Protocol.h"

@class UIButton, UIImageView, WCFinderJumpInfo;
@protocol WCFinderTLRedCoverBubbleViewDelegate;

@interface WCFinderTLRedCoverBubbleView : UIView <WCFinderJumpInfoViewProtocol>
{
    id <WCFinderTLRedCoverBubbleViewDelegate> _delegate;
    UIImageView *_redCoverBgImageView;
    UIButton *_tipsBtn;
    WCFinderJumpInfo *_jumpInfoSource;
    long long _showPosition;
}

- (void).cxx_destruct;
@property(nonatomic) long long showPosition; // @synthesize showPosition=_showPosition;
@property(retain, nonatomic) WCFinderJumpInfo *jumpInfoSource; // @synthesize jumpInfoSource=_jumpInfoSource;
@property(retain, nonatomic) UIButton *tipsBtn; // @synthesize tipsBtn=_tipsBtn;
@property(retain, nonatomic) UIImageView *redCoverBgImageView; // @synthesize redCoverBgImageView=_redCoverBgImageView;
@property(nonatomic) __weak id <WCFinderTLRedCoverBubbleViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)jumpInfo;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(long long)arg2;
- (void)onClickBubbleAction;
- (void)layoutViews;
- (void)setUpView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

