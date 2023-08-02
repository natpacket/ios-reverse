//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MidasKeyChainStore, NSMutableArray, NSMutableDictionary, NSString;

@interface MidasIapMonitorPersistance : NSObject
{
    MidasKeyChainStore *_keyChainStore;
    _Bool _forceTerminated;
    unsigned long long _homeTimes;
    NSString *_billNum;
    NSString *_transactionId;
    NSString *_productId;
    NSMutableArray *_currencies;
    NSMutableDictionary *_pairs;
    NSString *_appUserName;
}

+ (unsigned long long)getHomes:(id)arg1;
+ (id)getTotalCurrency:(id)arg1;
+ (id)getBillNo:(id)arg1;
+ (id)getTransInfo:(id)arg1 index:(unsigned long long)arg2;
+ (id)getTransInfo:(id)arg1;
+ (id)getBackupAppUserName:(id)arg1;
+ (id)loadWithProductId:(id)arg1 appUserName:(id)arg2;
+ (id)persistance;
+ (id)persistanceWithProductId:(id)arg1 appUserName:(id)arg2;
+ (id)loadPersistanceWithProductId:(id)arg1 appUserName:(id)arg2 transactionId:(id)arg3;
+ (id)loadPersistanceWithTransactionId:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool forceTerminated; // @synthesize forceTerminated=_forceTerminated;
@property(retain, nonatomic) NSString *appUserName; // @synthesize appUserName=_appUserName;
@property(readonly, nonatomic) NSMutableDictionary *pairs; // @synthesize pairs=_pairs;
@property(readonly, nonatomic) NSMutableArray *currencies; // @synthesize currencies=_currencies;
@property(retain, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(retain, nonatomic) NSString *transactionId; // @synthesize transactionId=_transactionId;
@property(retain, nonatomic) NSString *billNum; // @synthesize billNum=_billNum;
@property(nonatomic) unsigned long long homeTimes; // @synthesize homeTimes=_homeTimes;
- (id)key;
- (id)totalCurrency;
- (void)remove;
- (void)syncronize;
- (id)init;

@end

