//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BrandProfileItemBaseViewModel.h"

@class NSString;

@interface BrandProfileItemImageViewModel : BrandProfileItemBaseViewModel
{
    struct CGSize _coverImgSize;
}

@property(nonatomic) struct CGSize coverImgSize; // @synthesize coverImgSize=_coverImgSize;
@property(readonly, nonatomic) NSString *imageCountStr;
- (id)coverImgURL;
- (id)titleFont;
- (double)titleMaxWidth;
- (double)normalCoverBottomMargin;
- (double)calSingleStyleItemHeight;
- (double)calCellHeight;
- (_Bool)showBigCover;
- (id)tableViewCellClassName;

@end

