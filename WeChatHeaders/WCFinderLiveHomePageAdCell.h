//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "MMWebImageViewDelegate-Protocol.h"

@class MMWebImageView, NSString, WCFinderLiveStreamElementModel;

@interface WCFinderLiveHomePageAdCell : UICollectionViewCell <MMWebImageViewDelegate>
{
    MMWebImageView *_coverLeftImageView;
    MMWebImageView *_coverRightImageView;
    WCFinderLiveStreamElementModel *_elementModel;
}

+ (id)cellIdentifier;
+ (double)cellWidthWithContainerModel:(id)arg1 inWidth:(double)arg2;
+ (double)cellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveStreamElementModel *elementModel; // @synthesize elementModel=_elementModel;
@property(retain, nonatomic) MMWebImageView *coverRightImageView; // @synthesize coverRightImageView=_coverRightImageView;
@property(retain, nonatomic) MMWebImageView *coverLeftImageView; // @synthesize coverLeftImageView=_coverLeftImageView;
- (void)onLoadImageOK:(id)arg1;
- (void)updateWithElementModel:(id)arg1;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)prepareForReuse;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

