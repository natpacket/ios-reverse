//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface WCSessionConfigModel : MMObject <PBCoding>
{
    NSString *_sid;
    NSMutableArray *_pageNames;
    NSString *_prePage;
    NSMutableArray *_sessionParams;
}

+ (void)initialize;
+ (void)PBArrayAdd_sessionParams;
+ (void)PBArrayAdd_prePage;
+ (void)PBArrayAdd_pageNames;
+ (void)PBArrayAdd_sid;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *sessionParams; // @synthesize sessionParams=_sessionParams;
@property(retain, nonatomic) NSString *prePage; // @synthesize prePage=_prePage;
@property(retain, nonatomic) NSMutableArray *pageNames; // @synthesize pageNames=_pageNames;
@property(retain, nonatomic) NSString *sid; // @synthesize sid=_sid;
- (id)toString;
- (id)initWithSid:(id)arg1 withPageNames:(id)arg2 withPrePage:(id)arg3;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
