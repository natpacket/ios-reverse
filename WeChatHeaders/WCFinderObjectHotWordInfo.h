//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"
#import "WCTColumnCoding-Protocol.h"

@class FinderObjectHotWordInfo, NSString;

@interface WCFinderObjectHotWordInfo : NSObject <WCTColumnCoding, PBCoding>
{
    FinderObjectHotWordInfo *_hotWordInfo;
}

+ (void)initialize;
+ (void)PBArrayAdd_hotWordInfo;
+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderObjectHotWordInfo *hotWordInfo; // @synthesize hotWordInfo=_hotWordInfo;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

