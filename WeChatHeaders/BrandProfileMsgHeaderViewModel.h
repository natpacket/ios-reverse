//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BrandProfileMsgBaseViewModel.h"

@class NSMutableArray, NSString, UIFont;

@interface BrandProfileMsgHeaderViewModel : BrandProfileMsgBaseViewModel
{
    NSMutableArray *_titleLabelStyles;
    struct CGSize _titleSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize titleSize; // @synthesize titleSize=_titleSize;
@property(retain, nonatomic) NSMutableArray *titleLabelStyles; // @synthesize titleLabelStyles=_titleLabelStyles;
- (void)onUnfold;
@property(readonly, nonatomic) UIFont *titleFont;
@property(readonly, nonatomic) NSString *titleStr;
@property(readonly, nonatomic) double titleBottomPadding;
@property(readonly, nonatomic) double titleTopPadding;
@property(readonly, nonatomic) double titleHeight;
@property(readonly, nonatomic) unsigned long long headerType;
- (double)calCellHeight;
- (id)tableViewCellClassName;

@end

