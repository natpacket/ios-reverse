//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMFinderLiveBannerInfo;

@interface MMFinderLiveBannerCellViewModel : NSObject
{
    _Bool _disbalePagAnimation;
    MMFinderLiveBannerInfo *_bannerInfo;
    unsigned long long _curSubTitleIndex;
}

+ (id)vmWithBanner:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool disbalePagAnimation; // @synthesize disbalePagAnimation=_disbalePagAnimation;
@property(nonatomic) unsigned long long curSubTitleIndex; // @synthesize curSubTitleIndex=_curSubTitleIndex;
@property(retain, nonatomic) MMFinderLiveBannerInfo *bannerInfo; // @synthesize bannerInfo=_bannerInfo;

@end

