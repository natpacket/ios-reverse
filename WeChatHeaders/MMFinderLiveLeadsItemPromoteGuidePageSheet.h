//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMPageSheetBaseView.h"

#import "MMFinderLiveLeadsItemPromoteGuideViewDelegate-Protocol.h"

@class MMFinderLiveLeadsItemPromoteGuideView, NSString;

@interface MMFinderLiveLeadsItemPromoteGuidePageSheet : MMPageSheetBaseView <MMFinderLiveLeadsItemPromoteGuideViewDelegate>
{
    _Bool _isLastClickedButtonCancel;
    CDUnknownBlockType _completion;
}

+ (void)showIfNeededFor:(id)arg1 width:(double)arg2 completion:(CDUnknownBlockType)arg3;
+ (_Bool)isNeededShowFor:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isLastClickedButtonCancel; // @synthesize isLastClickedButtonCancel=_isLastClickedButtonCancel;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void)showWithAnimated:(_Bool)arg1 width:(double)arg2;
- (void)pageSheetDidClose:(_Bool)arg1;
- (void)onConfirmButtonClicked;
- (void)onCancelButtonClicked;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) MMFinderLiveLeadsItemPromoteGuideView *detailView; // @dynamic detailView;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
