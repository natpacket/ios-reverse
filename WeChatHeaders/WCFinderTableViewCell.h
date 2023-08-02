//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSHashTable, WCFinderPassThoughView;

@interface WCFinderTableViewCell : UITableViewCell
{
    double _contentWidth;
    WCFinderPassThoughView *_wc_contentView;
    NSHashTable *_hiddenOnHalfHashTable;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSHashTable *hiddenOnHalfHashTable; // @synthesize hiddenOnHalfHashTable=_hiddenOnHalfHashTable;
@property(retain, nonatomic) WCFinderPassThoughView *wc_contentView; // @synthesize wc_contentView=_wc_contentView;
@property(nonatomic) double contentWidth; // @synthesize contentWidth=_contentWidth;
- (void)doCellEndExposeAction;
- (void)cellStartExposeReportAction;
- (void)reLayoutContentView;
- (void)layoutSubviews;
- (void)aopAddSubViewAction;
- (void)clearHalfArrayNoneRenderedViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

