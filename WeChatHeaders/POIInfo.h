//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface POIInfo : NSObject <NSCoding, NSCopying>
{
    struct CLLocationCoordinate2D _coordinate;
    double _scale;
    NSString *_bid;
    NSString *_address;
    NSString *_poiName;
    NSString *_poiCategoryTips;
    NSString *_poiBusinessHour;
    NSString *_poiPhone;
    NSString *_poiPriceTips;
    _Bool _isFromPoiList;
    NSString *_infoUrl;
    NSString *_city;
    NSString *_country;
    unsigned int _adCode;
    NSString *_buildingId;
    NSString *_floorName;
    long long _source;
    _Bool _isCoordinateError;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int adCode; // @synthesize adCode=_adCode;
@property(retain, nonatomic) NSString *poiPriceTips; // @synthesize poiPriceTips=_poiPriceTips;
@property(retain, nonatomic) NSString *poiPhone; // @synthesize poiPhone=_poiPhone;
@property(retain, nonatomic) NSString *poiBusinessHour; // @synthesize poiBusinessHour=_poiBusinessHour;
@property(retain, nonatomic) NSString *poiCategoryTips; // @synthesize poiCategoryTips=_poiCategoryTips;
@property(nonatomic) _Bool isCoordinateError; // @synthesize isCoordinateError=_isCoordinateError;
@property(nonatomic) _Bool isFromPoiList; // @synthesize isFromPoiList=_isFromPoiList;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *floorName; // @synthesize floorName=_floorName;
@property(retain, nonatomic) NSString *buildingId; // @synthesize buildingId=_buildingId;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) NSString *infoUrl; // @synthesize infoUrl=_infoUrl;
@property(retain, nonatomic) NSString *poiName; // @synthesize poiName=_poiName;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
@property(retain, nonatomic) NSString *bid; // @synthesize bid=_bid;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
- (_Bool)isPOIAllowForwardOrFav;
- (_Bool)isPrivated;
- (_Bool)isIndoor;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

