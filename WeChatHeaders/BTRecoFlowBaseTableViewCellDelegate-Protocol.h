//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BTRecoFlowBaseTableViewCell, GetRecommendFeedsResp_RecommendCardMsg, GetRecommendFeedsResp_RecommendCardMsg_RecommendItemMsg;

@protocol BTRecoFlowBaseTableViewCellDelegate <NSObject>

@optional
- (void)recoFlowDeleteCell:(BTRecoFlowBaseTableViewCell *)arg1 cardMsg:(GetRecommendFeedsResp_RecommendCardMsg *)arg2;
- (void)recoFlowCell:(BTRecoFlowBaseTableViewCell *)arg1 didClickAggregationLabel:(GetRecommendFeedsResp_RecommendCardMsg_RecommendItemMsg *)arg2;
- (void)recoFlowCell:(BTRecoFlowBaseTableViewCell *)arg1 didClickFeedbackBtn:(GetRecommendFeedsResp_RecommendCardMsg *)arg2;
- (void)recoFlowCellDidClickExpandMore:(BTRecoFlowBaseTableViewCell *)arg1;
@end

