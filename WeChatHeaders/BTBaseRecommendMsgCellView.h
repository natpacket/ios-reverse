//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BTBaseItemCellView.h"

@class BTBaseRecommendMsgCellViewModel, BTRecommendSectionData, MMUIButton, UILongPressGestureRecognizer, UIView;

@interface BTBaseRecommendMsgCellView : BTBaseItemCellView
{
    UIView *m_highlightMaskView;
    UILongPressGestureRecognizer *m_longPressGestureRecognizer;
    UIView *m_separateLine;
    BTRecommendSectionData *_sectionData;
    MMUIButton *_feedbackBtn;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MMUIButton *feedbackBtn; // @synthesize feedbackBtn=_feedbackBtn;
@property(readonly, nonatomic) BTRecommendSectionData *sectionData; // @synthesize sectionData=_sectionData;
- (void)handleLongPress:(id)arg1;
- (void)initGestureRecognizer;
- (_Bool)needHighlightLayer;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)initHighlightMaskView;
- (void)initSeparateLine;
- (void)onClickFeedbackBtn;
- (void)initFeedbackBtn;
- (unsigned long long)cellRectCorner;
- (void)layoutContentView;
- (void)layoutSubviews;
- (void)onUpdateViewModel;
- (void)initSubviews;
- (void)setViewModel:(id)arg1;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) BTBaseRecommendMsgCellViewModel *viewModel;

@end
