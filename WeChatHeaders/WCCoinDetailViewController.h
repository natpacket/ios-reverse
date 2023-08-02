//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ILinkEventExt-Protocol.h"
#import "ServiceAuthExt-Protocol.h"
#import "WCCoinBuyCoinLogicDelegate-Protocol.h"
#import "WCCoinFetchMoneyViewControllerDelegate-Protocol.h"
#import "WCCoinGetWecoinPageInfoCgiDelegate-Protocol.h"
#import "WCCoinReprovideLogicDelegate-Protocol.h"

@class GetWecoinPageInfoResponse, KindaUIScrollView, NSString, UIView, WCCoinNewUserTipsView;

@interface WCCoinDetailViewController : MMUIViewController <ILinkEventExt, WCCoinGetWecoinPageInfoCgiDelegate, WCCoinBuyCoinLogicDelegate, WCCoinFetchMoneyViewControllerDelegate, WCCoinReprovideLogicDelegate, ServiceAuthExt>
{
    _Bool _directlyJumpDetailPage;
    _Bool _didBuyCoin;
    KindaUIScrollView *_scrollView;
    UIView *_contentView;
    GetWecoinPageInfoResponse *_pageInfoResponse;
    WCCoinNewUserTipsView *_tipsView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool didBuyCoin; // @synthesize didBuyCoin=_didBuyCoin;
@property(retain, nonatomic) WCCoinNewUserTipsView *tipsView; // @synthesize tipsView=_tipsView;
@property(retain, nonatomic) GetWecoinPageInfoResponse *pageInfoResponse; // @synthesize pageInfoResponse=_pageInfoResponse;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) KindaUIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) _Bool directlyJumpDetailPage; // @synthesize directlyJumpDetailPage=_directlyJumpDetailPage;
- (void)onCloseService:(unsigned long long)arg1 config:(id)arg2 error:(id)arg3;
- (void)onOpenService:(unsigned long long)arg1 config:(id)arg2 error:(id)arg3;
- (void)reprovideFail:(id)arg1 error:(id)arg2;
- (void)reprovideSuccess:(id)arg1 result:(id)arg2;
- (void)buyCoinCancel:(id)arg1;
- (void)buyCoinFail:(id)arg1;
- (void)buyCoinSuccess:(id)arg1;
- (void)getWecoinPageInfoCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)getWecoinPageInfoCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)didFetchMoneySuccess:(id)arg1;
- (void)showNewUserTips;
- (void)getPageInfo;
- (void)clickBanner;
- (void)clickCoinBalance;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onClickRightItem;
- (void)clickProfit;
- (void)buyCoin;
- (void)layoutBottomView;
- (void)layoutProfitView;
- (void)layoutTopView;
- (void)layoutBannerView;
- (void)layoutContentView;
- (void)refresh;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLayoutSubviews;
- (long long)overrideUserInterfaceStyle;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
