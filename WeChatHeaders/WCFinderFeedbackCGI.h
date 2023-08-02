//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderBaseCgi.h"

@class NSMutableArray, NSString;

@interface WCFinderFeedbackCGI : WCFinderBaseCgi
{
    unsigned long long _objectID;
    unsigned long long _feedbackType;
    long long _subType;
    NSMutableArray *_subTypeList;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    NSString *_nonceID;
    NSString *_sessionBuffer;
    unsigned long long _scene;
    unsigned long long _liveScene;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long liveScene; // @synthesize liveScene=_liveScene;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(copy, nonatomic) NSString *nonceID; // @synthesize nonceID=_nonceID;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(copy, nonatomic) NSMutableArray *subTypeList; // @synthesize subTypeList=_subTypeList;
@property(nonatomic) long long subType; // @synthesize subType=_subType;
@property(nonatomic) unsigned long long feedbackType; // @synthesize feedbackType=_feedbackType;
@property(nonatomic) unsigned long long objectID; // @synthesize objectID=_objectID;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithFeedbackType:(unsigned long long)arg1 subType:(long long)arg2 subTypeList:(id)arg3 objectID:(unsigned long long)arg4 nonceID:(id)arg5 sessionBuffer:(id)arg6 scene:(unsigned long long)arg7 liveScene:(unsigned long long)arg8 sessionExtraKey:(id)arg9 successBlock:(CDUnknownBlockType)arg10 failBlock:(CDUnknownBlockType)arg11;

@end
