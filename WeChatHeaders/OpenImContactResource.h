//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSMutableDictionary, NSString;

@interface OpenImContactResource : NSObject <PBCoding>
{
    unsigned int _funcFlag;
    unsigned int _updateTime;
    NSString *_acctType;
    NSString *_language;
    NSMutableDictionary *_wordings;
    NSMutableDictionary *_urls;
    NSMutableDictionary *_woringResources;
}

+ (void)initialize;
+ (void)PBArrayAdd_woringResources;
+ (void)PBArrayAdd_urls;
+ (void)PBArrayAdd_wordings;
+ (void)PBArrayAdd_language;
+ (void)PBArrayAdd_updateTime;
+ (void)PBArrayAdd_funcFlag;
+ (void)PBArrayAdd_acctType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *woringResources; // @synthesize woringResources=_woringResources;
@property(retain, nonatomic) NSMutableDictionary *urls; // @synthesize urls=_urls;
@property(retain, nonatomic) NSMutableDictionary *wordings; // @synthesize wordings=_wordings;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(nonatomic) unsigned int updateTime; // @synthesize updateTime=_updateTime;
@property(nonatomic) unsigned int funcFlag; // @synthesize funcFlag=_funcFlag;
@property(retain, nonatomic) NSString *acctType; // @synthesize acctType=_acctType;
- (id)getWoringResourcesDesc;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

