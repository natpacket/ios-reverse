//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BTBaseRecommendAppMsgCellViewModel.h"

@class NSString;

@interface BTFixedFinderCellViewModel : BTBaseRecommendAppMsgCellViewModel
{
    NSString *_curRecommendReason;
}

+ (_Bool)canCreateViewModelWithSectionData:(id)arg1 accountIndex:(unsigned int)arg2 appMsgIndex:(unsigned int)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *curRecommendReason; // @synthesize curRecommendReason=_curRecommendReason;
- (id)buildFinderModelWithFinderData:(id)arg1;
- (id)finderDataWrapper;
- (double)viewHeight;
- (void)doCellViewDeleteAnimationWithItemIndex:(long long)arg1;
- (long long)finderItemViewModelArrVisibleCount;
- (_Bool)hasOnlyOneVisibleItem;
- (id)finderItemViewModelArr;
- (void)resetCacheData;
- (void)updateWithSectionData:(id)arg1 msgWrap:(id)arg2 itemIndex:(unsigned int)arg3 accountIndex:(unsigned int)arg4 appMsgIndex:(unsigned int)arg5 viewWidth:(double)arg6;
- (id)itemViewClassName;

@end
