//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMContext, NSMutableArray, NSRecursiveLock, NSString;

@interface MMContextManager : NSObject
{
    NSMutableArray *m_contexts;
    NSRecursiveLock *m_lock;
    MMContext *m_activeContext;
    unsigned int m_loginContextTimes;
    unsigned int m_loginNonGuestContextTimes;
    NSString *_documentPath;
    NSString *_libraryCachePath;
}

+ (id)defaultManager;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *libraryCachePath; // @synthesize libraryCachePath=_libraryCachePath;
@property(retain, nonatomic) NSString *documentPath; // @synthesize documentPath=_documentPath;
@property(readonly, nonatomic) unsigned int loginNonGuestContextTimes; // @synthesize loginNonGuestContextTimes=m_loginNonGuestContextTimes;
@property(readonly, nonatomic) unsigned int loginContextTimes; // @synthesize loginContextTimes=m_loginContextTimes;
- (void)callMemoryWarning;
- (void)callTerminate;
- (void)callEnterBackground;
- (void)callEnterForeground;
- (id)contextByMarsLongLinkName:(const char *)arg1;
- (id)contextByMarsContext:(const void *)arg1;
- (id)contextByUin:(unsigned int)arg1;
- (id)activeUserContext;
- (id)allContexts;
- (void)logout:(id)arg1;
- (void)loginByContext:(id)arg1;
- (id)newContextWithUser:(id)arg1 uin:(unsigned int)arg2;
- (id)newGuestContext;
- (void)initContextEnvironment;
- (id)init;

@end

