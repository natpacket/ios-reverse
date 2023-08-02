//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSMutableDictionary, NSString, WSNumberRedPointList, WSRedPointInfo;

@interface WSRedPointCtrlInfo : NSObject <PBCoding>
{
    _Bool _bContentReddotShowedInFindPage;
    unsigned int _recommendClearedTimeStamps;
    unsigned int _searchClearedTimeStamps;
    unsigned int _secondColumnClearedTimeStamps;
    unsigned int _recommendThirdColumnClearedTimeStamps;
    WSRedPointInfo *_searchRedPointInfo;
    WSRedPointInfo *_recommendFirstColumnRedPointInfo;
    WSNumberRedPointList *_recommendNumRedPoints;
    WSRedPointInfo *_recommendSecondColumnRedPointInfo;
    WSRedPointInfo *_settingRedPointInfo;
    NSMutableDictionary *_ftsReddotDict;
    WSRedPointInfo *_recommendThirdColumnRedPointInfo;
}

+ (void)initialize;
+ (void)PBArrayAdd_recommendThirdColumnClearedTimeStamps;
+ (void)PBArrayAdd_recommendThirdColumnRedPointInfo;
+ (void)PBArrayAdd_ftsReddotDict;
+ (void)PBArrayAdd_bContentReddotShowedInFindPage;
+ (void)PBArrayAdd_secondColumnClearedTimeStamps;
+ (void)PBArrayAdd_settingRedPointInfo;
+ (void)PBArrayAdd_recommendSecondColumnRedPointInfo;
+ (void)PBArrayAdd_recommendNumRedPoints;
+ (void)PBArrayAdd_searchClearedTimeStamps;
+ (void)PBArrayAdd_recommendClearedTimeStamps;
+ (void)PBArrayAdd_recommendFirstColumnRedPointInfo;
+ (void)PBArrayAdd_searchRedPointInfo;
- (void).cxx_destruct;
@property(nonatomic) unsigned int recommendThirdColumnClearedTimeStamps; // @synthesize recommendThirdColumnClearedTimeStamps=_recommendThirdColumnClearedTimeStamps;
@property(retain, nonatomic) WSRedPointInfo *recommendThirdColumnRedPointInfo; // @synthesize recommendThirdColumnRedPointInfo=_recommendThirdColumnRedPointInfo;
@property(retain, nonatomic) NSMutableDictionary *ftsReddotDict; // @synthesize ftsReddotDict=_ftsReddotDict;
@property(nonatomic) _Bool bContentReddotShowedInFindPage; // @synthesize bContentReddotShowedInFindPage=_bContentReddotShowedInFindPage;
@property(retain, nonatomic) WSRedPointInfo *settingRedPointInfo; // @synthesize settingRedPointInfo=_settingRedPointInfo;
@property(nonatomic) unsigned int secondColumnClearedTimeStamps; // @synthesize secondColumnClearedTimeStamps=_secondColumnClearedTimeStamps;
@property(retain, nonatomic) WSRedPointInfo *recommendSecondColumnRedPointInfo; // @synthesize recommendSecondColumnRedPointInfo=_recommendSecondColumnRedPointInfo;
@property(retain, nonatomic) WSNumberRedPointList *recommendNumRedPoints; // @synthesize recommendNumRedPoints=_recommendNumRedPoints;
@property(nonatomic) unsigned int searchClearedTimeStamps; // @synthesize searchClearedTimeStamps=_searchClearedTimeStamps;
@property(nonatomic) unsigned int recommendClearedTimeStamps; // @synthesize recommendClearedTimeStamps=_recommendClearedTimeStamps;
@property(retain, nonatomic) WSRedPointInfo *recommendFirstColumnRedPointInfo; // @synthesize recommendFirstColumnRedPointInfo=_recommendFirstColumnRedPointInfo;
@property(retain, nonatomic) WSRedPointInfo *searchRedPointInfo; // @synthesize searchRedPointInfo=_searchRedPointInfo;
- (unsigned int)getClearedTimeStamps:(unsigned long long)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
