//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TingPlayToolBoxHeaderView, UIButton;

@protocol TingPlayToolBoxHeaderViewDelegate <NSObject>

@optional
- (void)playToolBoxHeaderView:(TingPlayToolBoxHeaderView *)arg1 didLongPressProfileBtn:(UIButton *)arg2;
- (void)playToolBoxHeaderView:(TingPlayToolBoxHeaderView *)arg1 didClickProfileBtn:(UIButton *)arg2;
- (void)playToolBoxHeaderView:(TingPlayToolBoxHeaderView *)arg1 didClickSearchBar:(UIButton *)arg2;
@end

