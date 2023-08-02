//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderLiveBaseCgi.h"

@class MMFinderLiveCreateParamsModel;

@interface WCFinderCreateLiveCGI : WCFinderLiveBaseCgi
{
    MMFinderLiveCreateParamsModel *_createLiveParamsModel;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) MMFinderLiveCreateParamsModel *createLiveParamsModel; // @synthesize createLiveParamsModel=_createLiveParamsModel;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)mergeLiveCoverImagesFromMediaArray:(id)arg1 request:(id)arg2;
- (void)createRequest;
- (id)initWithCreateLiveParamsModel:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;

@end

