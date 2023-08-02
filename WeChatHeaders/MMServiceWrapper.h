//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class MMBaseService, NSLock;

@interface MMServiceWrapper : NSProxy
{
    MMBaseService *m_service;
    NSLock *m_setLock;
    struct unordered_map<SEL *, NSMethodSignature *, std::hash<SEL *>, std::equal_to<SEL *>, std::allocator<std::pair<SEL *const, NSMethodSignature *>>> m_hookSet;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)unsafeUnwrap;
- (id)debugDescription;
- (id)description;
- (_Bool)isProxy;
- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)isMemberOfClass:(Class)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (Class)class;
- (Class)superclass;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)dealloc;
- (id)initWithServiceObj:(id)arg1;
- (id)strongContextObjectWithContext:(id)arg1;
- (id)strongContextObject;
- (id)weakContextObjectWithContext:(id)arg1;
- (id)weakContextObject;

@end
