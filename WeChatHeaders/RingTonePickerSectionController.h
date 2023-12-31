//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTListSectionController.h"

#import "RingTonePickCollectionViewCellDelegate-Protocol.h"

@class NSString, RingToneDetail, RingToneRecommendReporter_23604;
@protocol RingTonePickerSectionControllerDelegate;

@interface RingTonePickerSectionController : MMTListSectionController <RingTonePickCollectionViewCellDelegate>
{
    unsigned long long _scene;
    RingToneRecommendReporter_23604 *_reporter;
    id <RingTonePickerSectionControllerDelegate> _delegate;
    RingToneDetail *_ring;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RingToneDetail *ring; // @synthesize ring=_ring;
@property(nonatomic) __weak id <RingTonePickerSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) RingToneRecommendReporter_23604 *reporter; // @synthesize reporter=_reporter;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
- (void)jumpToPlayerPage:(id)arg1 index:(long long)arg2;
- (void)onExclusiveRingPlay:(id)arg1 isToPlay:(_Bool)arg2;
- (void)jumpToAuthorPage:(id)arg1;
- (void)willDisplayCell:(id)arg1 forRowAtIndex:(long long)arg2;
- (void)didSelectRowAtIndex:(long long)arg1;
- (id)viewForHeader;
- (double)heightForHeader;
- (double)heightForRowAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1 section:(long long)arg2;
- (void)didUpdateToObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

