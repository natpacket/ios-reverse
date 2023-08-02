//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol IWCSystemAuthMgr <NSObject>
+ (_Bool)isAuthRequestFrequencyLimitedFor:(unsigned int)arg1 sceneKey:(NSString *)arg2;
+ (void)requestWeChatAndSystemAuthFor:(unsigned int)arg1 scene:(unsigned long long)arg2 completionHandler:(void (^)(_Bool, unsigned int))arg3;
+ (void)requestAuthFor:(unsigned int)arg1 scene:(unsigned long long)arg2 completionHandler:(void (^)(_Bool, unsigned int))arg3;
+ (unsigned int)authorizationStatusFor:(unsigned int)arg1 scene:(unsigned long long)arg2;
@end
