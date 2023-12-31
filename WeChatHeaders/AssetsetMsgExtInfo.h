//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AssetsetMsgExtInfo : NSObject
{
    unsigned int _pauseCountOfSending;
    int _scene;
    int _failReason;
    unsigned long long _startUploadTime;
    NSString *_sessionID;
    unsigned long long _exportCostTime;
    unsigned long long _loadingTimeOfSending;
}

+ (id)generateExtInfoWithXmlNode:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(nonatomic) int failReason; // @synthesize failReason=_failReason;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned long long loadingTimeOfSending; // @synthesize loadingTimeOfSending=_loadingTimeOfSending;
@property(nonatomic) unsigned long long exportCostTime; // @synthesize exportCostTime=_exportCostTime;
@property(nonatomic) unsigned int pauseCountOfSending; // @synthesize pauseCountOfSending=_pauseCountOfSending;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned long long startUploadTime; // @synthesize startUploadTime=_startUploadTime;
- (id)generateXmlContent;
- (id)initWithSessionID:(id)arg1 Scene:(int)arg2;
- (id)initWithScene:(int)arg1;

@end

