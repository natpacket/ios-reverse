//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSString;

@interface ShakeMsgItem : MMObject <PBCoding>
{
    _Bool _bIsRead;
    unsigned int _uiType;
    unsigned int _uiCreateTime;
    unsigned long long _ui64SvrMsgId;
    NSString *_nsThumbUrl;
    NSString *_nsTitle;
    NSString *_nsDesc;
    NSString *_nsJumpLink;
    NSString *_nsPid;
}

+ (void)initialize;
+ (void)PBArrayAdd_nsPid;
+ (void)PBArrayAdd_nsJumpLink;
+ (void)PBArrayAdd_nsDesc;
+ (void)PBArrayAdd_nsTitle;
+ (void)PBArrayAdd_nsThumbUrl;
+ (void)PBArrayAdd_bIsRead;
+ (void)PBArrayAdd_uiCreateTime;
+ (void)PBArrayAdd_uiType;
+ (void)PBArrayAdd_ui64SvrMsgId;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *nsPid; // @synthesize nsPid=_nsPid;
@property(retain, nonatomic) NSString *nsJumpLink; // @synthesize nsJumpLink=_nsJumpLink;
@property(retain, nonatomic) NSString *nsDesc; // @synthesize nsDesc=_nsDesc;
@property(retain, nonatomic) NSString *nsTitle; // @synthesize nsTitle=_nsTitle;
@property(retain, nonatomic) NSString *nsThumbUrl; // @synthesize nsThumbUrl=_nsThumbUrl;
@property(nonatomic) unsigned int uiCreateTime; // @synthesize uiCreateTime=_uiCreateTime;
@property(nonatomic) _Bool bIsRead; // @synthesize bIsRead=_bIsRead;
@property(nonatomic) unsigned int uiType; // @synthesize uiType=_uiType;
@property(nonatomic) unsigned long long ui64SvrMsgId; // @synthesize ui64SvrMsgId=_ui64SvrMsgId;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
