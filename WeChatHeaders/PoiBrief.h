//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString, PoiGps, PoiPoint;

@interface PoiBrief : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int adcode; // @dynamic adcode;
@property(retain, nonatomic) NSString *address; // @dynamic address;
@property(retain, nonatomic) NSMutableArray *aliases; // @dynamic aliases;
@property(retain, nonatomic) NSString *categories; // @dynamic categories;
@property(retain, nonatomic) NSMutableArray *categoriesList; // @dynamic categoriesList;
@property(retain, nonatomic) NSString *city; // @dynamic city;
@property(retain, nonatomic) NSString *country; // @dynamic country;
@property(nonatomic) float distance; // @dynamic distance;
@property(retain, nonatomic) NSString *fullAddress; // @dynamic fullAddress;
@property(retain, nonatomic) PoiGps *marsGps; // @dynamic marsGps;
@property(retain, nonatomic) PoiPoint *marsPoint; // @dynamic marsPoint;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSString *province; // @dynamic province;
@property(retain, nonatomic) NSString *region; // @dynamic region;
@property(nonatomic) unsigned int source; // @dynamic source;
@property(retain, nonatomic) NSString *uid; // @dynamic uid;

@end
