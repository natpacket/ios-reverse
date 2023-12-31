//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMFinderLiveAdsItem, MMFinderLiveCouponItem, MMFinderLiveGoodsItem, MMFinderLiveLeadsItem, MMFinderLiveTaskId, NSString, UIImage;

@interface MMFinderLiveGoodsViewModel : NSObject
{
    _Bool _hasAdsItem;
    unsigned int _serialNum;
    MMFinderLiveGoodsItem *_goodsItem;
    UIImage *_platformIcon;
    NSString *_itemId;
    MMFinderLiveTaskId *_taskId;
    long long _itemType;
    MMFinderLiveAdsItem *_adsItem;
    MMFinderLiveCouponItem *_couponItem;
    MMFinderLiveLeadsItem *_leadsItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveLeadsItem *leadsItem; // @synthesize leadsItem=_leadsItem;
@property(retain, nonatomic) MMFinderLiveCouponItem *couponItem; // @synthesize couponItem=_couponItem;
@property(nonatomic) _Bool hasAdsItem; // @synthesize hasAdsItem=_hasAdsItem;
@property(retain, nonatomic) MMFinderLiveAdsItem *adsItem; // @synthesize adsItem=_adsItem;
@property(nonatomic) long long itemType; // @synthesize itemType=_itemType;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) UIImage *platformIcon; // @synthesize platformIcon=_platformIcon;
@property(retain, nonatomic) MMFinderLiveGoodsItem *goodsItem; // @synthesize goodsItem=_goodsItem;
@property(nonatomic) unsigned int serialNum; // @synthesize serialNum=_serialNum;
- (id)liveTask;
@property(readonly, nonatomic) _Bool needReplayButton;
@property(readonly, nonatomic) _Bool needActionButton;

@end

