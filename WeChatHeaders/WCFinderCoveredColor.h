//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class UIColor;

@interface WCFinderCoveredColor : NSProxy
{
    _Bool _displayBlurWhenCovered;
    _Bool _displayCoveredStyle;
    UIColor *_normalColor;
    UIColor *_coveredColor;
}

+ (_Bool)isDynamicCoveredColor:(id)arg1;
+ (id)colorWithNormal:(id)arg1;
+ (id)colorWithNormal:(id)arg1 coveredBlurColor:(id)arg2;
+ (id)colorWithNormal:(id)arg1 coveredColor:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool displayCoveredStyle; // @synthesize displayCoveredStyle=_displayCoveredStyle;
@property(nonatomic) _Bool displayBlurWhenCovered; // @synthesize displayBlurWhenCovered=_displayBlurWhenCovered;
@property(retain, nonatomic) UIColor *coveredColor; // @synthesize coveredColor=_coveredColor;
@property(retain, nonatomic) UIColor *normalColor; // @synthesize normalColor=_normalColor;
- (_Bool)isEqual:(id)arg1;
- (struct CGColor *)CGColor;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)colorWithAlphaComponent:(double)arg1;
- (id)resolvedColor;

@end

