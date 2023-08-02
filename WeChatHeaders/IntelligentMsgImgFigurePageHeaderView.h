//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "IntelligentMsgImgFigurePageViewDelegate-Protocol.h"

@class IntelligentMsgImgFigurePageView, MMUILabel, NSArray, NSString;
@protocol IntelligentMsgImgFigurePageHeaderViewDelegate;

@interface IntelligentMsgImgFigurePageHeaderView : MMUIView <IntelligentMsgImgFigurePageViewDelegate>
{
    MMUILabel *m_titleLabel;
    IntelligentMsgImgFigurePageView *m_figurePageView;
    NSArray *m_arrFaceClusterMessageItem;
    id <IntelligentMsgImgFigurePageHeaderViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IntelligentMsgImgFigurePageHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onMsgFigureImgClicked:(id)arg1;
- (void)onTransitionToNewSize;
- (void)updateMsgImgFigurePageHeaderView:(id)arg1;
- (double)calculationHeight;
- (void)layoutSubviews;
- (void)initFigurePageView;
- (void)layoutFigurePageView;
- (void)layoutTitleLabel;
- (void)layoutView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

