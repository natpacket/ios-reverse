//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "WCCanvasImageLoaderObserver-Protocol.h"

@class NSString, UIImage, WCAdTouchParticleInfo;

@interface WCAdCardEmitterView : MMUIView <WCCanvasImageLoaderObserver>
{
    WCAdTouchParticleInfo *_particleInfo;
    UIImage *_cellContent;
    double _distanceGap;
    double _chanceGap;
    struct CGPoint _lastPoint;
}

- (void).cxx_destruct;
@property(nonatomic) double chanceGap; // @synthesize chanceGap=_chanceGap;
@property(nonatomic) double distanceGap; // @synthesize distanceGap=_distanceGap;
@property(retain, nonatomic) UIImage *cellContent; // @synthesize cellContent=_cellContent;
@property(nonatomic) struct CGPoint lastPoint; // @synthesize lastPoint=_lastPoint;
@property(retain, nonatomic) WCAdTouchParticleInfo *particleInfo; // @synthesize particleInfo=_particleInfo;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)updateCellContent;
- (void)genGapsWithParticleInfo:(id)arg1;
- (double)getPointDistanceBetweenP1:(struct CGPoint)arg1 p2:(struct CGPoint)arg2;
- (void)endEmitters;
- (void)appendEmitterAtPoint:(struct CGPoint)arg1 more:(_Bool)arg2 longitudeType:(long long)arg3;
- (void)appendEmitterAtPoint:(struct CGPoint)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 particleInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
