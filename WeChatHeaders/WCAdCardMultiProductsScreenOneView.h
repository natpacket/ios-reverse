//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class MMUILabel, NSString;

@interface WCAdCardMultiProductsScreenOneView : MMUIView
{
    NSString *_title;
    NSString *_desc;
    MMUILabel *_titleView;
    MMUILabel *_descView;
    struct CGPoint _titleOriCenter;
    struct CGPoint _descOriCenter;
}

+ (id)getDescColorAgainstTitle:(id)arg1;
+ (id)getDescFontAgainstTitle:(id)arg1;
+ (double)calcHeightWithTitle:(id)arg1 desc:(id)arg2 maxWidth:(double)arg3;
- (void).cxx_destruct;
@property(nonatomic) struct CGPoint descOriCenter; // @synthesize descOriCenter=_descOriCenter;
@property(nonatomic) struct CGPoint titleOriCenter; // @synthesize titleOriCenter=_titleOriCenter;
@property(retain, nonatomic) MMUILabel *descView; // @synthesize descView=_descView;
@property(retain, nonatomic) MMUILabel *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)getObjectsToAppear;
- (id)getObjectsToDisappear;
- (void)makeViewAppearAnimated:(id)arg1 oriCenter:(struct CGPoint)arg2;
- (void)makeViewAppear:(id)arg1 delay:(double)arg2 oriCenter:(struct CGPoint)arg3;
- (void)makeViewDisappearAnimated:(id)arg1 oriCenter:(struct CGPoint)arg2;
- (void)makeViewDisappear:(id)arg1 delay:(double)arg2 oriCenter:(struct CGPoint)arg3;
- (void)timeToAppear;
- (void)timeToDisappear;
- (void)resizeSubviewsWithSize:(struct CGSize)arg1;
- (void)setSize:(struct CGSize)arg1;
- (void)generateSubviews;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 desc:(id)arg3;

@end

