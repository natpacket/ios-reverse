//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class TingSearchHistorySectionData, TingSectionHeaderView, TingSectionHeaderViewConfig;

@interface TingSearchHistorySectionHeaderView : UICollectionReusableView
{
    TingSearchHistorySectionData *_sectionData;
    TingSectionHeaderView *_headerView;
    TingSectionHeaderViewConfig *_headerViewConfig;
}

+ (id)genConfig;
+ (double)lineHeight;
+ (id)reuseIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) TingSectionHeaderViewConfig *headerViewConfig; // @synthesize headerViewConfig=_headerViewConfig;
@property(retain, nonatomic) TingSectionHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) TingSearchHistorySectionData *sectionData; // @synthesize sectionData=_sectionData;
- (id)deleteButton;
- (void)onDeleteBtnClicked:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

