//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMMultiMenuTableViewCell.h"

@class EnterpriseSessionCellData, EnterpriseSessionCellLayoutParam, MMBadgeView, MMHeadImageView, UIImageView, UILabel, UIView;

@interface EnterpriseSessionItemView : MMMultiMenuTableViewCell
{
    EnterpriseSessionCellData *_cellData;
    EnterpriseSessionCellLayoutParam *_layoutParam;
    UIView *_backgroudView;
    MMHeadImageView *_headView;
    MMBadgeView *_msgCountView;
    UIImageView *_statusView;
    UILabel *_nicknameLabel;
    UILabel *_msgLabel;
    UILabel *_alertLabel;
    UILabel *_timeLabel;
    UIImageView *_chatNotPushView;
    _Bool bAlertToRight;
    _Bool _isSubscribeBrandContact;
}

+ (double)cellHeight;
- (void).cxx_destruct;
- (void)onUpdateCellWithCellData:(id)arg1;
- (id)cellSessionDataLastMsg:(id)arg1;
- (void)updateBackgroundColorWithSessionCellData:(id)arg1;
- (void)updateChatNotPushWithSessionCellData:(id)arg1;
- (void)updateMoreMenuWithSessionCellData:(id)arg1;
- (void)updateMsgLabelWithSessionCellData:(id)arg1;
- (void)updateAlertLabelWithSessionCellData:(id)arg1;
- (void)updateStatusWithSessionCellData:(id)arg1;
- (void)updateUnReadCountWithSessionCellData:(id)arg1;
- (void)updateNameLabelWithSessionCellData:(id)arg1;
- (void)updateTimeLabelWithSessionCellData:(id)arg1;
- (void)updateHeadViewWithSessionCellData:(id)arg1;
- (double)rightBoundOfAlertLabelOrStatusImage;
- (double)rightBoundOfStatusImage;
- (void)setHeadCategory:(unsigned char)arg1;
- (void)updateBackgroundColor:(id)arg1;
- (void)updateWithSessionCellData:(id)arg1;
- (void)layoutSubviews;
- (void)initSubView;
- (id)initWithReuseIdentifier:(id)arg1;

@end

