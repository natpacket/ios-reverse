//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AppCommunicateData, NSString;

@interface OpenApiLaunchContext : NSObject
{
    _Bool _needWritePasteBoard;
    NSString *_appId;
    NSString *_sourceInfo;
    NSString *_bizInfo;
    AppCommunicateData *_appCommunicateData;
    NSString *_safetyControlReportStr;
    NSString *_currentPageUrl;
    NSString *_currentWeAppId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needWritePasteBoard; // @synthesize needWritePasteBoard=_needWritePasteBoard;
@property(retain, nonatomic) NSString *currentWeAppId; // @synthesize currentWeAppId=_currentWeAppId;
@property(retain, nonatomic) NSString *currentPageUrl; // @synthesize currentPageUrl=_currentPageUrl;
@property(retain, nonatomic) NSString *safetyControlReportStr; // @synthesize safetyControlReportStr=_safetyControlReportStr;
@property(retain, nonatomic) AppCommunicateData *appCommunicateData; // @synthesize appCommunicateData=_appCommunicateData;
@property(retain, nonatomic) NSString *bizInfo; // @synthesize bizInfo=_bizInfo;
@property(retain, nonatomic) NSString *sourceInfo; // @synthesize sourceInfo=_sourceInfo;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (_Bool)isAppCommunicateDataValid;

@end

