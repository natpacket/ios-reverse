//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMFinderLiveFansGroupDetailBaseTableViewCell.h"

@class MMFinderLiveFansGroupIntimacyInfo, MMUILabel;

@interface MMFinderLiveFansGroupDailyIntimacyTableCell : MMFinderLiveFansGroupDetailBaseTableViewCell
{
    MMUILabel *_dailyTaskLabel;
    MMUILabel *_dailyMaxIntimacy;
    MMUILabel *_dailyCurIntimacy;
    MMUILabel *_dailyDescLabel;
    MMFinderLiveFansGroupIntimacyInfo *_intimacyInfo;
}

+ (double)getPreferHeightWithIntimacyInfo:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveFansGroupIntimacyInfo *intimacyInfo; // @synthesize intimacyInfo=_intimacyInfo;
@property(retain, nonatomic) MMUILabel *dailyDescLabel; // @synthesize dailyDescLabel=_dailyDescLabel;
@property(retain, nonatomic) MMUILabel *dailyCurIntimacy; // @synthesize dailyCurIntimacy=_dailyCurIntimacy;
@property(retain, nonatomic) MMUILabel *dailyMaxIntimacy; // @synthesize dailyMaxIntimacy=_dailyMaxIntimacy;
@property(retain, nonatomic) MMUILabel *dailyTaskLabel; // @synthesize dailyTaskLabel=_dailyTaskLabel;
- (void)layoutDailyTaskLabel;
- (void)configWithIntimacyInfo:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

