//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "MMWebImageViewDelegate-Protocol.h"

@class MMWebImageView, NSString;

@interface MMFinderLiveImageCarouselViewItem : UICollectionViewCell <MMWebImageViewDelegate>
{
    MMWebImageView *_bgView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMWebImageView *bgView; // @synthesize bgView=_bgView;
- (void)onLoadImageOK:(id)arg1;
- (void)layoutBgView;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

