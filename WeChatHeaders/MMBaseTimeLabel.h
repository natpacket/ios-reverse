//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface MMBaseTimeLabel : UIView
{
    NSString *_prefix;
    _Bool _hideHours;
    UILabel *_label;
    UILabel *_suffixLabel;
    unsigned long long _seconds;
    NSString *_maxWidthTime;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hideHours; // @synthesize hideHours=_hideHours;
@property(copy, nonatomic) NSString *maxWidthTime; // @synthesize maxWidthTime=_maxWidthTime;
@property(nonatomic) unsigned long long seconds; // @synthesize seconds=_seconds;
@property(readonly, nonatomic) UILabel *suffixLabel; // @synthesize suffixLabel=_suffixLabel;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *prefix;
- (void)updateText;
- (id)initWithFrame:(struct CGRect)arg1;

@end

