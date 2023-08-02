//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface WSFTSRddotInfo : NSObject <PBCoding>
{
    unsigned int _clientVersion;
    unsigned int _h5Version;
    unsigned int _expireTimeAfterExpose;
    unsigned int _action;
    unsigned int _exposedTime;
    NSString *_msgId;
    unsigned long long _businessType;
}

+ (id)parseFromXmlNode:(struct XmlReaderNode_t *)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_exposedTime;
+ (void)PBArrayAdd_action;
+ (void)PBArrayAdd_businessType;
+ (void)PBArrayAdd_expireTimeAfterExpose;
+ (void)PBArrayAdd_h5Version;
+ (void)PBArrayAdd_clientVersion;
+ (void)PBArrayAdd_msgId;
- (void).cxx_destruct;
@property(nonatomic) unsigned int exposedTime; // @synthesize exposedTime=_exposedTime;
@property(nonatomic) unsigned int action; // @synthesize action=_action;
@property(nonatomic) unsigned long long businessType; // @synthesize businessType=_businessType;
@property(nonatomic) unsigned int expireTimeAfterExpose; // @synthesize expireTimeAfterExpose=_expireTimeAfterExpose;
@property(nonatomic) unsigned int h5Version; // @synthesize h5Version=_h5Version;
@property(nonatomic) unsigned int clientVersion; // @synthesize clientVersion=_clientVersion;
@property(copy, nonatomic) NSString *msgId; // @synthesize msgId=_msgId;
- (_Bool)isValid;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
