//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface MMProgressView : UIView
{
    UIImageView *m_imgvBack;
    UIImageView *m_imgvFront;
    struct CGRect m_rectLayout;
    float m_fProgress;
    float m_fTopWidth;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *m_imgvFront; // @synthesize m_imgvFront;
@property(retain, nonatomic) UIImageView *m_imgvBack; // @synthesize m_imgvBack;
- (void)setProgressFontRect:(struct CGRect)arg1;
- (void)SetFrontImageByName:(id)arg1;
- (void)SetProgress:(float)arg1;
- (void)enableBrandProgress;
- (void)disableBrandProgress;
- (id)initBrandProgressWithFrame:(struct CGRect)arg1 layout:(struct CGRect)arg2;
- (id)initWithFrame:(struct CGRect)arg1 BackImg:(id)arg2 FrontImg:(id)arg3 Layout:(struct CGRect)arg4 CapWidth:(float)arg5 CapHeight:(float)arg6;

@end

