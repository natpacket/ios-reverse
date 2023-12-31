//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMExtensionDictionary, Protocol;

@interface MMExtension : NSObject
{
    unsigned int m_methodCount;
    struct objc_method_description *m_methods;
    MMExtensionDictionary *m_dictObserver;
    MMExtensionDictionary *m_dictKeyObserver;
    Protocol *m_extKey;
}

- (id)existExtensionObject;
- (id)description;
- (void *)getKeyExtensionList:(id)arg1;
- (void *)getExtensionListForSelector:(SEL)arg1;
- (void)unregisterAllKeyExtension:(id)arg1;
- (void)unregisterExtension:(id)arg1 forKey:(id)arg2;
- (void)unregisterExtension:(id)arg1;
- (_Bool)registerExtension:(id)arg1 forKey:(id)arg2;
- (_Bool)registerExtension:(id)arg1;
- (void)dealloc;
- (id)initWithExtension:(id)arg1;

@end

