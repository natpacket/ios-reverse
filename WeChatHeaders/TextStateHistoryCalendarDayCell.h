//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class MMUILabel, NSMutableArray, TextStateHistoryCalendarItem;

@interface TextStateHistoryCalendarDayCell : UICollectionViewCell
{
    TextStateHistoryCalendarItem *_item;
    MMUILabel *_dayLabel;
    NSMutableArray *_iconViewList;
    unsigned long long _count;
}

+ (double)iconMarginForCount:(unsigned long long)arg1;
+ (double)iconLengthForCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(retain, nonatomic) NSMutableArray *iconViewList; // @synthesize iconViewList=_iconViewList;
@property(retain, nonatomic) MMUILabel *dayLabel; // @synthesize dayLabel=_dayLabel;
@property(retain, nonatomic) TextStateHistoryCalendarItem *item; // @synthesize item=_item;
- (void)setFrame:(struct CGRect)arg1;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

