//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface WAEJObjectMemoryMgr : NSObject
{
    NSMutableDictionary *_bindingObjects;
    long long _frameTick;
}

- (id)getBindingObjects;
- (void)removeBindingObject:(id)arg1 jsObject:(id)arg2;
- (void)addBindingObject:(id)arg1 jsObject:(id)arg2;
- (void)reset;
- (void)dealloc;
- (id)init;

@end

