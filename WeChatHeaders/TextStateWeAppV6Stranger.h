//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, StatusExtInfo;

@interface TextStateWeAppV6Stranger : NSObject
{
    _Bool _snsFlag;
    int _sex;
    NSString *_encUsername;
    NSString *_nickname;
    NSString *_country;
    NSString *_province;
    NSString *_city;
    NSString *_signature;
    NSString *_bigHeadImgUrl;
    NSString *_smallHeadImgUrl;
    NSString *_textStatusId;
    StatusExtInfo *_textStatusExtInfo;
    NSString *_hashUsername;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *hashUsername; // @synthesize hashUsername=_hashUsername;
@property(nonatomic) _Bool snsFlag; // @synthesize snsFlag=_snsFlag;
@property(retain, nonatomic) StatusExtInfo *textStatusExtInfo; // @synthesize textStatusExtInfo=_textStatusExtInfo;
@property(retain, nonatomic) NSString *textStatusId; // @synthesize textStatusId=_textStatusId;
@property(retain, nonatomic) NSString *smallHeadImgUrl; // @synthesize smallHeadImgUrl=_smallHeadImgUrl;
@property(retain, nonatomic) NSString *bigHeadImgUrl; // @synthesize bigHeadImgUrl=_bigHeadImgUrl;
@property(retain, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) NSString *province; // @synthesize province=_province;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
@property(nonatomic) int sex; // @synthesize sex=_sex;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSString *encUsername; // @synthesize encUsername=_encUsername;
- (id)generateContact;

@end

