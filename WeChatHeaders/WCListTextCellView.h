//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCListBaseCellView.h"

@interface WCListTextCellView : WCListBaseCellView
{
}

+ (double)calculateHeightWithGroup:(id)arg1 groupItem:(id)arg2 width:(double)arg3 isFirstOneInsection:(_Bool)arg4 isLastOneInSection:(_Bool)arg5;
+ (_Bool)isContentDescMoreThanOneLine:(id)arg1 maxWidth:(double)arg2 maxHeight:(double)arg3 font:(id)arg4;
- (id)customAccessibilityComponents;
- (void)updateAccessibility;
- (_Bool)shouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2 richTextView:(id)arg3;
- (void)onClickEvent;
- (void)initView;

@end

