//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface MSETransmitData : NSObject <PBCoding>
{
    NSString *_searchText;
    long long _shareType;
}

+ (void)initialize;
+ (void)PBArrayAdd_shareType;
+ (void)PBArrayAdd_searchText;
- (void).cxx_destruct;
@property(nonatomic) long long shareType; // @synthesize shareType=_shareType;
@property(retain, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

