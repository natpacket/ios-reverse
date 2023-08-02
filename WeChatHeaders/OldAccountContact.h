//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface OldAccountContact : NSObject <PBCoding>
{
    unsigned int _sequence;
    unsigned int _status;
    NSString *_username;
    NSString *_ticket;
    NSString *_nickname;
    NSString *_encryptedUsername;
    NSString *_friendRequest;
}

+ (void)initialize;
+ (void)PBArrayAdd_friendRequest;
+ (void)PBArrayAdd_status;
+ (void)PBArrayAdd_encryptedUsername;
+ (void)PBArrayAdd_nickname;
+ (void)PBArrayAdd_sequence;
+ (void)PBArrayAdd_ticket;
+ (void)PBArrayAdd_username;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *friendRequest; // @synthesize friendRequest=_friendRequest;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *encryptedUsername; // @synthesize encryptedUsername=_encryptedUsername;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(nonatomic) unsigned int sequence; // @synthesize sequence=_sequence;
@property(retain, nonatomic) NSString *ticket; // @synthesize ticket=_ticket;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
- (long long)compareOldAccountFriendAscending:(id)arg1;
- (void)mergeOldAccountContact:(id)arg1;
- (id)availableUsername;
@property(readonly, copy) NSString *description;
- (id)initWithOldAcctFriend:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

