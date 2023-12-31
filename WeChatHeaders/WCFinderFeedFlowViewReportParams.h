//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface WCFinderFeedFlowViewReportParams : NSObject
{
    NSString *_pageTag;
    NSString *_groudId;
    unsigned long long _musicType;
    NSString *_eventId;
    unsigned long long _eventSortType;
    NSDictionary *_eventInfo;
    NSDictionary *_udfKV;
    unsigned long long _markReadScene;
    unsigned long long _markReadSubScene;
    unsigned long long _cellExposeReportRate;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long cellExposeReportRate; // @synthesize cellExposeReportRate=_cellExposeReportRate;
@property(nonatomic) unsigned long long markReadSubScene; // @synthesize markReadSubScene=_markReadSubScene;
@property(nonatomic) unsigned long long markReadScene; // @synthesize markReadScene=_markReadScene;
@property(retain, nonatomic) NSDictionary *udfKV; // @synthesize udfKV=_udfKV;
@property(retain, nonatomic) NSDictionary *eventInfo; // @synthesize eventInfo=_eventInfo;
@property(nonatomic) unsigned long long eventSortType; // @synthesize eventSortType=_eventSortType;
@property(copy, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
@property(nonatomic) unsigned long long musicType; // @synthesize musicType=_musicType;
@property(copy, nonatomic) NSString *groudId; // @synthesize groudId=_groudId;
@property(copy, nonatomic) NSString *pageTag; // @synthesize pageTag=_pageTag;

@end

