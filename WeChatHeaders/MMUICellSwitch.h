//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UISwitch.h>

@class UIView;

@interface MMUICellSwitch : UISwitch
{
    UIView *_superContainerView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *superContainerView; // @synthesize superContainerView=_superContainerView;
- (void)layoutSubviews;
- (struct CGPoint)accessibilityActivationPoint;
- (struct CGRect)accessibilityFrame;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)getSuperContainerView;

@end
