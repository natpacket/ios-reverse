//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class TingSectionHeaderView, TingSectionHeaderViewConfig;

@interface TingMusicInfoSectionHeaderView : UICollectionReusableView
{
    TingSectionHeaderView *_headerView;
    TingSectionHeaderViewConfig *_headerViewConfig;
}

+ (id)genConfig;
+ (double)headerViewHeight;
+ (id)reuseIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) TingSectionHeaderViewConfig *headerViewConfig; // @synthesize headerViewConfig=_headerViewConfig;
@property(retain, nonatomic) TingSectionHeaderView *headerView; // @synthesize headerView=_headerView;
- (void)updateWithTitle:(id)arg1;
- (void)layoutSubviews;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

