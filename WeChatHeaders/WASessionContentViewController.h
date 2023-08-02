//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseMsgContentViewController.h"

#import "MsgImgFullScreenViewControllerDelegate-Protocol.h"
#import "WASessionArrowTitleViewDelegate-Protocol.h"
#import "WAUINavigationControllerDelegate-Protocol.h"

@class NSString, WAAppIdToUsernameTransfer;

@interface WASessionContentViewController : BaseMsgContentViewController <MsgImgFullScreenViewControllerDelegate, WASessionArrowTitleViewDelegate, WAUINavigationControllerDelegate>
{
    WAAppIdToUsernameTransfer *_appIdTransfer;
    NSString *_sceneID;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *sceneID; // @synthesize sceneID=_sceneID;
- (_Bool)navigationController:(id)arg1 shouldUsePresentWhenPushViewController:(id)arg2 animated:(_Bool)arg3 scene:(unsigned long long)arg4;
- (void)onClickTitle;
- (id)getWASessionContentDelegate;
- (void)updateTitleAndSubTitleView:(id)arg1;
- (void)headerImageClicked:(id)arg1;
- (long long)overrideUserInterfaceStyle;
- (void)onWeAppSessionMsgBtnClick:(id)arg1;
- (void)onWeAppSessionMsgBtnHide;
- (void)onBackButtonClicked:(id)arg1;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
