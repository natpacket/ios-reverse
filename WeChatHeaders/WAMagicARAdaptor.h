//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol WAMagicARAdaptorDelegate;

@interface WAMagicARAdaptor : NSObject
{
    struct OpaqueJSContext *_jscontext;
    void *_runtime;
    id <WAMagicARAdaptorDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)releaseContext;
- (id)initWithJSContext:(struct OpaqueJSContext *)arg1 parent:(struct OpaqueJSValue *)arg2 delegate:(id)arg3;
- (void)dealloc;

@end

