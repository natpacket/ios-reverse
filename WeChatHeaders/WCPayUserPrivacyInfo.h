//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface WCPayUserPrivacyInfo : NSObject <PBCoding>
{
    unsigned int _m_needAgreeDuty;
}

+ (id)LoadFromFile;
+ (void)initialize;
+ (void)PBArrayAdd_m_needAgreeDuty;
@property(nonatomic) unsigned int m_needAgreeDuty; // @synthesize m_needAgreeDuty=_m_needAgreeDuty;
@property(readonly, copy) NSString *description;
- (void)saveToFile;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

