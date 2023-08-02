//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSMutableDictionary, NSString;

@interface MMLiveSettingData : MMObject <PBCoding>
{
    _Bool _isPolicyForAnchorConfirmed;
    _Bool _isPolicyForAudienceConfirmed;
    _Bool _isFinderLivePolicyForAudienceConfirmed;
    NSMutableDictionary *_attendLotteryIdCache;
    NSMutableDictionary *_followStateIdCache;
    NSMutableDictionary *_liveGiftEffectSettingCache;
    NSMutableDictionary *_liveChooseClarityCache;
    NSMutableDictionary *_subTitleSwitchCache;
}

+ (void)initialize;
+ (void)PBArrayAdd_subTitleSwitchCache;
+ (void)PBArrayAdd_isFinderLivePolicyForAudienceConfirmed;
+ (void)PBArrayAdd_liveChooseClarityCache;
+ (void)PBArrayAdd_liveGiftEffectSettingCache;
+ (void)PBArrayAdd_followStateIdCache;
+ (void)PBArrayAdd_attendLotteryIdCache;
+ (void)PBArrayAdd_isPolicyForAudienceConfirmed;
+ (void)PBArrayAdd_isPolicyForAnchorConfirmed;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *subTitleSwitchCache; // @synthesize subTitleSwitchCache=_subTitleSwitchCache;
@property(nonatomic) _Bool isFinderLivePolicyForAudienceConfirmed; // @synthesize isFinderLivePolicyForAudienceConfirmed=_isFinderLivePolicyForAudienceConfirmed;
@property(retain, nonatomic) NSMutableDictionary *liveChooseClarityCache; // @synthesize liveChooseClarityCache=_liveChooseClarityCache;
@property(retain, nonatomic) NSMutableDictionary *liveGiftEffectSettingCache; // @synthesize liveGiftEffectSettingCache=_liveGiftEffectSettingCache;
@property(retain, nonatomic) NSMutableDictionary *followStateIdCache; // @synthesize followStateIdCache=_followStateIdCache;
@property(retain, nonatomic) NSMutableDictionary *attendLotteryIdCache; // @synthesize attendLotteryIdCache=_attendLotteryIdCache;
@property(nonatomic) _Bool isPolicyForAudienceConfirmed; // @synthesize isPolicyForAudienceConfirmed=_isPolicyForAudienceConfirmed;
@property(nonatomic) _Bool isPolicyForAnchorConfirmed; // @synthesize isPolicyForAnchorConfirmed=_isPolicyForAnchorConfirmed;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
