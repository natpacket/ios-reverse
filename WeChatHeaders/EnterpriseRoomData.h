//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"
#import "WCTColumnCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface EnterpriseRoomData : MMObject <PBCoding, WCTColumnCoding>
{
    unsigned int _m_uiMaxMemberCount;
    NSMutableArray *_m_aryMemberList;
    NSString *_m_nsOwner;
}

+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_m_nsOwner;
+ (void)PBArrayAdd_m_uiMaxMemberCount;
+ (void)PBArrayAdd_m_aryMemberList;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsOwner; // @synthesize m_nsOwner=_m_nsOwner;
@property(nonatomic) unsigned int m_uiMaxMemberCount; // @synthesize m_uiMaxMemberCount=_m_uiMaxMemberCount;
@property(retain, nonatomic) NSMutableArray *m_aryMemberList; // @synthesize m_aryMemberList=_m_aryMemberList;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
