//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSString;

@interface WCSnsPreLoadInfo : MMObject <PBCoding>
{
    _Bool _sightAutoDownloadOn3GPlus;
    _Bool _sightAutoDownloadOnWifi;
    NSString *_layerId;
    NSString *_expId;
}

+ (void)initialize;
+ (void)PBArrayAdd_sightAutoDownloadOnWifi;
+ (void)PBArrayAdd_sightAutoDownloadOn3GPlus;
+ (void)PBArrayAdd_expId;
+ (void)PBArrayAdd_layerId;
- (void).cxx_destruct;
@property(nonatomic) _Bool sightAutoDownloadOnWifi; // @synthesize sightAutoDownloadOnWifi=_sightAutoDownloadOnWifi;
@property(nonatomic) _Bool sightAutoDownloadOn3GPlus; // @synthesize sightAutoDownloadOn3GPlus=_sightAutoDownloadOn3GPlus;
@property(retain, nonatomic) NSString *expId; // @synthesize expId=_expId;
@property(retain, nonatomic) NSString *layerId; // @synthesize layerId=_layerId;
- (_Bool)parsePreLoadInfo:(id)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

