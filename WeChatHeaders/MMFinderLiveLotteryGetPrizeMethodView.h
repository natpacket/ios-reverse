//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FinderLiveLotteryClaimMethod, NSMutableArray;

@interface MMFinderLiveLotteryGetPrizeMethodView : UIView
{
    double _currentHeight;
    FinderLiveLotteryClaimMethod *_claimMethod;
    NSMutableArray *_itemArray;
    NSMutableArray *_itemHeightArray;
    UIView *_sepelateLine;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *sepelateLine; // @synthesize sepelateLine=_sepelateLine;
@property(copy, nonatomic) NSMutableArray *itemHeightArray; // @synthesize itemHeightArray=_itemHeightArray;
@property(copy, nonatomic) NSMutableArray *itemArray; // @synthesize itemArray=_itemArray;
@property(retain, nonatomic) FinderLiveLotteryClaimMethod *claimMethod; // @synthesize claimMethod=_claimMethod;
@property(nonatomic) double currentHeight; // @synthesize currentHeight=_currentHeight;
- (void)createItemWithClaimInfo:(id)arg1 originY:(double)arg2 height:(double)arg3;
- (void)layoutSeparateLine;
- (void)createUI;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (double)getHeightWithClaimInfo:(id)arg1;
- (double)getPrizeMethodViewHeight:(id)arg1;

@end

