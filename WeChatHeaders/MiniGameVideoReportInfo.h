//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MiniGameVideoReportInfo : NSObject
{
    int _uiArea;
    unsigned int _positionID;
    int _actionID;
    unsigned int _opType;
    unsigned int _appVersion;
    unsigned int _appState;
    unsigned int _funcType;
    NSString *_appId;
    NSString *_actionStatus;
    NSString *_externInfo;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int funcType; // @synthesize funcType=_funcType;
@property(retain, nonatomic) NSString *externInfo; // @synthesize externInfo=_externInfo;
@property(nonatomic) unsigned int appState; // @synthesize appState=_appState;
@property(nonatomic) unsigned int appVersion; // @synthesize appVersion=_appVersion;
@property(retain, nonatomic) NSString *actionStatus; // @synthesize actionStatus=_actionStatus;
@property(nonatomic) unsigned int opType; // @synthesize opType=_opType;
@property(nonatomic) int actionID; // @synthesize actionID=_actionID;
@property(nonatomic) unsigned int positionID; // @synthesize positionID=_positionID;
@property(nonatomic) int uiArea; // @synthesize uiArea=_uiArea;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;

@end

