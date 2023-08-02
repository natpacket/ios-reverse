//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface TextStatePassthroughIcon : NSObject <PBCoding>
{
    unsigned int _beginTime;
    unsigned int _endTime;
    NSString *_iconId;
}

+ (void)initialize;
+ (void)PBArrayAdd_endTime;
+ (void)PBArrayAdd_beginTime;
+ (void)PBArrayAdd_iconId;
- (void).cxx_destruct;
@property(nonatomic) unsigned int endTime; // @synthesize endTime=_endTime;
@property(nonatomic) unsigned int beginTime; // @synthesize beginTime=_beginTime;
@property(retain, nonatomic) NSString *iconId; // @synthesize iconId=_iconId;
- (id)identifier;
- (_Bool)isActive;
- (id)initWithIcon:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
