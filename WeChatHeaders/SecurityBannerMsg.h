//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface SecurityBannerMsg : NSObject <PBCoding>
{
    unsigned int _showType;
    NSString *_wording;
    NSString *_linkName;
    NSString *_linkSrc;
}

+ (void)initialize;
+ (void)PBArrayAdd_linkSrc;
+ (void)PBArrayAdd_linkName;
+ (void)PBArrayAdd_showType;
+ (void)PBArrayAdd_wording;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *linkSrc; // @synthesize linkSrc=_linkSrc;
@property(retain, nonatomic) NSString *linkName; // @synthesize linkName=_linkName;
@property(nonatomic) unsigned int showType; // @synthesize showType=_showType;
@property(retain, nonatomic) NSString *wording; // @synthesize wording=_wording;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
