//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BTBaseRecommendMsgCellView.h"

@class BTReaderStyleRecommendMsgHeaderCellViewModel, MMUILabel, UILabel;

@interface BTReaderStyleRecommendMsgHeaderCellView : BTBaseRecommendMsgCellView
{
    UILabel *m_headerLabel;
    MMUILabel *m_aggregationLabel;
    MMUILabel *m_timeLabel;
    _Bool _forceSetHighlight;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool forceSetHighlight; // @synthesize forceSetHighlight=_forceSetHighlight;
- (id)getAggregationLabelAccessibilityLabel;
- (void)forceSetHighlight:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)needHighlightLayer;
- (void)initTimeLabel;
- (void)initAggregationLabel;
- (void)initHeaderTitleLabel;
- (void)layoutSubviews;
- (void)onUpdateViewModel;
- (void)initSubviews;

// Remaining properties
@property(readonly, nonatomic) BTReaderStyleRecommendMsgHeaderCellViewModel *viewModel;

@end
