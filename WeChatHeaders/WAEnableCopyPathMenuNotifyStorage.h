//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSMutableDictionary, NSString;

@interface WAEnableCopyPathMenuNotifyStorage : NSObject <PBCoding>
{
    NSMutableDictionary *_dicAppid2Info;
}

+ (void)initialize;
+ (void)PBArrayAdd_dicAppid2Info;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicAppid2Info; // @synthesize dicAppid2Info=_dicAppid2Info;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

