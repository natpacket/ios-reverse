//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface WSRecommendSetting : NSObject <PBCoding>
{
    _Bool _hasConfirmVideoDragTips;
    _Bool _hasConfirmVideoGoodLookEducateAlert;
    _Bool _hasConfirmVideoGoodLookTipEducateToast;
    _Bool _hasWowContent;
    unsigned int _wowContentUpdateTs;
}

+ (void)initialize;
+ (void)PBArrayAdd_wowContentUpdateTs;
+ (void)PBArrayAdd_hasWowContent;
+ (void)PBArrayAdd_hasConfirmVideoGoodLookTipEducateToast;
+ (void)PBArrayAdd_hasConfirmVideoGoodLookEducateAlert;
+ (void)PBArrayAdd_hasConfirmVideoDragTips;
@property(nonatomic) unsigned int wowContentUpdateTs; // @synthesize wowContentUpdateTs=_wowContentUpdateTs;
@property(nonatomic) _Bool hasWowContent; // @synthesize hasWowContent=_hasWowContent;
@property(nonatomic) _Bool hasConfirmVideoGoodLookTipEducateToast; // @synthesize hasConfirmVideoGoodLookTipEducateToast=_hasConfirmVideoGoodLookTipEducateToast;
@property(nonatomic) _Bool hasConfirmVideoGoodLookEducateAlert; // @synthesize hasConfirmVideoGoodLookEducateAlert=_hasConfirmVideoGoodLookEducateAlert;
@property(nonatomic) _Bool hasConfirmVideoDragTips; // @synthesize hasConfirmVideoDragTips=_hasConfirmVideoDragTips;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

