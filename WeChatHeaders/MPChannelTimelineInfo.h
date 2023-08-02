//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSArray, NSString;

@interface MPChannelTimelineInfo : NSObject <PBCoding>
{
    _Bool _shouldCleanUpDesc;
    NSString *_title;
    NSString *_desc;
    NSArray *_bizInfoArr;
    NSString *_appId;
    unsigned long long _appDebugModeType;
}

+ (void)initialize;
+ (void)PBArrayAdd_appDebugModeType;
+ (void)PBArrayAdd_appId;
+ (void)PBArrayAdd_bizInfoArr;
+ (void)PBArrayAdd_shouldCleanUpDesc;
+ (void)PBArrayAdd_desc;
+ (void)PBArrayAdd_title;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long appDebugModeType; // @synthesize appDebugModeType=_appDebugModeType;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSArray *bizInfoArr; // @synthesize bizInfoArr=_bizInfoArr;
@property(nonatomic) _Bool shouldCleanUpDesc; // @synthesize shouldCleanUpDesc=_shouldCleanUpDesc;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy) NSString *description;
- (_Bool)isValid;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

