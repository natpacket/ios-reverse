//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MBExtJsApiInfo : NSObject
{
    _Bool _isSync;
    _Bool _isRunOnMainThread;
    NSString *_apiName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *apiName; // @synthesize apiName=_apiName;
@property(nonatomic) _Bool isRunOnMainThread; // @synthesize isRunOnMainThread=_isRunOnMainThread;
@property(nonatomic) _Bool isSync; // @synthesize isSync=_isSync;
- (id)init:(id)arg1 sync:(_Bool)arg2 mainThread:(_Bool)arg3;

@end
