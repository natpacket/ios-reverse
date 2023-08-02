//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMUILabel, NSNumber, NSString;

@interface VoicePrintDigitView : UIView
{
    NSString *_digits;
    NSString *_title;
    MMUILabel *_digitsLabel;
    MMUILabel *_titleLabel;
    NSNumber *_digitsAlone;
}

- (void).cxx_destruct;
@property(retain, nonatomic, getter=isDigitsAlone) NSNumber *digitsAlone; // @synthesize digitsAlone=_digitsAlone;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUILabel *digitsLabel; // @synthesize digitsLabel=_digitsLabel;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *digits; // @synthesize digits=_digits;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateTitleSize;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
