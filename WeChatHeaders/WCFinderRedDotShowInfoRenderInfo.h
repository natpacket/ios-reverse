//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WCFinderRedDotRenderResultModel;

@interface WCFinderRedDotShowInfoRenderInfo : NSObject
{
    double _availableWidth;
    WCFinderRedDotRenderResultModel *_renderModel;
    unsigned long long _entryScene;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long entryScene; // @synthesize entryScene=_entryScene;
@property(retain, nonatomic) WCFinderRedDotRenderResultModel *renderModel; // @synthesize renderModel=_renderModel;
@property(nonatomic) double availableWidth; // @synthesize availableWidth=_availableWidth;
- (_Bool)canReuseByAvailableWidth:(double)arg1 entryScene:(unsigned long long)arg2;

@end

