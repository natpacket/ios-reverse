//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TingCategoryCommonHeaderView, UIButton, UILabel;

@protocol TingCategoryCommonHeaderViewDelegate <NSObject>

@optional
- (void)tingAlbumDetailHeaderViewDidChangeBgColor:(TingCategoryCommonHeaderView *)arg1;
- (void)tingCategoryCommonHeaderView:(TingCategoryCommonHeaderView *)arg1 didClickLike:(UIButton *)arg2;
- (void)tingCategoryCommonHeaderView:(TingCategoryCommonHeaderView *)arg1 didClickNoCopyRightDescLabel:(UILabel *)arg2;
- (void)tingCategoryCommonHeaderViewDidClickStyle:(TingCategoryCommonHeaderView *)arg1;
- (void)tingCategoryCommonHeaderViewDidClickDescMore:(TingCategoryCommonHeaderView *)arg1;
- (void)tingCategoryCommonHeaderViewDidClickCamera:(TingCategoryCommonHeaderView *)arg1;
- (void)tingCategoryCommonHeaderViewDidTapAuthor:(TingCategoryCommonHeaderView *)arg1;
- (void)tingCategoryCommonHeaderViewDidTapAddView:(TingCategoryCommonHeaderView *)arg1;
- (void)tingCategoryCommonHeaderViewDidClickPencil:(TingCategoryCommonHeaderView *)arg1;
- (void)tingCategoryCommonHeaderViewDidClickPlayShuffle:(TingCategoryCommonHeaderView *)arg1;
- (void)tingCategoryCommonHeaderViewDidClickPlayAll:(TingCategoryCommonHeaderView *)arg1;
- (void)tingCategoryCommonHeaderViewDidClickMore:(TingCategoryCommonHeaderView *)arg1;
@end

