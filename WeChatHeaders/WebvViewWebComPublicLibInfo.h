//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSArray, NSString;

@interface WebvViewWebComPublicLibInfo : MMObject
{
    unsigned int _libType;
    long long _version;
    NSString *_iframeUrlPattern;
    NSArray *_arrIFrameMatrixFormat;
    NSString *_wxTagJS;
    NSString *_webcomptJS;
    NSString *_webSkeletonHtmlString;
    NSString *_webPrefetchJS;
}

+ (id)dataWithFileName:(id)arg1 unpackPkg:(void *)arg2;
+ (id)publicInfoFromPkgFilePath:(id)arg1 minVersion:(long long)arg2;
+ (id)currentBundlePublicInfoWithMMResVersion:(unsigned long long)arg1;
+ (id)currentMMResInfo;
+ (id)currentDebugPkgInfo;
+ (id)newSessionPublicLibInfo;
- (void).cxx_destruct;
@property(nonatomic) unsigned int libType; // @synthesize libType=_libType;
@property(copy, nonatomic) NSString *webPrefetchJS; // @synthesize webPrefetchJS=_webPrefetchJS;
@property(copy, nonatomic) NSString *webSkeletonHtmlString; // @synthesize webSkeletonHtmlString=_webSkeletonHtmlString;
@property(copy, nonatomic) NSString *webcomptJS; // @synthesize webcomptJS=_webcomptJS;
@property(copy, nonatomic) NSString *wxTagJS; // @synthesize wxTagJS=_wxTagJS;
@property(retain, nonatomic) NSArray *arrIFrameMatrixFormat; // @synthesize arrIFrameMatrixFormat=_arrIFrameMatrixFormat;
@property(copy, nonatomic) NSString *iframeUrlPattern; // @synthesize iframeUrlPattern=_iframeUrlPattern;
@property(nonatomic) long long version; // @synthesize version=_version;

@end

