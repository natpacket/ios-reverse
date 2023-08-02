//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderBaseCgi.h"

@class NSString, WCFinderAudienceReserveLiveCGIExtentParams;

@interface WCFinderAudienceReserveLiveCGI : WCFinderBaseCgi
{
    unsigned int _optype;
    unsigned int _scene;
    unsigned int _enterType;
    unsigned int _aggregateType;
    NSString *_anchorUsername;
    NSString *_noticeId;
    NSString *_promoterToken;
    NSString *_sessionBuffer;
    WCFinderAudienceReserveLiveCGIExtentParams *_extentParams;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) WCFinderAudienceReserveLiveCGIExtentParams *extentParams; // @synthesize extentParams=_extentParams;
@property(nonatomic) unsigned int aggregateType; // @synthesize aggregateType=_aggregateType;
@property(retain, nonatomic) NSString *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(nonatomic) unsigned int enterType; // @synthesize enterType=_enterType;
@property(copy, nonatomic) NSString *promoterToken; // @synthesize promoterToken=_promoterToken;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned int optype; // @synthesize optype=_optype;
@property(copy, nonatomic) NSString *noticeId; // @synthesize noticeId=_noticeId;
@property(copy, nonatomic) NSString *anchorUsername; // @synthesize anchorUsername=_anchorUsername;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithAnchorUserName:(id)arg1 noticeId:(id)arg2 optype:(unsigned int)arg3 scene:(unsigned int)arg4 promoterToken:(id)arg5 config:(id)arg6 enterType:(unsigned int)arg7 sessionBuffer:(id)arg8 aggregateType:(unsigned int)arg9 extentParams:(id)arg10 successBlock:(CDUnknownBlockType)arg11 failureBlock:(CDUnknownBlockType)arg12;
- (id)initWithAnchorUserName:(id)arg1 noticeId:(id)arg2 optype:(unsigned int)arg3 scene:(unsigned int)arg4 promoterToken:(id)arg5 config:(id)arg6 enterType:(unsigned int)arg7 sessionBuffer:(id)arg8 aggregateType:(unsigned int)arg9 successBlock:(CDUnknownBlockType)arg10 failureBlock:(CDUnknownBlockType)arg11;

@end

