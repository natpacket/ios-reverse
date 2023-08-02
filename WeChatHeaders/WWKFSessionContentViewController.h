//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseMsgContentViewController.h"

#import "WASessionArrowTitleViewDelegate-Protocol.h"
#import "WAUINavigationControllerDelegate-Protocol.h"

@class NSString;

@interface WWKFSessionContentViewController : BaseMsgContentViewController <WASessionArrowTitleViewDelegate, WAUINavigationControllerDelegate>
{
}

- (_Bool)navigationController:(id)arg1 shouldUsePresentWhenPushViewController:(id)arg2 animated:(_Bool)arg3 scene:(unsigned long long)arg4;
- (void)onWeAppSessionMsgBtnClick:(id)arg1;
- (void)onWeAppSessionMsgBtnHide;
- (void)onClickTitle;
- (void)updateTitleAndSubTitleView:(id)arg1;
- (void)onBackButtonClicked:(id)arg1;
- (id)wwkfContentLogicController;
- (void)viewDidLoad;
- (_Bool)shouldShowQuickReplyPush:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

