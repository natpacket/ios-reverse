//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSMutableDictionary, NSString;

@interface MPPageDownloadedTemplateRecord : NSObject <PBCoding>
{
    unsigned int _version;
    unsigned int _downloadSize;
    NSString *_md5;
    NSString *_url;
    NSString *_fullVersion;
    NSMutableDictionary *_httpHeaderMap;
    NSString *_versionGroup;
    unsigned long long _startTime;
    unsigned long long _endTime;
}

+ (void)initialize;
+ (void)PBArrayAdd_versionGroup;
+ (void)PBArrayAdd_httpHeaderMap;
+ (void)PBArrayAdd_fullVersion;
+ (void)PBArrayAdd_url;
+ (void)PBArrayAdd_md5;
+ (void)PBArrayAdd_version;
- (void).cxx_destruct;
@property(nonatomic) unsigned int downloadSize; // @synthesize downloadSize=_downloadSize;
@property(nonatomic) unsigned long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *versionGroup; // @synthesize versionGroup=_versionGroup;
@property(retain, nonatomic) NSMutableDictionary *httpHeaderMap; // @synthesize httpHeaderMap=_httpHeaderMap;
@property(copy, nonatomic) NSString *fullVersion; // @synthesize fullVersion=_fullVersion;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
