//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TXCRetrier : NSObject
{
    long long _retryCount;
    long long _limitCount;
}

+ (id)retrierWithLimitCount:(long long)arg1;
@property(nonatomic) long long limitCount; // @synthesize limitCount=_limitCount;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
- (void)retry:(CDUnknownBlockType)arg1 onReachLimit:(CDUnknownBlockType)arg2;

@end

