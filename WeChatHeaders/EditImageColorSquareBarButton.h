//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIView;

@interface EditImageColorSquareBarButton : UIButton
{
    UIView *_backColorView;
    UIView *_frontColorView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *frontColorView; // @synthesize frontColorView=_frontColorView;
@property(retain, nonatomic) UIView *backColorView; // @synthesize backColorView=_backColorView;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1;
- (void)setColor:(id)arg1;
- (double)frontSize;
- (double)backSize;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

@end

