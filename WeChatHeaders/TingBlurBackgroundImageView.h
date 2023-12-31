//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImage, UIImageView;
@protocol TingBlurBackgroundImageViewDelegate;

@interface TingBlurBackgroundImageView : UIView
{
    id <TingBlurBackgroundImageViewDelegate> _delegate;
    unsigned long long _scene;
    NSString *_imageUrl;
    UIImage *_oriImage;
    UIImageView *_imageView;
    UIView *_miniBarColorBgView;
    UIView *_darkModeMaskView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *darkModeMaskView; // @synthesize darkModeMaskView=_darkModeMaskView;
@property(retain, nonatomic) UIView *miniBarColorBgView; // @synthesize miniBarColorBgView=_miniBarColorBgView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImage *oriImage; // @synthesize oriImage=_oriImage;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) __weak id <TingBlurBackgroundImageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setupSubviews;
- (void)reset;
- (double)miniBarColorBgAlpha;
- (void)updateDarkModeMaskViewAlpha:(double)arg1;
- (void)forceSetMiniBarColorBgAlpha:(double)arg1;
- (id)currentOriImage;
- (id)currentBlurImage;
- (void)setOriImage:(id)arg1 blurImage:(id)arg2 animated:(_Bool)arg3;
- (void)setImage:(id)arg1 cacheKey:(id)arg2 animated:(_Bool)arg3;
- (void)setUrl:(id)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 scene:(unsigned long long)arg2;
- (id)initWithScene:(unsigned long long)arg1;

@end

