//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MidasIAPBaseReq, NSArray, NSDictionary, NSError, NSString;

@interface MidasIAPPayResp : NSObject
{
    int _resultCode;
    int _workingStep;
    NSString *_resultInnerCode;
    NSString *_resultMsg;
    NSString *_respString;
    NSString *_extendJson;
    NSArray *_successProductIds;
    NSDictionary *_failedProductIds;
    MidasIAPBaseReq *_req;
    NSDictionary *_matchOrderQueryInfo;
    NSError *_iapError;
}

+ (id)respWithResultCode:(int)arg1 innerCode:(id)arg2 resultMsg:(id)arg3 respString:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSError *iapError; // @synthesize iapError=_iapError;
@property(nonatomic) int workingStep; // @synthesize workingStep=_workingStep;
@property(copy, nonatomic) NSDictionary *matchOrderQueryInfo; // @synthesize matchOrderQueryInfo=_matchOrderQueryInfo;
@property(retain, nonatomic) MidasIAPBaseReq *req; // @synthesize req=_req;
@property(retain, nonatomic) NSDictionary *failedProductIds; // @synthesize failedProductIds=_failedProductIds;
@property(retain, nonatomic) NSArray *successProductIds; // @synthesize successProductIds=_successProductIds;
@property(copy, nonatomic) NSString *extendJson; // @synthesize extendJson=_extendJson;
@property(copy, nonatomic) NSString *respString; // @synthesize respString=_respString;
@property(copy, nonatomic) NSString *resultMsg; // @synthesize resultMsg=_resultMsg;
@property(copy, nonatomic) NSString *resultInnerCode; // @synthesize resultInnerCode=_resultInnerCode;
@property(nonatomic) int resultCode; // @synthesize resultCode=_resultCode;
- (id)init;

@end

