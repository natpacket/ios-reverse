//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCCoinLogger : NSObject
{
    unsigned long long _businessId;
    NSString *__reportSessionId;
}

+ (void)setupConsumeDetaiViewReport:(id)arg1;
+ (void)setupConsumeHelpReport:(id)arg1;
+ (void)setupConsumeTipsReport:(id)arg1;
+ (void)setupConsumeButtonReport:(id)arg1;
+ (void)setupCoinViewReport:(id)arg1;
+ (void)reportBuyCoinSuccess;
+ (void)reportBuyCoinSuccessCostTime:(unsigned long long)arg1;
+ (void)reportKVKey:(unsigned int)arg1;
+ (void)reportIDKey:(unsigned int)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *_reportSessionId; // @synthesize _reportSessionId=__reportSessionId;
@property(nonatomic) unsigned long long businessId; // @synthesize businessId=_businessId;
- (void)genReportSessionId;
- (id)getReportSessionId;

@end
