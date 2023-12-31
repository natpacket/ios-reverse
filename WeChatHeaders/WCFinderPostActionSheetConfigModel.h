//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface WCFinderPostActionSheetConfigModel : NSObject <PBCoding>
{
    NSString *_title;
    NSString *_icon;
    NSString *_desc;
    unsigned long long _type;
    NSString *_value;
    NSString *_universalLink;
    NSString *_appstoreScheme;
    NSString *_extInfo;
}

+ (void)initialize;
+ (void)PBArrayAdd_extInfo;
+ (void)PBArrayAdd_appstoreScheme;
+ (void)PBArrayAdd_universalLink;
+ (void)PBArrayAdd_value;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_desc;
+ (void)PBArrayAdd_icon;
+ (void)PBArrayAdd_title;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *extInfo; // @synthesize extInfo=_extInfo;
@property(copy, nonatomic) NSString *appstoreScheme; // @synthesize appstoreScheme=_appstoreScheme;
@property(copy, nonatomic) NSString *universalLink; // @synthesize universalLink=_universalLink;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithPostActionSheetConfig:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

