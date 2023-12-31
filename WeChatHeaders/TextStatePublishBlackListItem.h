//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSArray, NSString;

@interface TextStatePublishBlackListItem : NSObject <PBCoding>
{
    NSString *_textStateId;
    long long _privacy;
    NSArray *_labelList;
    NSArray *_contactNameList;
}

+ (id)contactListFromContactNameList:(id)arg1;
+ (id)contactNameListFromContactList:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_contactNameList;
+ (void)PBArrayAdd_labelList;
+ (void)PBArrayAdd_privacy;
+ (void)PBArrayAdd_textStateId;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *contactNameList; // @synthesize contactNameList=_contactNameList;
@property(retain, nonatomic) NSArray *labelList; // @synthesize labelList=_labelList;
@property(nonatomic) long long privacy; // @synthesize privacy=_privacy;
@property(retain, nonatomic) NSString *textStateId; // @synthesize textStateId=_textStateId;
- (id)contactList;
- (id)initWithModel:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

