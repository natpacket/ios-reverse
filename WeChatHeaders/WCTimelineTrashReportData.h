//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface WCTimelineTrashReportData : NSObject <PBCoding>
{
    unsigned int _likeCnt;
    unsigned int _commentCnt;
    unsigned int _exposeCnt;
    NSString *_publishId;
    NSString *_postSessionId;
    NSString *_sessionId;
    NSString *_exposeStartTime;
}

+ (void)reportClick:(id)arg1 likeCnt:(unsigned int)arg2 commentCnt:(unsigned int)arg3 postSessionId:(id)arg4 sessionId:(id)arg5 nextAction:(unsigned int)arg6 nextPublishId:(id)arg7;
+ (void)reportExpose:(id)arg1 likeCnt:(unsigned int)arg2 commentCnt:(unsigned int)arg3 postSessionId:(id)arg4 sessionId:(id)arg5 exposeStartTime:(id)arg6 exposeCnt:(unsigned int)arg7;
+ (void)initialize;
+ (void)PBArrayAdd_postSessionId;
+ (void)PBArrayAdd_sessionId;
+ (void)PBArrayAdd_commentCnt;
+ (void)PBArrayAdd_likeCnt;
+ (void)PBArrayAdd_publishId;
- (void).cxx_destruct;
@property(nonatomic) unsigned int exposeCnt; // @synthesize exposeCnt=_exposeCnt;
@property(retain, nonatomic) NSString *exposeStartTime; // @synthesize exposeStartTime=_exposeStartTime;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSString *postSessionId; // @synthesize postSessionId=_postSessionId;
@property(nonatomic) unsigned int commentCnt; // @synthesize commentCnt=_commentCnt;
@property(nonatomic) unsigned int likeCnt; // @synthesize likeCnt=_likeCnt;
@property(retain, nonatomic) NSString *publishId; // @synthesize publishId=_publishId;
- (void)recordNextLocalId:(id)arg1 previousReportData:(id)arg2;
@property(readonly, copy) NSString *debugDescription;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
