//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WCDataItem, WCMomentsFinderRecommendationViewModel;

@interface WCMomentsNewDataSeparatorViewModel : NSObject
{
    WCDataItem *_dataItem;
    double _width;
    double _maxContentWidth;
    WCMomentsFinderRecommendationViewModel *_finderRecommendationViewModel;
}

+ (id)viewModelWithDataItem:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) WCMomentsFinderRecommendationViewModel *finderRecommendationViewModel; // @synthesize finderRecommendationViewModel=_finderRecommendationViewModel;
@property(readonly, nonatomic) double maxContentWidth; // @synthesize maxContentWidth=_maxContentWidth;
@property(nonatomic) double width; // @synthesize width=_width;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(readonly, copy, nonatomic) NSString *tipsText;
- (id)initWithDataItem:(id)arg1;

@end

