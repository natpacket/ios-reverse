//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface GameLifeEnteredRedDotCache : NSObject <PBCoding>
{
    NSMutableArray *_enterIdArr;
}

+ (void)initialize;
+ (void)PBArrayAdd_enterIdArr;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *enterIdArr; // @synthesize enterIdArr=_enterIdArr;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

