//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface MPPageDataCacheItemTemplateVersionInfo : NSObject <PBCoding>
{
    unsigned int _type;
    unsigned int _version;
    NSString *_versionGroup;
}

+ (void)initialize;
+ (void)PBArrayAdd_versionGroup;
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_type;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *versionGroup; // @synthesize versionGroup=_versionGroup;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
