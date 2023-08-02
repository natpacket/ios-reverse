//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSMutableSet, WCFinderBulletConfig, WCFinderBulletItem;
@protocol WCFinderBulletGroupViewDelegate;

@interface WCFinderBulletGroupView : UIView
{
    WCFinderBulletItem *_lastTapItem;
    id <WCFinderBulletGroupViewDelegate> _delegate;
    WCFinderBulletConfig *_config;
    NSMutableArray *_lines;
    double _preWidth;
    NSMutableSet *_bulletItemContainSet;
    NSMutableArray *_waitingArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *waitingArray; // @synthesize waitingArray=_waitingArray;
@property(retain, nonatomic) NSMutableSet *bulletItemContainSet; // @synthesize bulletItemContainSet=_bulletItemContainSet;
@property(nonatomic) double preWidth; // @synthesize preWidth=_preWidth;
@property(retain, nonatomic) NSMutableArray *lines; // @synthesize lines=_lines;
@property(retain, nonatomic) WCFinderBulletConfig *config; // @synthesize config=_config;
@property(nonatomic) __weak id <WCFinderBulletGroupViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak WCFinderBulletItem *lastTapItem; // @synthesize lastTapItem=_lastTapItem;
- (void)unSelectLastTapItem;
- (void)onLongPress:(id)arg1;
- (id)getTapBulletTextViewWithPoint:(struct CGPoint)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)onTap:(id)arg1;
- (void)addAnimationForItem:(id)arg1 inPoint:(double)arg2;
- (void)updateInPoint:(double)arg1;
- (void)useCache:(id)arg1;
- (id)getCache;
- (void)clearAllAnimations;
- (void)clearAllShowingItems;
- (void)stop;
- (void)clearAllItems;
- (void)deleteItem:(id)arg1;
- (void)insertWaitingItemsIfPossible;
- (void)insertItemToWaitingArray:(id)arg1;
- (void)insertItemImmediately:(id)arg1;
- (void)tryAddItemAgain:(id)arg1;
- (void)addItems:(id)arg1;
- (void)configItemDurations:(id)arg1;
- (void)configItem:(id)arg1;
- (void)setPlayRate:(double)arg1;
- (void)setVideoDuration:(double)arg1;
- (void)layoutSubviews;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

@end

