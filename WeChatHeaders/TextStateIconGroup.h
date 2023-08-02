//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSMutableDictionary, NSString;

@interface TextStateIconGroup : NSObject <PBCoding>
{
    NSString *_groupId;
    NSString *_groupIconURL;
    NSMutableDictionary *_localeToGroupDescriptionDict;
    NSString *_groupDescription;
}

+ (void)initialize;
+ (void)PBArrayAdd_groupIconURL;
+ (void)PBArrayAdd_localeToGroupDescriptionDict;
+ (void)PBArrayAdd_groupId;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *groupDescription; // @synthesize groupDescription=_groupDescription;
@property(retain, nonatomic) NSMutableDictionary *localeToGroupDescriptionDict; // @synthesize localeToGroupDescriptionDict=_localeToGroupDescriptionDict;
@property(retain, nonatomic) NSString *groupIconURL; // @synthesize groupIconURL=_groupIconURL;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
- (void)clearCachedDescription;
- (id)initWithInstance:(id)arg1;
- (id)initWithGroup:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

