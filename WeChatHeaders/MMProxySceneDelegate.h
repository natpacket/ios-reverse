//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

#import "UIWindowSceneDelegate-Protocol.h"

@class MMSceneDelegate, NSString, UIWindow;

@interface MMProxySceneDelegate : NSProxy <UIWindowSceneDelegate>
{
    MMSceneDelegate *_target;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMSceneDelegate *target; // @synthesize target=_target;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (_Bool)isProxy;
- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)isMemberOfClass:(Class)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (Class)class;
@property(readonly) Class superclass;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;

// Remaining properties
@property(retain, nonatomic) UIWindow *window;

@end

