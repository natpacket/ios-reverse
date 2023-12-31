//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class WCFinderCarouselView;
@protocol WCFinderCarouseDelegate, WCFinderCarouselDatasource;

@interface WCFinderProfilePlaylistBigCardCell : UICollectionViewCell
{
    WCFinderCarouselView *_carouselView;
    struct UIEdgeInsets _edgeInsets;
}

+ (double)displayHeightWithWidth:(double)arg1 edgeInsets:(struct UIEdgeInsets)arg2;
+ (id)dequeCell:(id)arg1 fromView:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderCarouselView *carouselView; // @synthesize carouselView=_carouselView;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic) __weak id <WCFinderCarouselDatasource> datasource;
@property(nonatomic) __weak id <WCFinderCarouseDelegate> delegate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setTag:(long long)arg1;

@end

