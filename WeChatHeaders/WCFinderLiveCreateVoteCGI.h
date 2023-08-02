//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderLiveBaseCgi.h"

@interface WCFinderLiveCreateVoteCGI : WCFinderLiveBaseCgi
{
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)votingRequest;
- (void)createRequestWithQuestion:(id)arg1 choices:(id)arg2 duration:(unsigned int)arg3 allowMultipleSelection:(_Bool)arg4;
- (void)createRequestWithVotingId:(id)arg1;
- (void)commonInit;
- (id)initWithFinderTaskId:(id)arg1 votingId:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failBlock:(CDUnknownBlockType)arg4;
- (id)initWithFinderTaskId:(id)arg1 question:(id)arg2 choices:(id)arg3 duration:(unsigned int)arg4 allowMultipleSelection:(_Bool)arg5 successBlock:(CDUnknownBlockType)arg6 failBlock:(CDUnknownBlockType)arg7;

@end

