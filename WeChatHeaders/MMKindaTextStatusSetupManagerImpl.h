//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMKindaTextStatusSetupManager-Protocol.h"
#import "TextStateBrandLogicDelegate-Protocol.h"

@class MMUIViewController, MMVoidBoolStringCallback, NSString, TextStateBrandLogic;

@interface MMKindaTextStatusSetupManagerImpl : NSObject <TextStateBrandLogicDelegate, MMKindaTextStatusSetupManager>
{
    MMVoidBoolStringCallback *_callback;
    TextStateBrandLogic *_brandLogic;
    MMUIViewController *_currentViewController;
    NSString *_transId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *transId; // @synthesize transId=_transId;
@property(nonatomic) __weak MMUIViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(retain, nonatomic) TextStateBrandLogic *brandLogic; // @synthesize brandLogic=_brandLogic;
@property(retain, nonatomic) MMVoidBoolStringCallback *callback; // @synthesize callback=_callback;
- (void)textStatusDataReportWithScene:(int)arg1;
- (void)onTextStatePublishedWithIconId:(id)arg1 iconDescription:(id)arg2;
- (void)onTextStatePublishCancelled;
- (void)setupTextStatusImpl:(id)arg1 transId:(id)arg2 mktSign:(id)arg3 payscene:(int)arg4 finishCallback:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

