//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WACgiService : NSObject
{
}

+ (void)invalidateAllRequest;
+ (void)cancelCgiRequest:(unsigned int)arg1;
+ (unsigned int)genServiceRouteCgiSerialNum;
+ (unsigned int)sendCgiToService:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (_Bool)checkShouldRouteToServiceWhenWeakNet:(id)arg1;
+ (unsigned int)sendCgiDirectlyWithoutServiceRoute:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (unsigned int)sendCgi:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)setExternalIMP:(Class)arg1;
+ (Class)externalIMP;

@end

