//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMBaseMultiMenuTableViewCell.h"

#import "ZZFlexibleLayoutViewProtocol-Protocol.h"

@class MMUILabel, MMWebImageView, NSString, UIImageView, WAAuthorizeTableViewCellInfo;

@interface WAAuthorizeTableViewCell : MMBaseMultiMenuTableViewCell <ZZFlexibleLayoutViewProtocol>
{
    WAAuthorizeTableViewCellInfo *_viewDataModel;
    MMWebImageView *_iconView;
    MMUILabel *_titleLabel;
    MMUILabel *_subTitleLabel;
    UIImageView *_selectImageView;
}

+ (double)viewHeight;
+ (double)viewHeightByDataModel:(id)arg1 hostView:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *selectImageView; // @synthesize selectImageView=_selectImageView;
@property(retain, nonatomic) MMUILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) WAAuthorizeTableViewCellInfo *viewDataModel; // @synthesize viewDataModel=_viewDataModel;
- (id)accessibilityLabel;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)onViewPositionUpdatedWithIndexPath:(id)arg1 sectionItemCount:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

