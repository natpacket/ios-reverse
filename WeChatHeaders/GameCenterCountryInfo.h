//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSString;

@interface GameCenterCountryInfo : MMObject <PBCoding>
{
    unsigned int _lastFetchTime;
    NSString *_productID;
    NSString *_countryCode;
}

+ (void)initialize;
+ (void)PBArrayAdd_lastFetchTime;
+ (void)PBArrayAdd_countryCode;
+ (void)PBArrayAdd_productID;
- (void).cxx_destruct;
@property(nonatomic) unsigned int lastFetchTime; // @synthesize lastFetchTime=_lastFetchTime;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) NSString *productID; // @synthesize productID=_productID;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

