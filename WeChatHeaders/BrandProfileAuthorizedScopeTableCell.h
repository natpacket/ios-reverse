//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMMultiMenuTableViewCell.h"

@class BrandProfileAuthorizedScopeTableCellViewModel, MMUILabel, MMWebImageView, UIButton, UIView;
@protocol BrandProfileAuthorizedScopeTableCellDelegate;

@interface BrandProfileAuthorizedScopeTableCell : MMMultiMenuTableViewCell
{
    id <BrandProfileAuthorizedScopeTableCellDelegate> _delegate;
    MMWebImageView *_appIconImageView;
    MMUILabel *_titleLabel;
    MMUILabel *_stateLabel;
    UIView *_topSeperatorLine;
    UIButton *_deleteButton;
    BrandProfileAuthorizedScopeTableCellViewModel *_viewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BrandProfileAuthorizedScopeTableCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) UIView *topSeperatorLine; // @synthesize topSeperatorLine=_topSeperatorLine;
@property(retain, nonatomic) MMUILabel *stateLabel; // @synthesize stateLabel=_stateLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *appIconImageView; // @synthesize appIconImageView=_appIconImageView;
@property(nonatomic) __weak id <BrandProfileAuthorizedScopeTableCellDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)contextMenuEnabled;
- (void)onDeleteButtonClicked;
- (id)wordingForState:(unsigned int)arg1;
- (void)applyViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)setupMenuItems;
- (void)setupSubviews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

