//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CanvasAdaptor : NSObject
{
    shared_ptr_013fd618 _app;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (shared_ptr_bf7a578a)GetDecodeCache;
- (void)CheckAndPost:(function_ffe40f9b)arg1;
- (void)SetAppTag:(id)arg1;
- (id)AppTag;
- (struct HolderBase *)GetHolder;
- (void)ReleaseContext;
- (shared_ptr_34631cd5)GetResourceLoader;
- (void)SetResourceLoaderDelegate:(id)arg1;
- (void)RemoveCanvas:(int)arg1;
- (shared_ptr_3299e206)GetCanvas:(int)arg1;
- (void)AddCanvas:(shared_ptr_3299e206)arg1;
- (shared_ptr_0ffddd04)CreateCanvasViewDelegate;
- (shared_ptr_013fd618)getApp;
- (id)initWithThread:(id)arg1 context:(struct OpaqueJSContext *)arg2 parent:(struct OpaqueJSValue *)arg3 tag:(id)arg4;

@end

