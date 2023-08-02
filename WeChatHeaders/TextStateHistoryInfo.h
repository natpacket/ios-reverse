//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSDate, NSString, TextStateModel;

@interface TextStateHistoryInfo : NSObject <PBCoding>
{
    unsigned int _interactionCount;
    unsigned int _createTime;
    unsigned long long _key;
    NSString *_iconId;
    NSString *_customIconDescription;
    NSString *_topicId;
    NSString *_textStateId;
    NSDate *_createDate;
    NSString *_defaultImageId;
    TextStateModel *_textState;
}

+ (void)initialize;
+ (void)PBArrayAdd_customIconDescription;
+ (void)PBArrayAdd_defaultImageId;
+ (void)PBArrayAdd_interactionCount;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_topicId;
+ (void)PBArrayAdd_iconId;
+ (void)PBArrayAdd_textStateId;
+ (void)PBArrayAdd_key;
- (void).cxx_destruct;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) TextStateModel *textState; // @synthesize textState=_textState;
@property(retain, nonatomic) NSString *defaultImageId; // @synthesize defaultImageId=_defaultImageId;
@property(retain, nonatomic) NSDate *createDate; // @synthesize createDate=_createDate;
@property(nonatomic) unsigned int interactionCount; // @synthesize interactionCount=_interactionCount;
@property(retain, nonatomic) NSString *textStateId; // @synthesize textStateId=_textStateId;
@property(retain, nonatomic) NSString *topicId; // @synthesize topicId=_topicId;
@property(retain, nonatomic) NSString *customIconDescription; // @synthesize customIconDescription=_customIconDescription;
@property(retain, nonatomic) NSString *iconId; // @synthesize iconId=_iconId;
@property(nonatomic) unsigned long long key; // @synthesize key=_key;
- (_Bool)updateTextStateFromHistory:(id)arg1;
- (id)initWithHistory:(id)arg1 isSummary:(_Bool)arg2;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
