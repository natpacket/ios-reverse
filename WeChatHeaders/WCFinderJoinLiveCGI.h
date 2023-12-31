//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderLiveBaseCgi.h"

@class NSData, NSString, WCFinderDataItem;

@interface WCFinderJoinLiveCGI : WCFinderLiveBaseCgi
{
    WCFinderDataItem *_dataItem;
    unsigned long long _scene;
    NSData *_liveCookies;
    NSString *_livePkId;
    NSString *_sessionBuffer;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    unsigned long long _commentScene;
    unsigned long long _fromSrc;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long fromSrc; // @synthesize fromSrc=_fromSrc;
@property(nonatomic) unsigned long long commentScene; // @synthesize commentScene=_commentScene;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(copy, nonatomic) NSString *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(copy, nonatomic) NSString *livePkId; // @synthesize livePkId=_livePkId;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void)addRefSessionBuffer:(id)arg1;
- (id)getRoomStateWithAvgSpeed:(unsigned int)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithLiveTaskId:(id)arg1 finderDataItem:(id)arg2 scene:(unsigned long long)arg3 liveCookies:(id)arg4 livePkId:(id)arg5 sessionBuffer:(id)arg6 commentScene:(unsigned long long)arg7 fromSrc:(unsigned long long)arg8 successBlock:(CDUnknownBlockType)arg9 failBlock:(CDUnknownBlockType)arg10;

@end

