//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCTableViewNormalCellManager.h"

@class FinderLiveIncomePageItem, MMUIActivityIndicatorView, MMUIButton, MMWebImageView, UIImageView, UILabel, UIView;
@protocol MMFinderLiveFetchMoneyTableCellDelegate;

@interface MMFinderLiveFetchMoneyTableCell : WCTableViewNormalCellManager
{
    _Bool _isWaiting;
    unsigned int _businessId;
    UIView *_contentView;
    MMWebImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    MMUIButton *_taxButton;
    UILabel *_balanceLabel;
    UIView *_pendingBalanceView;
    UIImageView *_leftImageView;
    UILabel *_pendingBalanceLabel;
    UIImageView *_arrowImageView;
    UIView *_seperatorUpView;
    UIView *_seperatorDownView;
    MMUIButton *_encashLabel;
    MMUIButton *_detailLabel;
    double _maxContentWidth;
    FinderLiveIncomePageItem *_incomePageItem;
    id <MMFinderLiveFetchMoneyTableCellDelegate> _delegate;
    MMUIActivityIndicatorView *_activityIndicatorView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(nonatomic) _Bool isWaiting; // @synthesize isWaiting=_isWaiting;
@property(nonatomic) unsigned int businessId; // @synthesize businessId=_businessId;
@property(nonatomic) __weak id <MMFinderLiveFetchMoneyTableCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FinderLiveIncomePageItem *incomePageItem; // @synthesize incomePageItem=_incomePageItem;
@property(nonatomic) double maxContentWidth; // @synthesize maxContentWidth=_maxContentWidth;
@property(retain, nonatomic) MMUIButton *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) MMUIButton *encashLabel; // @synthesize encashLabel=_encashLabel;
@property(retain, nonatomic) UIView *seperatorDownView; // @synthesize seperatorDownView=_seperatorDownView;
@property(retain, nonatomic) UIView *seperatorUpView; // @synthesize seperatorUpView=_seperatorUpView;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *pendingBalanceLabel; // @synthesize pendingBalanceLabel=_pendingBalanceLabel;
@property(retain, nonatomic) UIImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
@property(retain, nonatomic) UIView *pendingBalanceView; // @synthesize pendingBalanceView=_pendingBalanceView;
@property(retain, nonatomic) UILabel *balanceLabel; // @synthesize balanceLabel=_balanceLabel;
@property(retain, nonatomic) MMUIButton *taxButton; // @synthesize taxButton=_taxButton;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)readDetail;
- (void)startEncash;
- (void)clickBalance;
- (long long)dealWithBalance:(long long)arg1 withBusinessId:(unsigned int)arg2;
- (void)layoutUI;
- (void)initViews;
- (id)initWithIncomePageItem:(id)arg1 maxContentWidth:(double)arg2 delegate:(id)arg3;

@end

