//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TXCVideoBindableObject.h"

@class TXCBeautifyBaseFilter;
@protocol TXIGlContext;

@interface TXCBeautifyFilter : TXCVideoBindableObject
{
    _Bool _enableSharpnessEnhancement;
    float _beautyLevel;
    float _whitenessLevel;
    float _ruddinessLevel;
    unsigned long long _beautyStyle;
    TXCBeautifyBaseFilter *_beautifyFilterImpl;
    id <TXIGlContext> _glContext;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <TXIGlContext> glContext; // @synthesize glContext=_glContext;
@property(retain, nonatomic) TXCBeautifyBaseFilter *beautifyFilterImpl; // @synthesize beautifyFilterImpl=_beautifyFilterImpl;
@property(nonatomic) _Bool enableSharpnessEnhancement; // @synthesize enableSharpnessEnhancement=_enableSharpnessEnhancement;
@property(nonatomic) float ruddinessLevel; // @synthesize ruddinessLevel=_ruddinessLevel;
@property(nonatomic) float whitenessLevel; // @synthesize whitenessLevel=_whitenessLevel;
@property(nonatomic) float beautyLevel; // @synthesize beautyLevel=_beautyLevel;
@property(nonatomic) unsigned long long beautyStyle; // @synthesize beautyStyle=_beautyStyle;
- (void)processVideoFrame:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (void)updateBeautifyImplIfNeeded;
- (void)applyPramas;
@property(readonly, nonatomic) _Bool isEnabled;
- (id)initWithContext:(id)arg1;

@end
