//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSString;

@interface WXIAPInitMidasResult : MMObject <PBCoding>
{
    NSString *_offerId;
    NSString *_openId;
    NSString *_openKey;
    NSString *_sessionId;
    NSString *_sessionType;
    NSString *_pf;
    NSString *_environment;
    NSString *_usableProductId;
}

+ (void)initialize;
+ (void)PBArrayAdd_usableProductId;
+ (void)PBArrayAdd_environment;
+ (void)PBArrayAdd_pf;
+ (void)PBArrayAdd_sessionType;
+ (void)PBArrayAdd_sessionId;
+ (void)PBArrayAdd_openKey;
+ (void)PBArrayAdd_openId;
+ (void)PBArrayAdd_offerId;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *usableProductId; // @synthesize usableProductId=_usableProductId;
@property(copy, nonatomic) NSString *environment; // @synthesize environment=_environment;
@property(copy, nonatomic) NSString *pf; // @synthesize pf=_pf;
@property(copy, nonatomic) NSString *sessionType; // @synthesize sessionType=_sessionType;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(copy, nonatomic) NSString *openKey; // @synthesize openKey=_openKey;
@property(copy, nonatomic) NSString *openId; // @synthesize openId=_openId;
@property(copy, nonatomic) NSString *offerId; // @synthesize offerId=_offerId;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

