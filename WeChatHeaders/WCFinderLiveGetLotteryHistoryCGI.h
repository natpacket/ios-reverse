//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderLiveBaseCgi.h"

@class NSData, NSString;

@interface WCFinderLiveGetLotteryHistoryCGI : WCFinderLiveBaseCgi
{
    int _supportMultiType;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    unsigned long long _liveId;
    unsigned long long _objectId;
    NSString *_nonceId;
    NSString *_anchorFinderUserName;
    NSData *_lastBuffer;
    long long _finderLiveScene;
    unsigned long long _getType;
}

- (void).cxx_destruct;
@property(nonatomic) int supportMultiType; // @synthesize supportMultiType=_supportMultiType;
@property(nonatomic) unsigned long long getType; // @synthesize getType=_getType;
@property(nonatomic) long long finderLiveScene; // @synthesize finderLiveScene=_finderLiveScene;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(copy, nonatomic) NSString *anchorFinderUserName; // @synthesize anchorFinderUserName=_anchorFinderUserName;
@property(retain, nonatomic) NSString *nonceId; // @synthesize nonceId=_nonceId;
@property(nonatomic) unsigned long long objectId; // @synthesize objectId=_objectId;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)getLotteryRecordListFrom:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithLiveIdForAnchor:(unsigned long long)arg1 liveTaskId:(id)arg2 objectId:(unsigned long long)arg3 nonceId:(id)arg4 finderUserName:(id)arg5 lastBuffer:(id)arg6 getType:(unsigned long long)arg7 isAssistant:(_Bool)arg8 successBlock:(CDUnknownBlockType)arg9 failBlock:(CDUnknownBlockType)arg10;
- (id)initWithLiveIdForAudience:(unsigned long long)arg1 liveTaskId:(id)arg2 objectId:(unsigned long long)arg3 nonceId:(id)arg4 lastBuffer:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failBlock:(CDUnknownBlockType)arg7;

@end

