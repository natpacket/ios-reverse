//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface NewTipsConfigCenter : NSObject
{
    NSMutableDictionary *_dictNewTipsConfig;
    NSMutableSet *_xlabNewTipsConfig;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *xlabNewTipsConfig; // @synthesize xlabNewTipsConfig=_xlabNewTipsConfig;
@property(retain, nonatomic) NSMutableDictionary *dictNewTipsConfig; // @synthesize dictNewTipsConfig=_dictNewTipsConfig;
- (id)GetPathOfNewTipsConfig;
- (id)GetRootPathOfNewTips;
- (id)getConfigWithId:(unsigned int)arg1 Type:(unsigned long long)arg2 FilterClass:(id)arg3;
- (void)registerXLabTips:(id)arg1;
- (void)registerInteractiveTips:(unsigned int)arg1 FilterClass:(id)arg2;
- (void)registerInteractiveTips:(unsigned int)arg1;
- (void)registerDynamicTips:(unsigned int)arg1 FilterClass:(id)arg2;
- (void)registerDynamicTips:(unsigned int)arg1;
- (void)registerLocalTips:(unsigned int)arg1 UID:(id)arg2 FilterClass:(id)arg3;
- (void)registerLocalTips:(unsigned int)arg1 UID:(id)arg2;
- (id)getXLabNewTipsConfig;
- (id)getDictNewTipsConfig;
- (id)getNewTipsConfigWithTipsId:(unsigned int)arg1;
- (id)init;
- (void)deleteUselessConfigFile;
- (void)registerNewTipsCenter;

@end

