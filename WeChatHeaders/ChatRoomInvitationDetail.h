//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"
#import "WCTColumnCoding-Protocol.h"

@class CMessageWrap, ChatRoomInvitationWrap, NSArray, NSString;

@interface ChatRoomInvitationDetail : NSObject <PBCoding, WCTColumnCoding>
{
    NSArray *_invitationReasonList;
    NSString *_content;
    NSString *_roomUsrName;
    CMessageWrap *_msgWrap;
    ChatRoomInvitationWrap *_invitationWrap;
}

+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_roomUsrName;
+ (void)PBArrayAdd_content;
+ (void)PBArrayAdd_invitationReasonList;
- (void).cxx_destruct;
@property(nonatomic) __weak ChatRoomInvitationWrap *invitationWrap; // @synthesize invitationWrap=_invitationWrap;
@property(retain, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap=_msgWrap;
@property(retain, nonatomic) NSString *roomUsrName; // @synthesize roomUsrName=_roomUsrName;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSArray *invitationReasonList; // @synthesize invitationReasonList=_invitationReasonList;
- (long long)getSvrId;
@property(readonly, copy) NSString *description;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

