//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMBaseMultiMenuTableViewCell.h"

#import "ZZFlexibleLayoutViewProtocol-Protocol.h"

@class MMWebImageView, NSString, UIButton, UILabel, WAAuthManagerItemViewModel;

@interface WAAuthManagerItemCell : MMBaseMultiMenuTableViewCell <ZZFlexibleLayoutViewProtocol>
{
    WAAuthManagerItemViewModel *_viewDataModel;
    MMWebImageView *_iconView;
    UIButton *_deleteButton;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
}

+ (double)viewHeightByDataModel:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) MMWebImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) WAAuthManagerItemViewModel *viewDataModel; // @synthesize viewDataModel=_viewDataModel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)onViewPositionUpdatedWithIndexPath:(id)arg1 sectionItemCount:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

