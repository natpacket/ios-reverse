//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface WAAppBrandNotifyModuleInfo : NSObject <PBCoding>
{
    NSMutableArray *_arrModuleList;
    NSString *_enteranceModule;
    NSMutableDictionary *_dicModuleState;
}

+ (void)initialize;
+ (void)PBArrayAdd_dicModuleState;
+ (void)PBArrayAdd_enteranceModule;
+ (void)PBArrayAdd_arrModuleList;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicModuleState; // @synthesize dicModuleState=_dicModuleState;
@property(retain, nonatomic) NSString *enteranceModule; // @synthesize enteranceModule=_enteranceModule;
@property(retain, nonatomic) NSMutableArray *arrModuleList; // @synthesize arrModuleList=_arrModuleList;
- (id)moduleListContainJSONDictionary;
- (_Bool)isUseModule;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

