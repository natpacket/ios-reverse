//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface WCFinderMsgSessionOwnerInfo : NSObject <PBCoding>
{
    _Bool _hasSetDefaultOwner;
    NSString *_owner;
    NSString *_lastOwner;
}

+ (void)initialize;
+ (void)PBArrayAdd_lastOwner;
+ (void)PBArrayAdd_hasSetDefaultOwner;
+ (void)PBArrayAdd_owner;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *lastOwner; // @synthesize lastOwner=_lastOwner;
@property(nonatomic) _Bool hasSetDefaultOwner; // @synthesize hasSetDefaultOwner=_hasSetDefaultOwner;
@property(retain, nonatomic) NSString *owner; // @synthesize owner=_owner;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

