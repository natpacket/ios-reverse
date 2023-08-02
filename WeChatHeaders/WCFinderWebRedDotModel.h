//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSDictionary, NSString;

@interface WCFinderWebRedDotModel : NSObject <PBCoding>
{
    long long _webBusinessType;
    NSDictionary *_redDotDic;
}

+ (void)initialize;
+ (void)PBArrayAdd_redDotDic;
+ (void)PBArrayAdd_webBusinessType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *redDotDic; // @synthesize redDotDic=_redDotDic;
@property(nonatomic) long long webBusinessType; // @synthesize webBusinessType=_webBusinessType;
- (id)getRedDotDicByRedDotPathArray:(id)arg1;
- (void)addRedDotShowInfo:(id)arg1;
- (void)cleanWebRedDotPath:(id)arg1;
- (id)initWithWebBusinessType:(long long)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

