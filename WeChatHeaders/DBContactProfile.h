//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"
#import "WCTColumnCoding-Protocol.h"

@class NSString;

@interface DBContactProfile : NSObject <PBCoding, WCTColumnCoding>
{
    unsigned int _sex;
    NSString *_country;
    NSString *_province;
    NSString *_city;
    NSString *_signature;
    NSString *_patSuffix;
    NSString *_textStatusID;
    NSString *_textStatusExtInfo;
}

+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_textStatusExtInfo;
+ (void)PBArrayAdd_textStatusID;
+ (void)PBArrayAdd_patSuffix;
+ (void)PBArrayAdd_signature;
+ (void)PBArrayAdd_city;
+ (void)PBArrayAdd_province;
+ (void)PBArrayAdd_country;
+ (void)PBArrayAdd_sex;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *textStatusExtInfo; // @synthesize textStatusExtInfo=_textStatusExtInfo;
@property(retain, nonatomic) NSString *textStatusID; // @synthesize textStatusID=_textStatusID;
@property(retain, nonatomic) NSString *patSuffix; // @synthesize patSuffix=_patSuffix;
@property(retain, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) NSString *province; // @synthesize province=_province;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
@property(nonatomic) unsigned int sex; // @synthesize sex=_sex;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

