//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMPageSheetBaseView.h"

#import "WCCoinBuyCoinLogicDelegate-Protocol.h"

@class CAShapeLayer, ConcertTicketInfo, MMFinderLiveChooseClarityViewNavBar, MMFinderLivePrepayTiersPanelViewModel, MMFinderLivePurchaseTicketPayButton, MMUILabel, NSString, UIImageView, UIView;

@interface MMFinderLivePurchaseConcertTicketView : MMPageSheetBaseView <WCCoinBuyCoinLogicDelegate>
{
    _Bool _needHalfScreen;
    _Bool _isTicket;
    _Bool _hasCriticalResourceLoadError;
    _Bool _criticalResourceLoadErrorNotified;
    CDUnknownBlockType _purchaseConcertTicketViewFinishBlock;
    MMFinderLivePrepayTiersPanelViewModel *_tiersViewModel;
    ConcertTicketInfo *_ticket;
    CAShapeLayer *_shapeLayer;
    UIView *_contentView;
    MMFinderLiveChooseClarityViewNavBar *_navBar;
    UIImageView *_backgroundImageView;
    UIView *_ticketDropShadowView;
    UIImageView *_brandLogoView;
    MMUILabel *_concertNameLabel;
    MMUILabel *_timeLabel;
    MMFinderLivePurchaseTicketPayButton *_payButton;
    long long _asyncLoadResourceCount;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool criticalResourceLoadErrorNotified; // @synthesize criticalResourceLoadErrorNotified=_criticalResourceLoadErrorNotified;
@property(nonatomic) _Bool hasCriticalResourceLoadError; // @synthesize hasCriticalResourceLoadError=_hasCriticalResourceLoadError;
@property(nonatomic) long long asyncLoadResourceCount; // @synthesize asyncLoadResourceCount=_asyncLoadResourceCount;
@property(retain, nonatomic) MMFinderLivePurchaseTicketPayButton *payButton; // @synthesize payButton=_payButton;
@property(retain, nonatomic) MMUILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) MMUILabel *concertNameLabel; // @synthesize concertNameLabel=_concertNameLabel;
@property(retain, nonatomic) UIImageView *brandLogoView; // @synthesize brandLogoView=_brandLogoView;
@property(retain, nonatomic) UIView *ticketDropShadowView; // @synthesize ticketDropShadowView=_ticketDropShadowView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) MMFinderLiveChooseClarityViewNavBar *navBar; // @synthesize navBar=_navBar;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) ConcertTicketInfo *ticket; // @synthesize ticket=_ticket;
@property(nonatomic) _Bool isTicket; // @synthesize isTicket=_isTicket;
@property(nonatomic) _Bool needHalfScreen; // @synthesize needHalfScreen=_needHalfScreen;
@property(retain, nonatomic) MMFinderLivePrepayTiersPanelViewModel *tiersViewModel; // @synthesize tiersViewModel=_tiersViewModel;
@property(copy, nonatomic) CDUnknownBlockType purchaseConcertTicketViewFinishBlock; // @synthesize purchaseConcertTicketViewFinishBlock=_purchaseConcertTicketViewFinishBlock;
- (void)pageSheetWillDisappear;
- (void)cancelButtonClick;
- (void)payButtonClick;
- (void)fetchWecoinBalance;
- (void)onBuyCoin;
- (double)contentViewHeight;
- (void)updateSelfViewShapeClip;
- (void)setupPageSheetConfig;
- (void)layoutUI;
- (void)createUI;
- (void)checkImageLoadCompletion;
- (void)setImageUri:(id)arg1 forImageView:(id)arg2 fallbackImage:(id)arg3 isRequired:(_Bool)arg4 isCritical:(_Bool)arg5 logKey:(id)arg6;
- (void)wcfSetImageWithModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateWithTiersViewModel:(id)arg1 needHalfScreen:(_Bool)arg2 isTicket:(_Bool)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

