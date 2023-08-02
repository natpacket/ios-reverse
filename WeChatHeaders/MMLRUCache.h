//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMLRUCache : NSObject
{
    unsigned int m_capacity;
    _Bool m_alwaysCache;
    struct unordered_map<NSString *, id, KeyHasher, KeyEqualer, std::allocator<std::pair<NSString *const, id>>> m_dic;
    struct vector<NSString *__unsafe_unretained, std::allocator<NSString *__unsafe_unretained>> m_vector;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)allKeysAndObjects;
- (id)allObjects;
- (id)allKeys;
- (unsigned long long)count;
- (unsigned int)capacity;
- (void)removeAllObjects;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)removeObjectForKey:(id)arg1;
- (id)initWithCapacity:(unsigned int)arg1;

@end

