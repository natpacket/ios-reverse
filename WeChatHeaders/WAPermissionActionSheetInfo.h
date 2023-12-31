//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"
#import "WCTColumnCoding-Protocol.h"

@class NSData, NSString;

@interface WAPermissionActionSheetInfo : NSObject <PBCoding, WCTColumnCoding>
{
    _Bool _isOpenComment;
    _Bool _isNeedEvaluateBeforeExit;
    unsigned int _popEvaluateLeastStayTime;
    NSData *_controlBytes;
}

+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_controlBytes;
+ (void)PBArrayAdd_popEvaluateLeastStayTime;
+ (void)PBArrayAdd_isNeedEvaluateBeforeExit;
+ (void)PBArrayAdd_isOpenComment;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *controlBytes; // @synthesize controlBytes=_controlBytes;
@property(nonatomic) unsigned int popEvaluateLeastStayTime; // @synthesize popEvaluateLeastStayTime=_popEvaluateLeastStayTime;
@property(nonatomic) _Bool isNeedEvaluateBeforeExit; // @synthesize isNeedEvaluateBeforeExit=_isNeedEvaluateBeforeExit;
@property(nonatomic) _Bool isOpenComment; // @synthesize isOpenComment=_isOpenComment;
@property(readonly, copy) NSString *description;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

