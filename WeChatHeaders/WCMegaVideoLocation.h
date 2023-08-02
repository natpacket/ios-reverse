//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"
#import "WCTColumnCoding-Protocol.h"

@class NSString;

@interface WCMegaVideoLocation : NSObject <WCTColumnCoding, PBCoding>
{
    double _longitude;
    double _latitude;
    NSString *_city;
    NSString *_poiName;
    NSString *_poiAddress;
    NSString *_poiClassifyId;
    unsigned long long _poiClassifyType;
    NSString *_province;
    NSString *_region;
    NSString *_country;
}

+ (unsigned long long)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_country;
+ (void)PBArrayAdd_region;
+ (void)PBArrayAdd_province;
+ (void)PBArrayAdd_poiClassifyType;
+ (void)PBArrayAdd_poiClassifyId;
+ (void)PBArrayAdd_poiAddress;
+ (void)PBArrayAdd_poiName;
+ (void)PBArrayAdd_city;
+ (void)PBArrayAdd_latitude;
+ (void)PBArrayAdd_longitude;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(copy, nonatomic) NSString *region; // @synthesize region=_region;
@property(copy, nonatomic) NSString *province; // @synthesize province=_province;
@property(nonatomic) unsigned long long poiClassifyType; // @synthesize poiClassifyType=_poiClassifyType;
@property(copy, nonatomic) NSString *poiClassifyId; // @synthesize poiClassifyId=_poiClassifyId;
@property(copy, nonatomic) NSString *poiAddress; // @synthesize poiAddress=_poiAddress;
@property(copy, nonatomic) NSString *poiName; // @synthesize poiName=_poiName;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(readonly, copy) NSString *description;
- (id)genMegaVideoLocation;
- (id)initWithMegaVideoLocation:(id)arg1;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

