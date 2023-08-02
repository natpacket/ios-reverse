//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FinderLiveGetPaymentItemsResponse_Product, NSArray, NSData, NSMutableArray, NSString;

@interface MMFinderLivePrepayTierViewModel : NSObject
{
    _Bool _isPaid;
    unsigned int _businessType;
    NSString *_title;
    unsigned long long _pricing;
    NSArray *_benefits;
    NSString *_buttonLabel;
    FinderLiveGetPaymentItemsResponse_Product *_paymentItem;
    NSString *_backgroundImgUrl;
    NSData *_productExtInfo;
    NSMutableArray *_textColorValue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *textColorValue; // @synthesize textColorValue=_textColorValue;
@property(retain, nonatomic) NSData *productExtInfo; // @synthesize productExtInfo=_productExtInfo;
@property(nonatomic) unsigned int businessType; // @synthesize businessType=_businessType;
@property(retain, nonatomic) NSString *backgroundImgUrl; // @synthesize backgroundImgUrl=_backgroundImgUrl;
@property(retain, nonatomic) FinderLiveGetPaymentItemsResponse_Product *paymentItem; // @synthesize paymentItem=_paymentItem;
@property(retain, nonatomic) NSString *buttonLabel; // @synthesize buttonLabel=_buttonLabel;
@property(retain, nonatomic) NSArray *benefits; // @synthesize benefits=_benefits;
@property(nonatomic) _Bool isPaid; // @synthesize isPaid=_isPaid;
@property(nonatomic) unsigned long long pricing; // @synthesize pricing=_pricing;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSData *rewardExtInfo;
@property(readonly, nonatomic) unsigned int rewardType;
@property(readonly, nonatomic) unsigned int productId;
@property(readonly, nonatomic) _Bool isFree;
- (id)initWithPaymentItem:(id)arg1;

@end

