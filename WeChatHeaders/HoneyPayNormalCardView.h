//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface HoneyPayNormalCardView : UIView
{
    NSString *_payerUserName;
    UIView *_contentView;
    UIImageView *_icon;
    UIImageView *_backgroundIcon;
    UILabel *_cardTypeLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *cardTypeLabel; // @synthesize cardTypeLabel=_cardTypeLabel;
@property(retain, nonatomic) UIImageView *backgroundIcon; // @synthesize backgroundIcon=_backgroundIcon;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) NSString *payerUserName; // @synthesize payerUserName=_payerUserName;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end

