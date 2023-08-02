//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class UIImageView, UILabel;

@interface WXGRoamSelectCell : MMTableViewCell
{
    long long m_cellType;
    unsigned long long m_userNumber;
    _Bool m_isSelected;
    int m_rowNumber;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIImageView *_chosenImg;
    double _cellHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(retain, nonatomic) UIImageView *chosenImg; // @synthesize chosenImg=_chosenImg;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)setupCellView;
- (id)initWithCellType:(long long)arg1 userNumber:(unsigned long long)arg2 isSelected:(_Bool)arg3 rowNumber:(int)arg4;

@end
