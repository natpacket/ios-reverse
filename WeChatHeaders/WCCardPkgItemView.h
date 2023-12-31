//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class UIButton, UIView, WCCardData;
@protocol WCCardPkgItemViewDelegate;

@interface WCCardPkgItemView : MMUIView
{
    _Bool _bSelected;
    _Bool _needSelect;
    long long _indexForBatchAdd;
    UIButton *_selectBtn;
    WCCardData *_cardData;
    _Bool _bIsLongPressHandled;
    UIView *_cardBgView;
    UIView *_coverView;
    id <WCCardPkgItemViewDelegate> _delegate;
}

+ (double)CardItemViewTopHeight;
+ (double)CardItemViewHeight;
- (void).cxx_destruct;
@property(nonatomic) long long indexForBatchAdd; // @synthesize indexForBatchAdd=_indexForBatchAdd;
@property(nonatomic) __weak id <WCCardPkgItemViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool bSelected; // @synthesize bSelected=_bSelected;
@property(nonatomic) _Bool needSelect; // @synthesize needSelect=_needSelect;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelectBtnState;
- (void)onSelectChanged;
- (id)getLogoView:(id)arg1;
- (id)getCardBgView:(unsigned int)arg1 bgColor:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithCardData:(id)arg1;

@end

