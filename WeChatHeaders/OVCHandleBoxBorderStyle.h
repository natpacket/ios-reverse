//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface OVCHandleBoxBorderStyle : NSObject
{
    UIColor *_strokeColor;
    double _strokeWidth;
    UIColor *_shadowColor;
    double _shadowWidth;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double shadowWidth; // @synthesize shadowWidth=_shadowWidth;
@property(readonly, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(readonly, nonatomic) double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property(readonly, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
- (id)description;
- (id)initWithStrokeColor:(id)arg1 strokeWidth:(double)arg2 shadowColor:(id)arg3 shadowWidth:(double)arg4;

@end
