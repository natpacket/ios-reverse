//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "PBCoding-Protocol.h"
#import "YYModel-Protocol.h"

@class NSArray, NSString;

@interface WCFinderLiveProductShareItem : NSObject <YYModel, NSCoding, NSCopying, PBCoding>
{
    _Bool _isLiveEndState;
    _Bool _isPriceBeginShow;
    unsigned int _valueOfFlashSalePrice;
    int _scene;
    NSString *_finderLiveID;
    NSString *_finderUsername;
    NSString *_finderObjectID;
    NSString *_finderNonceID;
    NSString *_liveStatus;
    unsigned long long _finderLiveStatus;
    NSString *_appId;
    NSString *_pagePath;
    NSString *_productId;
    NSString *_coverUrl;
    NSString *_productTitle;
    NSString *_marketPrice;
    NSString *_sellingPrice;
    NSString *_sellingPriceWording;
    NSString *_platformHeadImg;
    NSString *_platformName;
    NSString *_shopWindowId;
    NSString *_platformIconURL;
    unsigned long long _valueOfFlashSaleEndTime;
    NSString *_ecSource;
    NSString *_firstProductTagURL;
    double _firstProductTagAspectRatio;
    NSString *_secondProductTagURL;
    double _secondProductTagAspectRatio;
    NSString *_firstGuaranteeWording;
    NSString *_secondGuaranteeWording;
    NSString *_thirdGuaranteeWording;
}

+ (void)initialize;
+ (void)PBArrayAdd_isPriceBeginShow;
+ (void)PBArrayAdd_thirdGuaranteeWording;
+ (void)PBArrayAdd_secondGuaranteeWording;
+ (void)PBArrayAdd_firstGuaranteeWording;
+ (void)PBArrayAdd_secondProductTagAspectRatio;
+ (void)PBArrayAdd_secondProductTagURL;
+ (void)PBArrayAdd_firstProductTagAspectRatio;
+ (void)PBArrayAdd_firstProductTagURL;
+ (void)PBArrayAdd_platformIconURL;
+ (void)PBArrayAdd_sellingPriceWording;
+ (void)PBArrayAdd_ecSource;
+ (void)PBArrayAdd_valueOfFlashSaleEndTime;
+ (void)PBArrayAdd_valueOfFlashSalePrice;
+ (void)PBArrayAdd_liveStatus;
+ (void)PBArrayAdd_shopWindowId;
+ (void)PBArrayAdd_platformName;
+ (void)PBArrayAdd_platformHeadImg;
+ (void)PBArrayAdd_sellingPrice;
+ (void)PBArrayAdd_marketPrice;
+ (void)PBArrayAdd_productTitle;
+ (void)PBArrayAdd_coverUrl;
+ (void)PBArrayAdd_productId;
+ (void)PBArrayAdd_pagePath;
+ (void)PBArrayAdd_appId;
+ (void)PBArrayAdd_finderNonceID;
+ (void)PBArrayAdd_finderObjectID;
+ (void)PBArrayAdd_finderUsername;
+ (void)PBArrayAdd_finderLiveID;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *thirdGuaranteeWording; // @synthesize thirdGuaranteeWording=_thirdGuaranteeWording;
@property(copy, nonatomic) NSString *secondGuaranteeWording; // @synthesize secondGuaranteeWording=_secondGuaranteeWording;
@property(copy, nonatomic) NSString *firstGuaranteeWording; // @synthesize firstGuaranteeWording=_firstGuaranteeWording;
@property(nonatomic) double secondProductTagAspectRatio; // @synthesize secondProductTagAspectRatio=_secondProductTagAspectRatio;
@property(copy, nonatomic) NSString *secondProductTagURL; // @synthesize secondProductTagURL=_secondProductTagURL;
@property(nonatomic) double firstProductTagAspectRatio; // @synthesize firstProductTagAspectRatio=_firstProductTagAspectRatio;
@property(copy, nonatomic) NSString *firstProductTagURL; // @synthesize firstProductTagURL=_firstProductTagURL;
@property(nonatomic) _Bool isPriceBeginShow; // @synthesize isPriceBeginShow=_isPriceBeginShow;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *ecSource; // @synthesize ecSource=_ecSource;
@property(nonatomic) unsigned long long valueOfFlashSaleEndTime; // @synthesize valueOfFlashSaleEndTime=_valueOfFlashSaleEndTime;
@property(nonatomic) unsigned int valueOfFlashSalePrice; // @synthesize valueOfFlashSalePrice=_valueOfFlashSalePrice;
@property(copy, nonatomic) NSString *platformIconURL; // @synthesize platformIconURL=_platformIconURL;
@property(copy, nonatomic) NSString *shopWindowId; // @synthesize shopWindowId=_shopWindowId;
@property(copy, nonatomic) NSString *platformName; // @synthesize platformName=_platformName;
@property(copy, nonatomic) NSString *platformHeadImg; // @synthesize platformHeadImg=_platformHeadImg;
@property(copy, nonatomic) NSString *sellingPriceWording; // @synthesize sellingPriceWording=_sellingPriceWording;
@property(copy, nonatomic) NSString *sellingPrice; // @synthesize sellingPrice=_sellingPrice;
@property(copy, nonatomic) NSString *marketPrice; // @synthesize marketPrice=_marketPrice;
@property(copy, nonatomic) NSString *productTitle; // @synthesize productTitle=_productTitle;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(copy, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(copy, nonatomic) NSString *pagePath; // @synthesize pagePath=_pagePath;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) _Bool isLiveEndState; // @synthesize isLiveEndState=_isLiveEndState;
@property(nonatomic) unsigned long long finderLiveStatus; // @synthesize finderLiveStatus=_finderLiveStatus;
@property(copy, nonatomic) NSString *liveStatus; // @synthesize liveStatus=_liveStatus;
@property(copy, nonatomic) NSString *finderNonceID; // @synthesize finderNonceID=_finderNonceID;
@property(copy, nonatomic) NSString *finderObjectID; // @synthesize finderObjectID=_finderObjectID;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(copy, nonatomic) NSString *finderLiveID; // @synthesize finderLiveID=_finderLiveID;
@property(copy, nonatomic) NSArray *guaranteeWordings;
@property(copy, nonatomic) NSArray *productTags;
@property(copy, nonatomic) NSString *secondProductTagAspectRatioString;
@property(copy, nonatomic) NSString *firstProductTagAspectRatioString;
@property(readonly, nonatomic) _Bool hasLimitDiscount;
@property(copy, nonatomic) NSString *flashSaleEndTime;
@property(copy, nonatomic) NSString *flashSalePrice;
- (id)genFinderDataItem;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithScene:(int)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
