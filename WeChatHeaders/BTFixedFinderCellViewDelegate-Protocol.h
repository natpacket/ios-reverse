//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BTFixedFinderCellView, BTFixedFinderCellViewModel;

@protocol BTFixedFinderCellViewDelegate <NSObject>

@optional
- (void)fixedFinderCellView:(BTFixedFinderCellView *)arg1 onLongClickCoverArea:(BTFixedFinderCellViewModel *)arg2 index:(long long)arg3;
- (void)fixedFinderCellView:(BTFixedFinderCellView *)arg1 onLongClickInfoArea:(BTFixedFinderCellViewModel *)arg2 index:(long long)arg3;
- (void)fixedFinderCellView:(BTFixedFinderCellView *)arg1 onClickCoverArea:(BTFixedFinderCellViewModel *)arg2 index:(long long)arg3;
- (void)fixedFinderCellView:(BTFixedFinderCellView *)arg1 onClickInfoArea:(BTFixedFinderCellViewModel *)arg2 index:(long long)arg3;
@end

