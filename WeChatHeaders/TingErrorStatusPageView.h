//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMUILabel, NSString, UIButton, UIImageView;
@protocol TingErrorStatusPageViewDelegate;

@interface TingErrorStatusPageView : UIView
{
    NSString *_showText;
    id <TingErrorStatusPageViewDelegate> _delegate;
    UIImageView *_imageView;
    MMUILabel *_label;
    UIButton *_closeBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) MMUILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak id <TingErrorStatusPageViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *showText; // @synthesize showText=_showText;
- (void)goBack;
- (void)layoutSubviews;

@end

