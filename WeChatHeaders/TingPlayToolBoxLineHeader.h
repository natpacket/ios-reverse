//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class TingPlayToolBoxSectionData, TingSectionHeaderView, TingSectionHeaderViewConfig;

@interface TingPlayToolBoxLineHeader : UICollectionReusableView
{
    TingPlayToolBoxSectionData *_sectionData;
    TingSectionHeaderView *_headerView;
    TingSectionHeaderViewConfig *_headerViewConfig;
    struct UIEdgeInsets _edgeInsets;
}

+ (id)genConfig;
+ (double)lineHeightWithEdgeInsets:(struct UIEdgeInsets)arg1;
+ (double)lineHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) TingSectionHeaderViewConfig *headerViewConfig; // @synthesize headerViewConfig=_headerViewConfig;
@property(retain, nonatomic) TingSectionHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(retain, nonatomic) TingPlayToolBoxSectionData *sectionData; // @synthesize sectionData=_sectionData;
- (void)updateConfigInDetailPage;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
