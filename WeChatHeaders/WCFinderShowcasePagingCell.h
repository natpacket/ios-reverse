//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILongPressGestureRecognizer, WCFinderShowcasePagingView;

@interface WCFinderShowcasePagingCell : UIView
{
    UILongPressGestureRecognizer *_longGesture;
    WCFinderShowcasePagingView *_owner;
}

- (void).cxx_destruct;
@property(nonatomic) __weak WCFinderShowcasePagingView *owner; // @synthesize owner=_owner;
@property(retain, nonatomic) UILongPressGestureRecognizer *longGesture; // @synthesize longGesture=_longGesture;
- (void)onTap;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

