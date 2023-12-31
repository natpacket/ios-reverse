//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, UIResponder, UIView, WNTextView;

@protocol WNTextViewOperationDelegate <NSObject>
- (NSArray *)getMenuItemsWithResponder:(UIResponder *)arg1;
- (struct CGRect)getSelectionMenuTargetRectOnFirstResponder;
- (void)onEditOrderList;
- (_Bool)enableOrderListMenu;
- (_Bool)isOnContentSearching;
- (void)scrollRectToVisible:(struct CGRect)arg1 fromView:(UIView *)arg2;
- (void)onTapWeAppMPShortLink:(NSString *)arg1;
- (void)onResignFirstResponder:(WNTextView *)arg1;
- (void)onBecomeFirstResponder:(WNTextView *)arg1;
@end

