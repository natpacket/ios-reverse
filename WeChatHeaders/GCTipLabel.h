//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface GCTipLabel : UIView
{
    UILabel *_unReadCountLabel;
    UIImageView *_unReadIconView;
    unsigned long long _tipType;
}

+ (id)createTipLabel:(unsigned long long)arg1;
+ (id)createTipLabel;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long tipType; // @synthesize tipType=_tipType;
@property(retain, nonatomic) UIImageView *unReadIconView; // @synthesize unReadIconView=_unReadIconView;
@property(retain, nonatomic) UILabel *unReadCountLabel; // @synthesize unReadCountLabel=_unReadCountLabel;
- (void)setUnreadIconImage:(id)arg1;
- (void)updateWidth;
- (void)setText:(id)arg1;
- (void)layoutSubviews;
- (void)updateLayerCornerRadius;
- (id)initWithLabel:(id)arg1 tipType:(unsigned long long)arg2;

@end
