//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMUIViewController, WCFilterView;

@protocol WCFilterViewDelegate <NSObject>
- (MMUIViewController *)getCurrentViewController;

@optional
- (void)onSelectionPanelDismissed:(WCFilterView *)arg1;
- (void)onCleanBtnClickAtSection:(unsigned int)arg1;
- (void)onItemClick:(unsigned int)arg1 atSection:(unsigned int)arg2;
@end

