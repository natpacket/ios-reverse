//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString, WCPayBalanceLQTOpenInfo;

@interface WCPayBalanceChargeLQTInfo : NSObject <PBCoding>
{
    _Bool _isLqtUser;
    NSString *_title;
    NSString *_subTitle;
    WCPayBalanceLQTOpenInfo *_openLqtInfo;
    NSString *_lqtOperateId;
    NSString *_lqtTraceInfo;
}

+ (void)clearCache;
+ (id)genFromCache;
+ (id)genFromDict:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_lqtTraceInfo;
+ (void)PBArrayAdd_lqtOperateId;
+ (void)PBArrayAdd_openLqtInfo;
+ (void)PBArrayAdd_isLqtUser;
+ (void)PBArrayAdd_subTitle;
+ (void)PBArrayAdd_title;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *lqtTraceInfo; // @synthesize lqtTraceInfo=_lqtTraceInfo;
@property(retain, nonatomic) NSString *lqtOperateId; // @synthesize lqtOperateId=_lqtOperateId;
@property(retain, nonatomic) WCPayBalanceLQTOpenInfo *openLqtInfo; // @synthesize openLqtInfo=_openLqtInfo;
@property(nonatomic) _Bool isLqtUser; // @synthesize isLqtUser=_isLqtUser;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

