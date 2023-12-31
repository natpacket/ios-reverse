//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "ZZFlexibleLayoutViewProtocol-Protocol.h"

@class GetProfileInfoResponse_RelievedBuyInfo, NSString, UIButton, UILabel, WAProfileEasyBuyIconView;

@interface WAProfileEasyBuyCell : UITableViewCell <ZZFlexibleLayoutViewProtocol>
{
    GetProfileInfoResponse_RelievedBuyInfo *_infoModel;
    CDUnknownBlockType _viewEventAction;
    WAProfileEasyBuyIconView *_iconView;
    UIButton *_cardView;
    UILabel *_titleLabel;
}

+ (double)viewHeightByDataModel:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *cardView; // @synthesize cardView=_cardView;
@property(retain, nonatomic) WAProfileEasyBuyIconView *iconView; // @synthesize iconView=_iconView;
@property(copy, nonatomic) CDUnknownBlockType viewEventAction; // @synthesize viewEventAction=_viewEventAction;
@property(retain, nonatomic) GetProfileInfoResponse_RelievedBuyInfo *infoModel; // @synthesize infoModel=_infoModel;
- (void)setupSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setViewDataModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

