//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class MMUIButton;

@interface WCFinderImageRedDotBaseView : MMUIView
{
    MMUIButton *_imageBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *imageBtn; // @synthesize imageBtn=_imageBtn;
- (_Bool)addBlurEffectWithColor:(id)arg1;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1 btnBkgColor:(id)arg2 isCircular:(_Bool)arg3 expandHitHeight:(double)arg4 expandHitWidth:(double)arg5 accessibilityLabel:(id)arg6;

@end
