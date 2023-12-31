//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "WCFinderFeedImageCDNViewDelegate-Protocol.h"

@class CAGradientLayer, MMUILabel, NSString, UIView, WCFinderDataItem, WCFinderFeedImageCDNView, WCFinderHeadImageView;

@interface MMLiveSpecialCollectionViewCell : UICollectionViewCell <WCFinderFeedImageCDNViewDelegate>
{
    _Bool _isPlaying;
    _Bool _needUpdateLayerColor;
    WCFinderDataItem *_dataItem;
    WCFinderFeedImageCDNView *_coverView;
    WCFinderHeadImageView *_headImageView;
    MMUILabel *_nickNameLabel;
    UIView *_headImageBorderView;
    CAGradientLayer *_mainColorGradientLayer;
    CAGradientLayer *_shadowGradientLayer;
}

+ (id)ReuseIdentifier;
+ (struct CGSize)cellSize;
- (void).cxx_destruct;
@property(nonatomic) _Bool needUpdateLayerColor; // @synthesize needUpdateLayerColor=_needUpdateLayerColor;
@property(retain, nonatomic) CAGradientLayer *shadowGradientLayer; // @synthesize shadowGradientLayer=_shadowGradientLayer;
@property(retain, nonatomic) CAGradientLayer *mainColorGradientLayer; // @synthesize mainColorGradientLayer=_mainColorGradientLayer;
@property(retain, nonatomic) UIView *headImageBorderView; // @synthesize headImageBorderView=_headImageBorderView;
@property(retain, nonatomic) MMUILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) WCFinderFeedImageCDNView *coverView; // @synthesize coverView=_coverView;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) __weak WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void)finderFeedImageLoadFinish;
- (void)prepareForReuse;
- (void)updateContent;
- (void)updateBorderStatus;
- (void)layoutSubviews;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

