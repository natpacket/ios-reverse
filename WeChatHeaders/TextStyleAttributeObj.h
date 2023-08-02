//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, UIColor;

@interface TextStyleAttributeObj : NSObject
{
    _Bool _isOuterStroke;
    _Bool _customShadow;
    NSNumber *_textAttributeStrokeWidthNum;
    UIColor *_textAttributeStrokeColor;
    UIColor *_shadowColor;
    double _shadowBlurRadius;
    struct CGSize _shadowOffset;
}

- (void).cxx_destruct;
@property(nonatomic) double shadowBlurRadius; // @synthesize shadowBlurRadius=_shadowBlurRadius;
@property(nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(nonatomic) _Bool customShadow; // @synthesize customShadow=_customShadow;
@property(retain, nonatomic) UIColor *textAttributeStrokeColor; // @synthesize textAttributeStrokeColor=_textAttributeStrokeColor;
@property(retain, nonatomic) NSNumber *textAttributeStrokeWidthNum; // @synthesize textAttributeStrokeWidthNum=_textAttributeStrokeWidthNum;
@property(nonatomic) _Bool isOuterStroke; // @synthesize isOuterStroke=_isOuterStroke;
- (_Bool)enableDrawInOuterStroke;

@end
