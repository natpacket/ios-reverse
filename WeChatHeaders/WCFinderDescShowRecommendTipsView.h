//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;

@interface WCFinderDescShowRecommendTipsView : UIView
{
    CDUnknownBlockType _clickActionBlock;
    UIButton *_actionButton;
    UIView *_continueView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *continueView; // @synthesize continueView=_continueView;
@property(nonatomic) __weak UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(copy, nonatomic) CDUnknownBlockType clickActionBlock; // @synthesize clickActionBlock=_clickActionBlock;
- (void)resetActionButton;
- (void)hideContinueView;
- (void)clickButtonAction;
- (void)setUpUI;
- (id)init;

@end

