//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "MMWebImageViewDelegate-Protocol.h"

@class MMUIActivityIndicatorView, MMWebImageView, NSString;

@interface WCFinderVideoTemplateSelectCollectionViewCell : UICollectionViewCell <MMWebImageViewDelegate>
{
    MMWebImageView *_imageView;
    MMUIActivityIndicatorView *_customLoadingView;
}

+ (id)cellID;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUIActivityIndicatorView *customLoadingView; // @synthesize customLoadingView=_customLoadingView;
@property(retain, nonatomic) MMWebImageView *imageView; // @synthesize imageView=_imageView;
- (void)onLoadImageOK:(id)arg1;
- (void)showBorder:(_Bool)arg1;
- (void)setCoverUrl:(id)arg1;
- (void)setTemplate:(id)arg1;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

