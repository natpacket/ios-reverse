//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCListBaseCellView.h"

@class UIView;

@interface WCListVideoCellView : WCListBaseCellView
{
    UIView *m_tailView;
}

+ (double)calculateHeightWithGroup:(id)arg1 groupItem:(id)arg2 width:(double)arg3 isFirstOneInsection:(_Bool)arg4 isLastOneInSection:(_Bool)arg5;
- (void).cxx_destruct;
- (void)setHighlightedColor;
- (void)setNormalColor;
- (void)onClickEvent;
- (void)initView;
- (void)initTailView;

@end

