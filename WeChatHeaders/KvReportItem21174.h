//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KvReportBaseItem.h"

@class NSString;

@interface KvReportItem21174 : KvReportBaseItem
{
    unsigned int _EnterScene_21;
    unsigned int _ActionType_24;
    unsigned int _Content_27;
    NSString *_EnterSceneId_22;
    NSString *_RequestId_23;
    NSString *_QueryKey_25;
    NSString *_SessionId_26;
    unsigned long long _EventTime_28;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long EventTime_28; // @synthesize EventTime_28=_EventTime_28;
@property(nonatomic) unsigned int Content_27; // @synthesize Content_27=_Content_27;
@property(copy, nonatomic) NSString *SessionId_26; // @synthesize SessionId_26=_SessionId_26;
@property(copy, nonatomic) NSString *QueryKey_25; // @synthesize QueryKey_25=_QueryKey_25;
@property(nonatomic) unsigned int ActionType_24; // @synthesize ActionType_24=_ActionType_24;
@property(copy, nonatomic) NSString *RequestId_23; // @synthesize RequestId_23=_RequestId_23;
@property(copy, nonatomic) NSString *EnterSceneId_22; // @synthesize EnterSceneId_22=_EnterSceneId_22;
@property(nonatomic) unsigned int EnterScene_21; // @synthesize EnterScene_21=_EnterScene_21;
- (id)reportOrderedFieldNameArr;
- (unsigned int)reportNSStringPreprocessType;
- (unsigned int)reportKvId;

@end

