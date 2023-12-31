//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, WCFinderMoreLiveReporter;

@interface WCFinderLiveHomePageReportSession : NSObject
{
    _Bool _skipFeedsReport;
    unsigned long long _commentScene;
    unsigned long long _fromLiveID;
    NSString *_fromReportScene;
    NSMutableDictionary *_markReadDict;
    WCFinderMoreLiveReporter *_moreLiveReporter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderMoreLiveReporter *moreLiveReporter; // @synthesize moreLiveReporter=_moreLiveReporter;
@property(retain, nonatomic) NSMutableDictionary *markReadDict; // @synthesize markReadDict=_markReadDict;
@property(nonatomic) _Bool skipFeedsReport; // @synthesize skipFeedsReport=_skipFeedsReport;
@property(retain, nonatomic) NSString *fromReportScene; // @synthesize fromReportScene=_fromReportScene;
@property(nonatomic) unsigned long long fromLiveID; // @synthesize fromLiveID=_fromLiveID;
@property(nonatomic) unsigned long long commentScene; // @synthesize commentScene=_commentScene;
- (void)cleanExposeCache;
- (void)updatePlayStateWithTid:(id)arg1 state:(unsigned long long)arg2;
- (void)updateFeedExposeEnd:(id)arg1 index:(unsigned long long)arg2;
- (void)updateFeedExpose:(id)arg1;
- (_Bool)isFeedExistExpose:(id)arg1;
- (void)updateSkipFeedsReport:(_Bool)arg1;
- (unsigned long long)mainPageReportPositionWithContainerType:(unsigned long long)arg1;
- (id)kvReportNoticeJsonDictWithContainerType:(unsigned long long)arg1 columnId:(id)arg2 index:(unsigned long long)arg3 noticeId:(id)arg4;
- (id)kvReportLiveRoomJsonDictWithContainerType:(unsigned long long)arg1 columnId:(id)arg2 index:(unsigned long long)arg3;
- (void)report22947QuitAction;
- (void)report22946EnterAction;
- (void)report23057ColumnMoreButtonAction:(unsigned long long)arg1 containerModel:(id)arg2;
- (void)report23057RightSearchAction:(unsigned long long)arg1;
- (void)report23057ConcertNoticeCardAction:(unsigned long long)arg1 activityId:(id)arg2 eidUdfKv:(id)arg3;
- (void)report23057ShowConcertTicketActionWithModel:(id)arg1;
- (void)report23057MoreNavBtnAction:(unsigned long long)arg1;
- (void)report23057JumperAction:(unsigned long long)arg1 pageIndex:(unsigned long long)arg2 containerModel:(id)arg3;
- (void)report23057CardAction:(unsigned long long)arg1 pageIndex:(unsigned long long)arg2 cardIndex:(unsigned long long)arg3 containerModel:(id)arg4 model:(id)arg5;
- (void)report23057SectionListExpose:(unsigned long long)arg1 containerModel:(id)arg2;
- (void)report21158NoticeActionFromContainerType:(unsigned long long)arg1 noticeAction:(long long)arg2 model:(id)arg3 columnId:(id)arg4 index:(unsigned long long)arg5;
- (void)report21053ClickActionWithContentVM:(id)arg1 containerType:(unsigned long long)arg2 columnId:(id)arg3 index:(unsigned long long)arg4;
- (void)report21053ExposeActionWithContentVM:(id)arg1 containerType:(unsigned long long)arg2 columnId:(id)arg3 index:(unsigned long long)arg4;
- (void)reportInteractiveHomePageAction:(unsigned long long)arg1 liveID:(unsigned long long)arg2;
- (void)onSessionEnterFromContainerType:(unsigned long long)arg1 columnId:(id)arg2 index:(unsigned long long)arg3;
- (id)initWithCommentScene:(unsigned long long)arg1;

@end

