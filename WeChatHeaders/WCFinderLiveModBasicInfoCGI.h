//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderLiveBaseCgi.h"

@class NSArray, NSMutableArray;

@interface WCFinderLiveModBasicInfoCGI : WCFinderLiveBaseCgi
{
    unsigned int _scene;
    NSMutableArray *_cmdItemRequestWrapList;
    NSArray *_unmutableCmdItemRequestWrapList;
    unsigned long long _objectId;
    unsigned long long _liveId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;
@property(nonatomic) unsigned long long objectId; // @synthesize objectId=_objectId;
@property(retain, nonatomic) NSArray *unmutableCmdItemRequestWrapList; // @synthesize unmutableCmdItemRequestWrapList=_unmutableCmdItemRequestWrapList;
@property(retain, nonatomic) NSMutableArray *cmdItemRequestWrapList; // @synthesize cmdItemRequestWrapList=_cmdItemRequestWrapList;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (void)start;
- (void)addCmdItem:(id)arg1 completeCallBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;
- (id)initWithLiveId:(unsigned long long)arg1 objectId:(unsigned long long)arg2 scene:(unsigned int)arg3;
- (id)initWithFinderTaskId:(id)arg1 scene:(unsigned int)arg2;

@end
