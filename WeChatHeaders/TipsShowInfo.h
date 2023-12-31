//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSArray, NSMutableArray, NSString;

@interface TipsShowInfo : MMObject <PBCoding>
{
    _Bool _bHadShow;
    unsigned int _tipsId;
    unsigned long long _tipsShowType;
    NSString *_title;
    NSString *_iconUrl;
    NSString *_path;
    NSMutableArray *_arrParents;
    NSArray *_arrShowingTips;
}

+ (void)initialize;
+ (void)PBArrayAdd_bHadShow;
+ (void)PBArrayAdd_arrParents;
+ (void)PBArrayAdd_path;
+ (void)PBArrayAdd_iconUrl;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_tipsShowType;
- (void).cxx_destruct;
@property(nonatomic) _Bool bHadShow; // @synthesize bHadShow=_bHadShow;
@property(retain, nonatomic) NSArray *arrShowingTips; // @synthesize arrShowingTips=_arrShowingTips;
@property(retain, nonatomic) NSMutableArray *arrParents; // @synthesize arrParents=_arrParents;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long tipsShowType; // @synthesize tipsShowType=_tipsShowType;
@property(nonatomic) unsigned int tipsId; // @synthesize tipsId=_tipsId;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

