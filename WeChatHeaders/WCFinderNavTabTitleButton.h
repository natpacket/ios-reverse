//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIButton.h"

@class NSString, WCFinderNavTabTitle, YYLabel;

@interface WCFinderNavTabTitleButton : MMUIButton
{
    WCFinderNavTabTitle *_normalTitle;
    WCFinderNavTabTitle *_selectedTitle;
    YYLabel *_label;
    NSString *_dispalyAccessibilityLabel;
    struct CGSize _normalSize;
    struct CGSize _selectedSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *dispalyAccessibilityLabel; // @synthesize dispalyAccessibilityLabel=_dispalyAccessibilityLabel;
@property(retain, nonatomic) YYLabel *label; // @synthesize label=_label;
@property(nonatomic) struct CGSize selectedSize; // @synthesize selectedSize=_selectedSize;
@property(nonatomic) struct CGSize normalSize; // @synthesize normalSize=_normalSize;
@property(retain, nonatomic) WCFinderNavTabTitle *selectedTitle; // @synthesize selectedTitle=_selectedTitle;
@property(retain, nonatomic) WCFinderNavTabTitle *normalTitle; // @synthesize normalTitle=_normalTitle;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)layoutLabel;
- (id)accessibilityLabel;
- (void)update;
- (struct CGSize)displaySizeFotTitle:(id)arg1;
- (void)setupTitle:(id)arg1 selectedTitle:(id)arg2 accessibilityLabel:(id)arg3;

@end

