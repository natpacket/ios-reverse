//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCBaseCollectionViewCell.h"

@class UILabel;

@interface GCChanellTitleCell : GCBaseCollectionViewCell
{
    UILabel *_titleLabel;
    UILabel *_numberLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *numberLabel; // @synthesize numberLabel=_numberLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)setSelected:(_Bool)arg1;
- (void)configureWithCellModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

