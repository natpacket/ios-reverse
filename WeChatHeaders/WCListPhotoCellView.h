//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCListBaseCellView.h"

#import "WCImageViewDelegate-Protocol.h"
#import "WCPuzzleImageViewDelegate-Protocol.h"

@class NSString, UIView;

@interface WCListPhotoCellView : WCListBaseCellView <WCImageViewDelegate, WCPuzzleImageViewDelegate>
{
    UIView *m_imageGridView;
}

+ (double)calculateHeightWithGroup:(id)arg1 groupItem:(id)arg2 width:(double)arg3 isFirstOneInsection:(_Bool)arg4 isLastOneInSection:(_Bool)arg5;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabelForDataItem:(id)arg1;
- (void)onClickWCPuzzleImage:(id)arg1;
- (void)onClickWCImage:(id)arg1;
- (void)setHighlightedColor;
- (void)setNormalColor;
- (void)handleClickImageContentView:(id)arg1;
- (id)findActiveView:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)shouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2 richTextView:(id)arg3;
- (void)safeChangeImageViewDelegate:(id)arg1;
- (void)initView;
- (void)initImageGridView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
