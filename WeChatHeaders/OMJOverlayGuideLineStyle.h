//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface OMJOverlayGuideLineStyle : NSObject
{
    int _lineWeight;
    float _shadowOpacity;
    UIColor *_backgroundColor;
    double _shadowRadius;
    UIColor *_shadowColor;
    struct CGSize _shadowOffset;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(nonatomic) double shadowRadius; // @synthesize shadowRadius=_shadowRadius;
@property(nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property(nonatomic) float shadowOpacity; // @synthesize shadowOpacity=_shadowOpacity;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) int lineWeight; // @synthesize lineWeight=_lineWeight;
- (id)initWithLineWeight:(int)arg1 backgroundColor:(id)arg2 shadowOpacity:(float)arg3 shadowOffset:(struct CGSize)arg4 shadowRadius:(double)arg5 shadowColor:(id)arg6;
- (id)initWithLineWeight:(int)arg1 backgroundColor:(id)arg2;
- (id)init;

@end

