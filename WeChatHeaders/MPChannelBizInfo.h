//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface MPChannelBizInfo : NSObject <PBCoding>
{
    unsigned int _bizUin;
    NSString *_bizHeadImgUrl;
    NSString *_bizUsrName;
}

+ (void)initialize;
+ (void)PBArrayAdd_bizUsrName;
+ (void)PBArrayAdd_bizUin;
+ (void)PBArrayAdd_bizHeadImgUrl;
- (void).cxx_destruct;
@property(nonatomic) unsigned int bizUin; // @synthesize bizUin=_bizUin;
@property(copy, nonatomic) NSString *bizUsrName; // @synthesize bizUsrName=_bizUsrName;
@property(copy, nonatomic) NSString *bizHeadImgUrl; // @synthesize bizHeadImgUrl=_bizHeadImgUrl;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

