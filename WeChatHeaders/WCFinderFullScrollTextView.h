//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIScrollView, WCFinderFeedContentTouchExpandTextView;

@interface WCFinderFullScrollTextView : UIView
{
    UIScrollView *_scrollView;
    WCFinderFeedContentTouchExpandTextView *_contentLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFeedContentTouchExpandTextView *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIView *rightBottomCornerView;
- (void)applyLabelChange;
- (void)changeContent:(id)arg1 maxWidth:(double)arg2 forceExpand:(_Bool)arg3 unExpandLineNum:(unsigned long long)arg4 truncatedTrailingLinkText:(id)arg5 rightIconPadding:(double)arg6 truncatedTrailingLinkColor:(id)arg7;
- (id)initWithFrame:(struct CGRect)arg1;

@end

