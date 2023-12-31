//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ILinkEventExt-Protocol.h"

@class FixTitleColorButton, MMUIActivityIndicatorView, MMUIButton, MMUILabel, NSString, POIInfo, TakeCarServiceDataLogic;
@protocol MMLocationPoiHeadViewDelegate;

@interface MMLocationPoiHeadView : UIView <ILinkEventExt>
{
    POIInfo *_poiInfo;
    TakeCarServiceDataLogic *_takeCarDataLogic;
    _Bool _isExpand;
    unsigned int _reportExpandStatus;
    _Bool _isLoading;
    _Bool _isFromNearbyLife;
    _Bool _showTakeCarBtn;
    _Bool _showPoiDetail;
    id <MMLocationPoiHeadViewDelegate> _delegate;
    MMUIActivityIndicatorView *_activityIndicatorView;
    MMUILabel *_addressMainLabel;
    MMUILabel *_addressSubLabel;
    UIView *_addressMsgView;
    MMUIButton *_topRectangeView;
    MMUIButton *_navMapBtn;
    MMUILabel *_navMapLabel;
    MMUIButton *_takeCarBtn;
    MMUILabel *_takeCarLabel;
    MMUIButton *_privatTipsView;
    FixTitleColorButton *_favBtn;
    double _animationPercent;
}

- (void).cxx_destruct;
@property(nonatomic) double animationPercent; // @synthesize animationPercent=_animationPercent;
@property(retain, nonatomic) FixTitleColorButton *favBtn; // @synthesize favBtn=_favBtn;
@property(retain, nonatomic) MMUIButton *privatTipsView; // @synthesize privatTipsView=_privatTipsView;
@property(retain, nonatomic) MMUILabel *takeCarLabel; // @synthesize takeCarLabel=_takeCarLabel;
@property(retain, nonatomic) MMUIButton *takeCarBtn; // @synthesize takeCarBtn=_takeCarBtn;
@property(retain, nonatomic) MMUILabel *navMapLabel; // @synthesize navMapLabel=_navMapLabel;
@property(retain, nonatomic) MMUIButton *navMapBtn; // @synthesize navMapBtn=_navMapBtn;
@property(retain, nonatomic) MMUIButton *topRectangeView; // @synthesize topRectangeView=_topRectangeView;
@property(retain, nonatomic) UIView *addressMsgView; // @synthesize addressMsgView=_addressMsgView;
@property(retain, nonatomic) MMUILabel *addressSubLabel; // @synthesize addressSubLabel=_addressSubLabel;
@property(retain, nonatomic) MMUILabel *addressMainLabel; // @synthesize addressMainLabel=_addressMainLabel;
@property(retain, nonatomic) MMUIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(nonatomic) _Bool showPoiDetail; // @synthesize showPoiDetail=_showPoiDetail;
@property(nonatomic) _Bool showTakeCarBtn; // @synthesize showTakeCarBtn=_showTakeCarBtn;
@property(nonatomic) _Bool isFromNearbyLife; // @synthesize isFromNearbyLife=_isFromNearbyLife;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) __weak id <MMLocationPoiHeadViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)useNewFavStyle;
- (double)navBtnCenterY;
- (double)shrinkFavBtnNeedHeight;
- (double)expandFavBtnNeedHeight;
- (double)contentHeight:(double)arg1 detailHeight:(double)arg2;
- (double)contentHeightWhenLoading:(double)arg1;
- (void)onPhoneClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onTapTakeCarBtn:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)onMenuControllerDidHide;
- (void)onMenuControllerWillShow;
- (void)copyAddressString;
- (void)onTapCopyMenuItem;
- (void)onLongPressAddressLabel:(id)arg1;
- (void)onLongPressFavBtn:(id)arg1;
- (void)onTapFavBtn:(id)arg1;
- (void)onTapSwitchBtn:(id)arg1;
- (void)onTapNavMapBtn:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)onDragProgressChanged:(double)arg1;
- (void)updateNearByLifeStatus:(_Bool)arg1;
- (void)setSubAddress:(id)arg1;
- (void)updateFavSelected:(_Bool)arg1;
- (void)updateWithPoiInfo;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)updateLayout;
- (void)initSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 poiInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

