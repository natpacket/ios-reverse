//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface ZZShadowModel : NSObject
{
    UIColor *_color;
    double _radius;
    double _opacity;
    struct CGSize _offset;
}

+ (id)create;
- (void).cxx_destruct;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) struct CGSize offset; // @synthesize offset=_offset;

@end
