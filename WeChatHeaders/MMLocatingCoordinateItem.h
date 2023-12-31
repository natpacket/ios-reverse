//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MMLocatingCoordinateItem : NSObject
{
    NSString *_nation;
    NSString *_province;
    NSString *_city;
    NSString *_district;
    NSString *_street;
    NSString *_detail;
    NSString *_addressDescrption;
    NSString *_poiId;
    NSString *_poiName;
    NSString *_nationalCode;
    double _latitude;
    double _longitude;
    id _requestObj;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id requestObj; // @synthesize requestObj=_requestObj;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) NSString *nationalCode; // @synthesize nationalCode=_nationalCode;
@property(retain, nonatomic) NSString *poiName; // @synthesize poiName=_poiName;
@property(retain, nonatomic) NSString *poiId; // @synthesize poiId=_poiId;
@property(retain, nonatomic) NSString *addressDescrption; // @synthesize addressDescrption=_addressDescrption;
@property(retain, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(retain, nonatomic) NSString *street; // @synthesize street=_street;
@property(retain, nonatomic) NSString *district; // @synthesize district=_district;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) NSString *province; // @synthesize province=_province;
@property(retain, nonatomic) NSString *nation; // @synthesize nation=_nation;

@end

