//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface WCNewShareCardLayoutCacheItem : MMObject <PBCoding>
{
    _Bool _entryShowRedDot;
    _Bool _entryShowNew;
    unsigned int _lastUpdateTime;
    NSMutableArray *_localCityList;
    NSMutableArray *_otherCityList;
    NSString *_cityName;
    NSString *_entryTip;
    NSMutableArray *_entryIcons;
}

+ (void)initialize;
+ (void)PBArrayAdd_entryShowRedDot;
+ (void)PBArrayAdd_entryShowNew;
+ (void)PBArrayAdd_entryIcons;
+ (void)PBArrayAdd_entryTip;
+ (void)PBArrayAdd_lastUpdateTime;
+ (void)PBArrayAdd_cityName;
+ (void)PBArrayAdd_otherCityList;
+ (void)PBArrayAdd_localCityList;
- (void).cxx_destruct;
@property(nonatomic) _Bool entryShowNew; // @synthesize entryShowNew=_entryShowNew;
@property(nonatomic) _Bool entryShowRedDot; // @synthesize entryShowRedDot=_entryShowRedDot;
@property(retain, nonatomic) NSMutableArray *entryIcons; // @synthesize entryIcons=_entryIcons;
@property(retain, nonatomic) NSString *entryTip; // @synthesize entryTip=_entryTip;
@property(nonatomic) unsigned int lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
@property(retain, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(retain, nonatomic) NSMutableArray *otherCityList; // @synthesize otherCityList=_otherCityList;
@property(retain, nonatomic) NSMutableArray *localCityList; // @synthesize localCityList=_localCityList;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

