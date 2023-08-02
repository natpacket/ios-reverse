//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class TingCategoryCardView, UILongPressGestureRecognizer;

@interface TingCategoryCardCell : UICollectionViewCell
{
    CDUnknownBlockType _longPressDone;
    TingCategoryCardView *_cardView;
    UILongPressGestureRecognizer *_longPressGes;
}

+ (double)getCellHeight:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGes; // @synthesize longPressGes=_longPressGes;
@property(retain, nonatomic) TingCategoryCardView *cardView; // @synthesize cardView=_cardView;
@property(copy, nonatomic) CDUnknownBlockType longPressDone; // @synthesize longPressDone=_longPressDone;
- (void)onLongPressGesture;
- (id)getCreateImage;
- (void)configureLayout;
- (void)updateDisplayWith:(id)arg1 coverController:(id)arg2 type:(unsigned long long)arg3;
- (void)updateDisplayWith:(id)arg1 type:(unsigned long long)arg2;
- (void)updateCreateCell;
- (void)initLongPressGesture;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)prepareForReuse;

@end

