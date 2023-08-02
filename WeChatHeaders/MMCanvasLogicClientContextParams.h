//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMWebCanvasItemData;
@protocol MMWebJsCanvasViewPortDelegate;

@interface MMCanvasLogicClientContextParams : NSObject
{
    _Bool _preload;
    MMWebCanvasItemData *_canvasItemData;
    long long _pubPkgVersion;
    long long _bizPkgVersion;
    double _windowWidth;
    id <MMWebJsCanvasViewPortDelegate> _viewDelegate;
    CDUnknownBlockType _prepareCompletion;
    CDUnknownBlockType _deleteHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType deleteHandler; // @synthesize deleteHandler=_deleteHandler;
@property(copy, nonatomic) CDUnknownBlockType prepareCompletion; // @synthesize prepareCompletion=_prepareCompletion;
@property(nonatomic) __weak id <MMWebJsCanvasViewPortDelegate> viewDelegate; // @synthesize viewDelegate=_viewDelegate;
@property(nonatomic) _Bool preload; // @synthesize preload=_preload;
@property(nonatomic) double windowWidth; // @synthesize windowWidth=_windowWidth;
@property(nonatomic) long long bizPkgVersion; // @synthesize bizPkgVersion=_bizPkgVersion;
@property(nonatomic) long long pubPkgVersion; // @synthesize pubPkgVersion=_pubPkgVersion;
@property(retain, nonatomic) MMWebCanvasItemData *canvasItemData; // @synthesize canvasItemData=_canvasItemData;

@end
