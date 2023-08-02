//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class FinderFlowCardRecommendReason, NSString;

@interface WCFinderRecommendInfo : NSObject <WCTTableCoding>
{
    NSString *_tid;
    unsigned long long _scene;
    long long _recommendType;
    NSString *_recommendReason;
    unsigned long long _orgRecommendType;
    FinderFlowCardRecommendReason *_flowCardRecommandReasonInfo;
    NSString *_flowDescTitle;
}

+ (void)__wcdb_table_constraint_8:(void *)arg1;
+ (void)__wcdb_table_constraint_7:(void *)arg1;
+ (id)swift_flowDescTitle;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)flowDescTitle;
+ (id)swift_flowCardRecommandReasonInfo;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)flowCardRecommandReasonInfo;
+ (id)swift_scene;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)scene;
+ (id)swift_orgRecommendType;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)orgRecommendType;
+ (id)swift_recommendReason;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)recommendReason;
+ (id)swift_recommendType;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)recommendType;
+ (id)swift_tid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)tid;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *flowDescTitle; // @synthesize flowDescTitle=_flowDescTitle;
@property(retain, nonatomic) FinderFlowCardRecommendReason *flowCardRecommandReasonInfo; // @synthesize flowCardRecommandReasonInfo=_flowCardRecommandReasonInfo;
@property(nonatomic) unsigned long long orgRecommendType; // @synthesize orgRecommendType=_orgRecommendType;
@property(copy, nonatomic) NSString *recommendReason; // @synthesize recommendReason=_recommendReason;
@property(nonatomic) long long recommendType; // @synthesize recommendType=_recommendType;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;
@property(readonly) Class superclass;

@end

