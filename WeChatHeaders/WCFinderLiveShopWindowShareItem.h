//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "PBCoding-Protocol.h"
#import "YYModel-Protocol.h"

@class FinderGetWindowProductProfileCardInfoResponse_ReputationInfo, NSArray, NSString;

@interface WCFinderLiveShopWindowShareItem : MMObject <YYModel, NSCoding, NSCopying, PBCoding>
{
    NSString *_finderUsername;
    NSString *_avatar;
    NSString *_nickname;
    NSString *_commodityInStockCount;
    NSString *_appId;
    NSString *_path;
    NSString *_appUsername;
    NSString *_query;
    NSString *_liteAppId;
    NSString *_liteAppPath;
    NSString *_liteAppQueryDecode;
    NSString *_platformTagURL;
    FinderGetWindowProductProfileCardInfoResponse_ReputationInfo *_reputationInfo;
    NSString *_saleWording;
    NSArray *_productImageURLList;
}

+ (void)initialize;
+ (void)PBArrayAdd_productImageURLList;
+ (void)PBArrayAdd_saleWording;
+ (void)PBArrayAdd_reputationInfo;
+ (void)PBArrayAdd_platformTagURL;
+ (void)PBArrayAdd_liteAppQuery;
+ (void)PBArrayAdd_liteAppPath;
+ (void)PBArrayAdd_liteAppId;
+ (void)PBArrayAdd_query;
+ (void)PBArrayAdd_appUsername;
+ (void)PBArrayAdd_path;
+ (void)PBArrayAdd_appId;
+ (void)PBArrayAdd_commodityInStockCount;
+ (void)PBArrayAdd_nickname;
+ (void)PBArrayAdd_avatar;
+ (void)PBArrayAdd_finderUsername;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *productImageURLList; // @synthesize productImageURLList=_productImageURLList;
@property(copy, nonatomic) NSString *saleWording; // @synthesize saleWording=_saleWording;
@property(retain, nonatomic) FinderGetWindowProductProfileCardInfoResponse_ReputationInfo *reputationInfo; // @synthesize reputationInfo=_reputationInfo;
@property(copy, nonatomic) NSString *platformTagURL; // @synthesize platformTagURL=_platformTagURL;
@property(copy, nonatomic) NSString *liteAppQueryDecode; // @synthesize liteAppQueryDecode=_liteAppQueryDecode;
@property(copy, nonatomic) NSString *liteAppPath; // @synthesize liteAppPath=_liteAppPath;
@property(copy, nonatomic) NSString *liteAppId; // @synthesize liteAppId=_liteAppId;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(copy, nonatomic) NSString *appUsername; // @synthesize appUsername=_appUsername;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *commodityInStockCount; // @synthesize commodityInStockCount=_commodityInStockCount;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(copy, nonatomic) NSString *liteAppQuery;
- (void)updateFinderGetWindowProductProfileCardInfo;
- (void)updateShareItemCommodityInStockCount:(unsigned long long)arg1;
- (id)toXML;
- (void)updateCommdityInStock;
- (void)setupXML:(struct XmlReaderNode_t *)arg1;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
