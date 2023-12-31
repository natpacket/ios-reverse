//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ForwardMessageLogicDelegate-Protocol.h"

@class FinderWindowProductInfo, ForwardMessageLogicController, MMFinderLiveGoodsItem, NSArray, NSString;

@interface WCFinderProfileWindowProductCellVM : NSObject <ForwardMessageLogicDelegate>
{
    NSString *_title;
    NSString *_priceText;
    NSString *_sourceText;
    NSString *_friendsBoughtText;
    NSString *_coverURLString;
    NSArray *_productTagURLs;
    FinderWindowProductInfo *_productInfo;
    ForwardMessageLogicController *_forwardLogic;
    MMFinderLiveGoodsItem *_goodsItem;
    struct CGSize _itemCacheSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveGoodsItem *goodsItem; // @synthesize goodsItem=_goodsItem;
@property(retain, nonatomic) ForwardMessageLogicController *forwardLogic; // @synthesize forwardLogic=_forwardLogic;
@property(nonatomic) struct CGSize itemCacheSize; // @synthesize itemCacheSize=_itemCacheSize;
@property(retain, nonatomic) FinderWindowProductInfo *productInfo; // @synthesize productInfo=_productInfo;
@property(copy, nonatomic) NSArray *productTagURLs; // @synthesize productTagURLs=_productTagURLs;
@property(copy, nonatomic) NSString *coverURLString; // @synthesize coverURLString=_coverURLString;
@property(readonly, copy, nonatomic) NSString *friendsBoughtText; // @synthesize friendsBoughtText=_friendsBoughtText;
@property(copy, nonatomic) NSString *sourceText; // @synthesize sourceText=_sourceText;
@property(copy, nonatomic) NSString *priceText; // @synthesize priceText=_priceText;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)shareLiveAndGoodsToFriends:(id)arg1 dataItem:(id)arg2;
- (void)shareLiveAndGoodsToFriends:(id)arg1 finderUsername:(id)arg2;
- (id)initWithProductInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

