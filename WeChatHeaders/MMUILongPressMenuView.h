//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol LongPressMenuViewDelegate;

@interface MMUILongPressMenuView : UIView
{
    id <LongPressMenuViewDelegate> menu_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <LongPressMenuViewDelegate> menu_delegate; // @synthesize menu_delegate;
- (void)copy:(id)arg1;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)LongPressEvents;
- (id)initWithFrame:(struct CGRect)arg1;

@end

