//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAReportBaseItem.h"

@class NSString;

@interface WAReportWeAppQualityDetectItem : WAReportBaseItem
{
    _Bool _currentPageRecoverReloaded;
    _Bool _hasHtmlWeb;
    _Bool _isDisplayingPageSheet;
    _Bool _isSkyline;
    _Bool _isByteCodeEnabled;
    unsigned int _qualityIssueType;
    unsigned int _qualityIssueSubType;
    unsigned int _pageCount;
    unsigned int _whiteScreenDetectThreshold;
    unsigned int _whiteScreenColorRatio;
    unsigned int _whiteScreenDoubleCheckScene;
    unsigned int _whiteScreenDoubleCheckReason;
    unsigned int _engineType;
    unsigned long long _qualityIssueTimeStampInMs;
    NSString *_lastNPagePath;
    NSString *_qualityIssuePageLastError;
    NSString *_qualityIssueServiceLastError;
    NSString *_runtimeContext;
    NSString *_qualityIssueHappenPagePath;
    NSString *_openType;
    NSString *_navId;
    unsigned long long _appRouteStartTimeInMs;
    unsigned long long _initReadyReceiveTimeInMs;
    unsigned long long _recoverReloadStartTimeInMs;
    unsigned long long _recoverReloadInitReadyReceiveTimeInMs;
    unsigned long long _initReadyLastWhiteScreenDetectedTimeInMs;
    NSString *_whiteScreenHexColor;
    NSString *_modalOrToastStr;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isByteCodeEnabled; // @synthesize isByteCodeEnabled=_isByteCodeEnabled;
@property(nonatomic) unsigned int engineType; // @synthesize engineType=_engineType;
@property(nonatomic) unsigned int whiteScreenDoubleCheckReason; // @synthesize whiteScreenDoubleCheckReason=_whiteScreenDoubleCheckReason;
@property(nonatomic) _Bool isSkyline; // @synthesize isSkyline=_isSkyline;
@property(nonatomic) unsigned int whiteScreenDoubleCheckScene; // @synthesize whiteScreenDoubleCheckScene=_whiteScreenDoubleCheckScene;
@property(nonatomic) _Bool isDisplayingPageSheet; // @synthesize isDisplayingPageSheet=_isDisplayingPageSheet;
@property(copy, nonatomic) NSString *modalOrToastStr; // @synthesize modalOrToastStr=_modalOrToastStr;
@property(nonatomic) unsigned int whiteScreenColorRatio; // @synthesize whiteScreenColorRatio=_whiteScreenColorRatio;
@property(copy, nonatomic) NSString *whiteScreenHexColor; // @synthesize whiteScreenHexColor=_whiteScreenHexColor;
@property(nonatomic) unsigned long long initReadyLastWhiteScreenDetectedTimeInMs; // @synthesize initReadyLastWhiteScreenDetectedTimeInMs=_initReadyLastWhiteScreenDetectedTimeInMs;
@property(nonatomic) unsigned long long recoverReloadInitReadyReceiveTimeInMs; // @synthesize recoverReloadInitReadyReceiveTimeInMs=_recoverReloadInitReadyReceiveTimeInMs;
@property(nonatomic) unsigned long long recoverReloadStartTimeInMs; // @synthesize recoverReloadStartTimeInMs=_recoverReloadStartTimeInMs;
@property(nonatomic) unsigned long long initReadyReceiveTimeInMs; // @synthesize initReadyReceiveTimeInMs=_initReadyReceiveTimeInMs;
@property(nonatomic) unsigned long long appRouteStartTimeInMs; // @synthesize appRouteStartTimeInMs=_appRouteStartTimeInMs;
@property(nonatomic) _Bool hasHtmlWeb; // @synthesize hasHtmlWeb=_hasHtmlWeb;
@property(nonatomic) _Bool currentPageRecoverReloaded; // @synthesize currentPageRecoverReloaded=_currentPageRecoverReloaded;
@property(copy, nonatomic) NSString *navId; // @synthesize navId=_navId;
@property(copy, nonatomic) NSString *openType; // @synthesize openType=_openType;
@property(nonatomic) unsigned int whiteScreenDetectThreshold; // @synthesize whiteScreenDetectThreshold=_whiteScreenDetectThreshold;
@property(copy, nonatomic) NSString *qualityIssueHappenPagePath; // @synthesize qualityIssueHappenPagePath=_qualityIssueHappenPagePath;
@property(copy, nonatomic) NSString *runtimeContext; // @synthesize runtimeContext=_runtimeContext;
@property(copy, nonatomic) NSString *qualityIssueServiceLastError; // @synthesize qualityIssueServiceLastError=_qualityIssueServiceLastError;
@property(copy, nonatomic) NSString *qualityIssuePageLastError; // @synthesize qualityIssuePageLastError=_qualityIssuePageLastError;
@property(copy, nonatomic) NSString *lastNPagePath; // @synthesize lastNPagePath=_lastNPagePath;
@property(nonatomic) unsigned int pageCount; // @synthesize pageCount=_pageCount;
@property(nonatomic) unsigned long long qualityIssueTimeStampInMs; // @synthesize qualityIssueTimeStampInMs=_qualityIssueTimeStampInMs;
@property(nonatomic) unsigned int qualityIssueSubType; // @synthesize qualityIssueSubType=_qualityIssueSubType;
@property(nonatomic) unsigned int qualityIssueType; // @synthesize qualityIssueType=_qualityIssueType;
- (id)reportString;
- (void)makeSafeString;
- (int)reportID;

@end
