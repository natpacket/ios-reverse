//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DeallocHelper : NSObject
{
    id _target;
    CDUnknownBlockType _callback;
}

+ (void)DettachObject:(id)arg1 key:(const void *)arg2;
+ (void)attachToObject:(id)arg1 key:(const void *)arg2 whenDeallocDoThis:(CDUnknownBlockType)arg3;
+ (_Bool)exist:(id)arg1 forKey:(const void *)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) id target; // @synthesize target=_target;
- (void)dealloc;

@end

