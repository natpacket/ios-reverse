//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, QBusinessConf;

@interface QBussinessSetting : NSObject
{
    NSString *_sdk_protocol;
    NSString *__private_partner;
    QBusinessConf *_business_conf;
    NSDictionary *_services;
}

+ (_Bool)validateDict:(id)arg1 withAPIKey:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *services; // @synthesize services=_services;
@property(retain, nonatomic) QBusinessConf *business_conf; // @synthesize business_conf=_business_conf;
@property(retain, nonatomic) NSString *_private_partner; // @synthesize _private_partner=__private_partner;
@property(retain, nonatomic) NSString *sdk_protocol; // @synthesize sdk_protocol=_sdk_protocol;
- (id)initWithDict:(id)arg1;

@end
