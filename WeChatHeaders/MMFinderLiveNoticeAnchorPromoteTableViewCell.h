//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMFinderLiveAnchorPromoteTableViewCell.h"

@class MMFinderLiveNoticeAnchorPromoteInfo, MMPaddingView, MMUILabel, MMWebImageView, ZZLabelChainModel;

@interface MMFinderLiveNoticeAnchorPromoteTableViewCell : MMFinderLiveAnchorPromoteTableViewCell
{
    MMWebImageView *_titleImgView;
    MMUILabel *_titleLabel;
    MMUILabel *_introLabel;
    MMFinderLiveNoticeAnchorPromoteInfo *_noticePromoteInfo;
    MMPaddingView *_couponsTitleLabel;
    ZZLabelChainModel *_couponsStateModel;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) ZZLabelChainModel *couponsStateModel; // @synthesize couponsStateModel=_couponsStateModel;
@property(retain, nonatomic) MMPaddingView *couponsTitleLabel; // @synthesize couponsTitleLabel=_couponsTitleLabel;
@property(retain, nonatomic) MMFinderLiveNoticeAnchorPromoteInfo *noticePromoteInfo; // @synthesize noticePromoteInfo=_noticePromoteInfo;
@property(retain, nonatomic) MMUILabel *introLabel; // @synthesize introLabel=_introLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *titleImgView; // @synthesize titleImgView=_titleImgView;
- (void)updateLabelsOriginY;
- (void)layoutCouponView;
- (void)layoutIntroLabel;
- (void)layoutTitleLabel;
- (void)layoutTitleImgView;
- (_Bool)enableMenuAction;
- (id)promoteInfo;
- (void)updatePromoteInfo:(id)arg1;
- (void)layoutUI;

@end
