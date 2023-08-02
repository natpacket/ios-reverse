//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class AttributeLabel, FTSFeatureItem, MMBrandHeadImageView, SearchMatchTip;

@interface FTSFeatureCell : MMTableViewCell
{
    FTSFeatureItem *_featureItem;
    SearchMatchTip *_matchTip;
    MMBrandHeadImageView *_thumbImageView;
    AttributeLabel *_titleLabel;
    AttributeLabel *_detailLabel;
    _Bool _bAsTopHit;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) FTSFeatureItem *featureItem; // @synthesize featureItem=_featureItem;
- (id)getTopHitDescrpition;
- (void)layoutSubviews;
- (void)updateFeatureItem:(id)arg1 matchTip:(id)arg2 asTopHit:(_Bool)arg3;
- (void)updateFeatureItem:(id)arg1 matchTip:(id)arg2;
- (void)updateStatus:(_Bool)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

