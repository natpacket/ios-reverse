//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSString, WCSnsOperation;

@interface WCSnsLocalCacheData : MMObject <PBCoding>
{
    unsigned int _updateTime;
    NSString *_itemId;
    WCSnsOperation *_snsOperation;
}

+ (void)initialize;
+ (void)PBArrayAdd_itemId;
+ (void)PBArrayAdd_snsOperation;
+ (void)PBArrayAdd_updateTime;
- (void).cxx_destruct;
@property(retain, nonatomic) WCSnsOperation *snsOperation; // @synthesize snsOperation=_snsOperation;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(nonatomic) unsigned int updateTime; // @synthesize updateTime=_updateTime;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
