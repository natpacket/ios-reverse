//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSArray, NSString;

@interface GameCenterPromotedGamesFeedsItem : MMObject <PBCoding>
{
    NSArray *_usernameList;
    NSString *_detail;
    NSArray *_nicknameList;
}

+ (void)initialize;
+ (void)PBArrayAdd_nicknameList;
+ (void)PBArrayAdd_detail;
+ (void)PBArrayAdd_usernameList;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *nicknameList; // @synthesize nicknameList=_nicknameList;
@property(retain, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(retain, nonatomic) NSArray *usernameList; // @synthesize usernameList=_usernameList;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
