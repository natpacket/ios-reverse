//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PreEnterBaseStep.h"

#import "WCAccountBindPhoneControlLogicDelegate-Protocol.h"
#import "WCAccountPhoneBindGuidanceViewControllerDelegate-Protocol.h"

@class NSString, WCAccountBindPhoneControlLogic, WCAccountPhoneBindGuidanceData;

@interface PreEnterBindPhoneGuidanceStep : PreEnterBaseStep <WCAccountPhoneBindGuidanceViewControllerDelegate, WCAccountBindPhoneControlLogicDelegate>
{
    _Bool _isForceShow;
    _Bool _needSyncEscape;
    WCAccountPhoneBindGuidanceData *_guidancedData;
    WCAccountBindPhoneControlLogic *_bindPhoneLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAccountBindPhoneControlLogic *bindPhoneLogic; // @synthesize bindPhoneLogic=_bindPhoneLogic;
@property(retain, nonatomic) WCAccountPhoneBindGuidanceData *guidancedData; // @synthesize guidancedData=_guidancedData;
@property(nonatomic) _Bool needSyncEscape; // @synthesize needSyncEscape=_needSyncEscape;
@property(nonatomic) _Bool isForceShow; // @synthesize isForceShow=_isForceShow;
- (void)onWCAccountBindPhoneControlLogicCheckOK:(id)arg1;
- (void)onWCAccountBindPhoneControlLogicStop:(id)arg1;
- (void)bindPhoneEnterWithIsFromGuidanceHelp:(_Bool)arg1;
- (void)bindPhoneReturn;
- (void)realFinishStep;
- (void)showBindPhoneGuidanceView:(id)arg1;
- (void)startStep;
- (id)initWithMsg:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

