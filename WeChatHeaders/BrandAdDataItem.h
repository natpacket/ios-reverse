//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface BrandAdDataItem : NSObject
{
    unsigned int _expiredTimeInSec;
    NSString *_content;
    NSDictionary *_dicAdInfo;
    NSString *_traceId;
    NSString *_aid;
    NSString *_bizType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int expiredTimeInSec; // @synthesize expiredTimeInSec=_expiredTimeInSec;
@property(copy, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(copy, nonatomic) NSString *aid; // @synthesize aid=_aid;
@property(copy, nonatomic) NSString *traceId; // @synthesize traceId=_traceId;
@property(retain, nonatomic) NSDictionary *dicAdInfo; // @synthesize dicAdInfo=_dicAdInfo;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
- (id)description;

@end

