//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSString;

@interface WePkgSingleFileInfo : MMObject <PBCoding>
{
    unsigned int _downloadNetworkType;
    unsigned int _sizeInBytes;
    NSString *_rid;
    NSString *_mimeType;
    NSString *_md5;
    NSString *_downloadUrl;
}

+ (void)initialize;
+ (void)PBArrayAdd_sizeInBytes;
+ (void)PBArrayAdd_downloadNetworkType;
+ (void)PBArrayAdd_downloadUrl;
+ (void)PBArrayAdd_md5;
+ (void)PBArrayAdd_mimeType;
+ (void)PBArrayAdd_rid;
- (void).cxx_destruct;
@property(nonatomic) unsigned int sizeInBytes; // @synthesize sizeInBytes=_sizeInBytes;
@property(nonatomic) unsigned int downloadNetworkType; // @synthesize downloadNetworkType=_downloadNetworkType;
@property(retain, nonatomic) NSString *downloadUrl; // @synthesize downloadUrl=_downloadUrl;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(retain, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(retain, nonatomic) NSString *rid; // @synthesize rid=_rid;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

