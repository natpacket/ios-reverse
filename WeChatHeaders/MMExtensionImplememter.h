//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMExtensionImplememter : NSObject
{
    void *m_observerToExtensionObject;
    void *m_extensionObjectList;
}

@property(readonly, nonatomic) void *extensionObjectList; // @synthesize extensionObjectList=m_extensionObjectList;
- (void)cleanUp;
- (_Bool)needsCleanUp;
- (_Bool)unregisterExtension:(id)arg1;
- (_Bool)registerExtension:(id)arg1;
- (void)dealloc;
- (id)init;

@end

