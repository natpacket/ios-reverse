//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "MMScrollableActionSheetHorizontalItemViewDelegate-Protocol.h"

@class NSMutableArray, NSString;
@protocol MMScrollableActionSheetHorizontalScrollViewDelegate;

@interface MMScrollableActionSheetHorizontalScrollView : UIScrollView <MMScrollableActionSheetHorizontalItemViewDelegate>
{
    NSMutableArray *_itemInfoList;
    double _topPadding;
    double _bottomPadding;
    id <MMScrollableActionSheetHorizontalScrollViewDelegate> _actionSheetDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMScrollableActionSheetHorizontalScrollViewDelegate> actionSheetDelegate; // @synthesize actionSheetDelegate=_actionSheetDelegate;
@property(nonatomic) double bottomPadding; // @synthesize bottomPadding=_bottomPadding;
@property(nonatomic) double topPadding; // @synthesize topPadding=_topPadding;
@property(retain, nonatomic) NSMutableArray *itemInfoList; // @synthesize itemInfoList=_itemInfoList;
- (void)onTappedItemInfo:(id)arg1;
- (void)layoutSubviews;
- (void)updateItemViewMap;
- (void)sortItemInfoList;
- (id)generateItemViewForItemInfo:(id)arg1;
- (long long)getItemInfoIndexWithItemType:(unsigned int)arg1;
- (double)calcuateScrollViewHeight;
- (double)calcuateMaxItemHeight;
- (void)addOrUpdateHorizontalRowItemInfo:(id)arg1;
- (void)setHorizontalRowInfoList:(id)arg1;
- (void)reset;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

