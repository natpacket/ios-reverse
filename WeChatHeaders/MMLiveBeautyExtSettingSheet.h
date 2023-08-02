//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMPageSheetBaseView.h"

#import "MMLiveBeautyExtSettingCardDelegate-Protocol.h"

@class MMLiveBeautyExtSettingCard, MMLiveTaskId, NSString;

@interface MMLiveBeautyExtSettingSheet : MMPageSheetBaseView <MMLiveBeautyExtSettingCardDelegate>
{
    MMLiveTaskId *_taskId;
    MMLiveBeautyExtSettingCard *_faceOccuSettingCard;
}

+ (id)showChangeFilterNoticeViewWith:(id)arg1;
+ (id)showWithTaskId:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveBeautyExtSettingCard *faceOccuSettingCard; // @synthesize faceOccuSettingCard=_faceOccuSettingCard;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (void)switchDidChanged:(_Bool)arg1 card:(id)arg2;
- (id)beautyLogic;
- (id)liveTask;
- (void)leftButtonAction;
- (id)getCurrentLeftButton;
- (void)updateNavBarUI;
- (void)setupPageSheetConfig;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)setupSubviews;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
