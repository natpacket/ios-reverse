//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderBaseCgi.h"

@class NSString;

@interface WCFinderProfilePOISearchCGI : WCFinderBaseCgi
{
    NSString *_queryText;
    NSString *_finderUserName;
    double _longtitude;
    double _latitude;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) double longtitude; // @synthesize longtitude=_longtitude;
@property(retain, nonatomic) NSString *finderUserName; // @synthesize finderUserName=_finderUserName;
@property(retain, nonatomic) NSString *queryText; // @synthesize queryText=_queryText;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithQueryText:(id)arg1 finderUsername:(id)arg2 longtitude:(double)arg3 latitude:(double)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;

@end
