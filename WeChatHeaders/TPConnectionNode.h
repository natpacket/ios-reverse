//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TPConnectionNode : NSObject
{
    void *_nativeConnNode;
}

@property(nonatomic) void *nativeConnNode; // @synthesize nativeConnNode=_nativeConnNode;
- (void *)getNativeConnNode;
- (_Bool)setLongActionConfig:(long long)arg1 cfgType:(long long)arg2 cfgValue:(long long)arg3;
- (void)removeAction:(long long)arg1;
- (_Bool)addAction:(long long)arg1;
- (void)dealloc;
- (id)init;

@end

