//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface WCViewOperationConfigModel : MMObject <PBCoding>
{
    NSString *_pageName;
    NSString *_viewId;
    unsigned long long _action;
    NSMutableArray *_businessParams;
}

+ (void)initialize;
+ (void)PBArrayAdd_businessParams;
+ (void)PBArrayAdd_action;
+ (void)PBArrayAdd_viewId;
+ (void)PBArrayAdd_pageName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *businessParams; // @synthesize businessParams=_businessParams;
@property(nonatomic) unsigned long long action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *viewId; // @synthesize viewId=_viewId;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
- (id)toString;
- (id)initWithPageName:(id)arg1 withViewId:(id)arg2 withViewOperationAction:(unsigned long long)arg3;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

