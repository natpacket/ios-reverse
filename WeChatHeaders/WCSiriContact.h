//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSArray, NSString;

@interface WCSiriContact : NSObject <PBCoding>
{
    NSString *_username;
    NSString *_displayName;
    NSString *_avatarUrl;
    NSString *_avatarHDUrl;
    NSArray *_memberAvatarUrls;
    NSString *_termName;
}

+ (void)initialize;
+ (void)PBArrayAdd_termName;
+ (void)PBArrayAdd_memberAvatarUrls;
+ (void)PBArrayAdd_avatarHDUrl;
+ (void)PBArrayAdd_avatarUrl;
+ (void)PBArrayAdd_displayName;
+ (void)PBArrayAdd_username;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *termName; // @synthesize termName=_termName;
@property(retain, nonatomic) NSArray *memberAvatarUrls; // @synthesize memberAvatarUrls=_memberAvatarUrls;
@property(retain, nonatomic) NSString *avatarHDUrl; // @synthesize avatarHDUrl=_avatarHDUrl;
@property(retain, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool isChatRoom;
- (id)initWithContact:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

