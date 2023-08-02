//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderBaseCgi.h"

@class NSString;

@interface WCFinderCDNFileDumpCGI : WCFinderBaseCgi
{
    NSString *_posterUsername;
    NSString *_clientId;
    NSString *_rawUrl;
    NSString *_fromAppId;
    NSString *_paramJson;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(copy, nonatomic) NSString *paramJson; // @synthesize paramJson=_paramJson;
@property(copy, nonatomic) NSString *fromAppId; // @synthesize fromAppId=_fromAppId;
@property(copy, nonatomic) NSString *rawUrl; // @synthesize rawUrl=_rawUrl;
@property(copy, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(copy, nonatomic) NSString *posterUsername; // @synthesize posterUsername=_posterUsername;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithPosterUsername:(id)arg1 clientId:(id)arg2 rawUrl:(id)arg3 fromAppId:(id)arg4 paramJson:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failBlock:(CDUnknownBlockType)arg7;

@end
