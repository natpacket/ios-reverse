//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class UIImageView, UILabel, UIView;

@interface ShakeTableViewCell : MMTableViewCell
{
    UILabel *m_nickNameLabel;
    UILabel *m_personalRemarkLabel;
    UILabel *m_distanceLabel;
    UILabel *m_addedLabel;
    UIImageView *m_genderImageView;
    UIImageView *m_remarkBKImage;
    UIView *m_headerView;
}

- (void).cxx_destruct;
- (void)hideSubViews;
- (void)updateWithLbsContactInfo:(id)arg1 withHeaderView:(id)arg2;
- (void)initSubviews;
- (_Bool)isInMyContactList:(id)arg1;

@end

