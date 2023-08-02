//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCBaseCgi.h"

@class SnsWithTaOpResponse, WCBaseNetworkingError;

@interface WCTogetherModifyCGI : WCBaseCgi
{
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
    SnsWithTaOpResponse *_response;
    WCBaseNetworkingError *_error;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCBaseNetworkingError *error; // @synthesize error=_error;
@property(retain, nonatomic) SnsWithTaOpResponse *response; // @synthesize response=_response;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)initWithRequest:(id)arg1;

@end
