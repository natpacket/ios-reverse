//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSDictionary, NSString;

@interface ABTestItem : MMObject <PBCoding>
{
    _Bool _bNoReport;
    unsigned int _uiSeq;
    unsigned int _uiBeginTime;
    unsigned int _uiEndTime;
    unsigned int _uiPriorityLevel;
    NSString *_nsLayerId;
    NSString *_nsExpId;
    NSDictionary *_dicExpArgs;
    NSString *_nsBizId;
}

+ (void)initialize;
+ (void)PBArrayAdd_uiPriorityLevel;
+ (void)PBArrayAdd_nsBizId;
+ (void)PBArrayAdd_bNoReport;
+ (void)PBArrayAdd_uiEndTime;
+ (void)PBArrayAdd_uiBeginTime;
+ (void)PBArrayAdd_uiSeq;
+ (void)PBArrayAdd_dicExpArgs;
+ (void)PBArrayAdd_nsExpId;
+ (void)PBArrayAdd_nsLayerId;
- (void).cxx_destruct;
@property(nonatomic) unsigned int uiPriorityLevel; // @synthesize uiPriorityLevel=_uiPriorityLevel;
@property(retain, nonatomic) NSString *nsBizId; // @synthesize nsBizId=_nsBizId;
@property(nonatomic) _Bool bNoReport; // @synthesize bNoReport=_bNoReport;
@property(nonatomic) unsigned int uiEndTime; // @synthesize uiEndTime=_uiEndTime;
@property(nonatomic) unsigned int uiBeginTime; // @synthesize uiBeginTime=_uiBeginTime;
@property(nonatomic) unsigned int uiSeq; // @synthesize uiSeq=_uiSeq;
@property(retain, nonatomic) NSDictionary *dicExpArgs; // @synthesize dicExpArgs=_dicExpArgs;
@property(retain, nonatomic) NSString *nsExpId; // @synthesize nsExpId=_nsExpId;
@property(retain, nonatomic) NSString *nsLayerId; // @synthesize nsLayerId=_nsLayerId;
- (unsigned int)getPriorityLevel;
- (_Bool)abtestRunning;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

