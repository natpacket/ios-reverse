//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSMutableDictionary, NSString;

@interface MBFileSpaceStatus : NSObject <PBCoding>
{
    unsigned long long _totalFileSize;
    NSMutableDictionary *_dicBizItem;
}

+ (void)initialize;
+ (void)PBArrayAdd_dicBizItem;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicBizItem; // @synthesize dicBizItem=_dicBizItem;
@property(nonatomic) unsigned long long totalFileSize; // @synthesize totalFileSize=_totalFileSize;
@property(readonly, copy) NSString *description;
- (void)updateTotalFileSize;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

