//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface GCDragDecorateView : UIView
{
    _Bool _isDragged;
    UIImageView *_decorateView;
    double _cornerRadius;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isDragged; // @synthesize isDragged=_isDragged;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) UIImageView *decorateView; // @synthesize decorateView=_decorateView;
- (void)layoutSubviews;
- (void)setUpUI;

@end
