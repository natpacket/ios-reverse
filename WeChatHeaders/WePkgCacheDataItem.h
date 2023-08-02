//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSString;

@interface WePkgCacheDataItem : NSObject
{
    NSString *_pkgId;
    NSString *_rid;
    NSString *_mimeType;
    NSString *_textEncodingName;
    NSMutableArray *_extraHeaderList;
    NSData *_data;
}

+ (id)responseFromUrl:(id)arg1 cacheItem:(id)arg2 pkgData:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSMutableArray *extraHeaderList; // @synthesize extraHeaderList=_extraHeaderList;
@property(retain, nonatomic) NSString *textEncodingName; // @synthesize textEncodingName=_textEncodingName;
@property(retain, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(retain, nonatomic) NSString *rid; // @synthesize rid=_rid;
@property(retain, nonatomic) NSString *pkgId; // @synthesize pkgId=_pkgId;
- (void)loadFileData:(id)arg1;
- (id)fileNameFromRid:(id)arg1;
- (id)getFileData;

@end

