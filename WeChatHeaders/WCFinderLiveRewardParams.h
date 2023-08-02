//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSString, WCFinderDataItem;

@interface WCFinderLiveRewardParams : NSObject
{
    _Bool _comboFinished;
    unsigned int _rewardProductCount;
    unsigned int _rewardAmountInWecoin;
    int _rewardType;
    WCFinderDataItem *_dataItem;
    NSString *_rewardRecipientUserName;
    NSString *_rewardComboId;
    NSString *_rewardProductId;
    NSString *_styleId;
    NSString *_rewardRequestId;
    NSData *_liveCookies;
    NSString *_sessionBuffer;
    NSData *_rewardExtInfo;
    NSMutableArray *_prepareBuf;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *prepareBuf; // @synthesize prepareBuf=_prepareBuf;
@property(retain, nonatomic) NSData *rewardExtInfo; // @synthesize rewardExtInfo=_rewardExtInfo;
@property(nonatomic) int rewardType; // @synthesize rewardType=_rewardType;
@property(copy, nonatomic) NSString *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(nonatomic) _Bool comboFinished; // @synthesize comboFinished=_comboFinished;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(copy, nonatomic) NSString *rewardRequestId; // @synthesize rewardRequestId=_rewardRequestId;
@property(nonatomic) unsigned int rewardAmountInWecoin; // @synthesize rewardAmountInWecoin=_rewardAmountInWecoin;
@property(nonatomic) unsigned int rewardProductCount; // @synthesize rewardProductCount=_rewardProductCount;
@property(retain, nonatomic) NSString *styleId; // @synthesize styleId=_styleId;
@property(copy, nonatomic) NSString *rewardProductId; // @synthesize rewardProductId=_rewardProductId;
@property(copy, nonatomic) NSString *rewardComboId; // @synthesize rewardComboId=_rewardComboId;
@property(copy, nonatomic) NSString *rewardRecipientUserName; // @synthesize rewardRecipientUserName=_rewardRecipientUserName;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;

@end

