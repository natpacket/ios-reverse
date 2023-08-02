//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MemoryMappedKV, NSString;

@interface MagicBrushMMKVStorage : NSObject
{
    NSString *_mBizName;
    MemoryMappedKV *_mMemoryMappedKV;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MemoryMappedKV *mMemoryMappedKV; // @synthesize mMemoryMappedKV=_mMemoryMappedKV;
@property(copy, nonatomic) NSString *mBizName; // @synthesize mBizName=_mBizName;
- (id)splitValue:(id)arg1;
- (void)setTotalDataSize:(id)arg1 size:(long long)arg2;
- (long long)appendTotalDataSize:(id)arg1 size:(long long)arg2;
- (long long)getQuota:(id)arg1;
- (_Bool)willReachQuota:(id)arg1 size:(long long)arg2;
- (long long)getDataSize:(id)arg1;
- (long long)calculateDataSize:(id)arg1 data:(id)arg2;
- (id)setInner:(id)arg1 key:(id)arg2 data:(id)arg3 dataType:(id)arg4 dataSize:(long long)arg5 checkQuota:(_Bool)arg6;
- (long long)getTotalDataSize:(id)arg1;
- (void)clear:(id)arg1;
- (id)remove:(id)arg1 key:(id)arg2;
- (id)set:(id)arg1 key:(id)arg2 data:(id)arg3 dataType:(id)arg4;
- (id)get:(id)arg1 key:(id)arg2;
- (id)initWithBizName:(id)arg1 bizName:(id)arg2 prefix:(id)arg3;

@end

