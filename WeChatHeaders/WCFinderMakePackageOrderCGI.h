//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderLiveBaseCgi.h"

@class NSData, NSString, WCFinderDataItem, WCFinderLiveMakePackageOrderParams;

@interface WCFinderMakePackageOrderCGI : WCFinderLiveBaseCgi
{
    unsigned int _targetLevel;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    WCFinderDataItem *_dataItem;
    unsigned long long _orderWecoinAmount;
    NSString *_orderRequestId;
    NSData *_liveCookies;
    WCFinderLiveMakePackageOrderParams *_params;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveMakePackageOrderParams *params; // @synthesize params=_params;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(copy, nonatomic) NSString *orderRequestId; // @synthesize orderRequestId=_orderRequestId;
@property(nonatomic) unsigned long long orderWecoinAmount; // @synthesize orderWecoinAmount=_orderWecoinAmount;
@property(nonatomic) unsigned int targetLevel; // @synthesize targetLevel=_targetLevel;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithFinderTaskId:(id)arg1 params:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failBlock:(CDUnknownBlockType)arg4;

@end

