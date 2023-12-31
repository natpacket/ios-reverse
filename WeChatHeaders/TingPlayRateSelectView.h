//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;
@protocol TingPlayRateSelectViewDelegate;

@interface TingPlayRateSelectView : UIView
{
    id <TingPlayRateSelectViewDelegate> _delegate;
    NSMutableArray *_rateButtonList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *rateButtonList; // @synthesize rateButtonList=_rateButtonList;
@property(nonatomic) __weak id <TingPlayRateSelectViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setSelectedRate:(float)arg1;
- (void)rateButtonClicked:(id)arg1;
- (void)layoutSubviews;
- (id)buildRateButtonForRate:(float)arg1 text:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

