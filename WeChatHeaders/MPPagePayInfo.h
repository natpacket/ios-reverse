//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSString;

@interface MPPagePayInfo : MMObject <PBCoding>
{
    _Bool _isPaid;
    _Bool _isPaySubscribe;
    NSString *_friendPayCountStr;
}

+ (void)initialize;
+ (void)PBArrayAdd_friendPayCountStr;
+ (void)PBArrayAdd_isPaySubscribe;
+ (void)PBArrayAdd_isPaid;
- (void).cxx_destruct;
@property(nonatomic) _Bool isPaySubscribe; // @synthesize isPaySubscribe=_isPaySubscribe;
@property(copy, nonatomic) NSString *friendPayCountStr; // @synthesize friendPayCountStr=_friendPayCountStr;
@property(nonatomic) _Bool isPaid; // @synthesize isPaid=_isPaid;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

