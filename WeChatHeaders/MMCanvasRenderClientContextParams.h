//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol MMCanvasRenderClientContextDelegate, MMWebJsCanvasViewPortDelegate;

@interface MMCanvasRenderClientContextParams : NSObject
{
    NSString *_canvasId;
    double _windowWidth;
    id <MMWebJsCanvasViewPortDelegate> _viewDelegate;
    id <MMCanvasRenderClientContextDelegate> _contextDelegate;
    unsigned long long _viewDelegatePtr;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long viewDelegatePtr; // @synthesize viewDelegatePtr=_viewDelegatePtr;
@property(nonatomic) __weak id <MMCanvasRenderClientContextDelegate> contextDelegate; // @synthesize contextDelegate=_contextDelegate;
@property(nonatomic) __weak id <MMWebJsCanvasViewPortDelegate> viewDelegate; // @synthesize viewDelegate=_viewDelegate;
@property(nonatomic) double windowWidth; // @synthesize windowWidth=_windowWidth;
@property(copy, nonatomic) NSString *canvasId; // @synthesize canvasId=_canvasId;

@end
