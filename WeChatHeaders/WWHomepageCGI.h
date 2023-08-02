//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCBaseCgi.h"

@class SnsWwUserPageResponse;

@interface WWHomepageCGI : WCBaseCgi
{
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
    unsigned long long _currentContinueReqCount;
    SnsWwUserPageResponse *_responseToProcess;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SnsWwUserPageResponse *responseToProcess; // @synthesize responseToProcess=_responseToProcess;
@property(nonatomic) unsigned long long currentContinueReqCount; // @synthesize currentContinueReqCount=_currentContinueReqCount;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)getMergeResponse:(id)arg1;
- (void)startRequest:(id)arg1 withSuccessBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)continueRequestWithMaxID:(unsigned long long)arg1;
- (id)init;

@end
