//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderLiveBaseCgi.h"

@class FinderClientStatus, FinderLbsTabTipsInfo, FinderLiveBeforeJoinLiveRoomStatus, FinderLiveClientStatus, NSData, NSMutableArray, NSString;

@interface WCFinderNavLiveStreamCGI : WCFinderLiveBaseCgi
{
    NSData *_lastBuffer;
    double _longitude;
    double _latitude;
    FinderClientStatus *_clientStatus;
    FinderLiveClientStatus *_liveClientStatus;
    unsigned long long _pullType;
    NSMutableArray *_readStats;
    NSMutableArray *_markUnreadList;
    unsigned long long _fromScene;
    unsigned long long _commentScene;
    FinderLbsTabTipsInfo *_tabTipsInfo;
    NSString *_byPass;
    FinderLiveBeforeJoinLiveRoomStatus *_beforeJoinLiveStatus;
    unsigned long long _containerId;
    unsigned long long _relatedObjectId;
    NSMutableArray *_containerContext;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failedBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failedBlock; // @synthesize failedBlock=_failedBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) NSMutableArray *containerContext; // @synthesize containerContext=_containerContext;
@property(nonatomic) unsigned long long relatedObjectId; // @synthesize relatedObjectId=_relatedObjectId;
@property(nonatomic) unsigned long long containerId; // @synthesize containerId=_containerId;
@property(retain, nonatomic) FinderLiveBeforeJoinLiveRoomStatus *beforeJoinLiveStatus; // @synthesize beforeJoinLiveStatus=_beforeJoinLiveStatus;
@property(copy, nonatomic) NSString *byPass; // @synthesize byPass=_byPass;
@property(retain, nonatomic) FinderLbsTabTipsInfo *tabTipsInfo; // @synthesize tabTipsInfo=_tabTipsInfo;
@property(nonatomic) unsigned long long commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) unsigned long long fromScene; // @synthesize fromScene=_fromScene;
@property(retain, nonatomic) NSMutableArray *markUnreadList; // @synthesize markUnreadList=_markUnreadList;
@property(retain, nonatomic) NSMutableArray *readStats; // @synthesize readStats=_readStats;
@property(nonatomic) unsigned long long pullType; // @synthesize pullType=_pullType;
@property(retain, nonatomic) FinderLiveClientStatus *liveClientStatus; // @synthesize liveClientStatus=_liveClientStatus;
@property(retain, nonatomic) FinderClientStatus *clientStatus; // @synthesize clientStatus=_clientStatus;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)start;
- (void)createRequest;
- (id)initWithLastBuffer:(id)arg1 longitude:(double)arg2 latitude:(double)arg3 clientStatus:(id)arg4 liveClientStatus:(id)arg5 pullType:(unsigned long long)arg6 readStats:(id)arg7 markUnreadList:(id)arg8 fromScene:(unsigned long long)arg9 commentScene:(unsigned long long)arg10 tabTipsInfo:(id)arg11 byPass:(id)arg12 beforeJoinLiveStatus:(id)arg13 containerId:(unsigned long long)arg14 relatedObjectId:(unsigned long long)arg15 containerContext:(id)arg16 successBlock:(CDUnknownBlockType)arg17 failedBlock:(CDUnknownBlockType)arg18;

@end

