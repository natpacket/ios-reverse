//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSMutableDictionary, NSString;

@interface WCNewClickPageStatData : MMObject <PBCoding>
{
    unsigned int _errType;
    unsigned int _errCnt;
    unsigned int _firstEnterTimeStamp;
    unsigned int _lastQuitTimeStamp;
    NSMutableDictionary *_dicPageDatas;
}

+ (void)initialize;
+ (void)PBArrayAdd_lastQuitTimeStamp;
+ (void)PBArrayAdd_firstEnterTimeStamp;
+ (void)PBArrayAdd_dicPageDatas;
+ (void)PBArrayAdd_errCnt;
+ (void)PBArrayAdd_errType;
- (void).cxx_destruct;
@property(nonatomic) unsigned int lastQuitTimeStamp; // @synthesize lastQuitTimeStamp=_lastQuitTimeStamp;
@property(nonatomic) unsigned int firstEnterTimeStamp; // @synthesize firstEnterTimeStamp=_firstEnterTimeStamp;
@property(retain, nonatomic) NSMutableDictionary *dicPageDatas; // @synthesize dicPageDatas=_dicPageDatas;
@property(nonatomic) unsigned int errCnt; // @synthesize errCnt=_errCnt;
@property(nonatomic) unsigned int errType; // @synthesize errType=_errType;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

