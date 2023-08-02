//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BrandProfileItemBaseViewModel.h"

@class NSString;

@interface BrandProfileItemVideoViewModel : BrandProfileItemBaseViewModel
{
    double _titleMaxWidth;
    NSString *_timeStr;
    NSString *_coverImgURL;
    struct CGSize _coverImgSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize coverImgSize; // @synthesize coverImgSize=_coverImgSize;
@property(retain, nonatomic) NSString *coverImgURL; // @synthesize coverImgURL=_coverImgURL;
@property(retain, nonatomic) NSString *timeStr; // @synthesize timeStr=_timeStr;
@property(nonatomic) double titleMaxWidth; // @synthesize titleMaxWidth=_titleMaxWidth;
- (id)titleFont;
- (double)calSingleStyleItemHeight;
- (double)normalCoverBottomMargin;
- (double)calCellHeight;
@property(readonly, nonatomic) unsigned long long style;
- (id)tableViewCellClassName;

@end
