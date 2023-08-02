//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MMFinderLiveRedPacketViewModelObserver-Protocol.h"
#import "PAGViewListener-Protocol.h"

@class MMFinderLiveRedPacketViewModel, NSString, PAGFile, PAGView, UIButton, UILabel;

@interface MMFinderLiveRedPacketView : UIView <MMFinderLiveRedPacketViewModelObserver, PAGViewListener>
{
    _Bool _isStaticStyle;
    PAGFile *_appearingPAGFile;
    PAGFile *_multiplePAGFile;
    PAGFile *_oneRepeatPAGFile;
    PAGFile *_multipleRepeatPAGFile;
    MMFinderLiveRedPacketViewModel *_viewModel;
    unsigned long long _redPacketCount;
    PAGView *_redPacketAnimationView;
    UILabel *_remainingTimeLabel;
    UILabel *_countLabel;
    UIButton *_openButton;
    UILabel *_staticDescLabel;
    UIView *_staticBGView;
    struct CGSize _redPacketSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize redPacketSize; // @synthesize redPacketSize=_redPacketSize;
@property(nonatomic) _Bool isStaticStyle; // @synthesize isStaticStyle=_isStaticStyle;
@property(retain, nonatomic) UIView *staticBGView; // @synthesize staticBGView=_staticBGView;
@property(retain, nonatomic) UILabel *staticDescLabel; // @synthesize staticDescLabel=_staticDescLabel;
@property(retain, nonatomic) UIButton *openButton; // @synthesize openButton=_openButton;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UILabel *remainingTimeLabel; // @synthesize remainingTimeLabel=_remainingTimeLabel;
@property(retain, nonatomic) PAGView *redPacketAnimationView; // @synthesize redPacketAnimationView=_redPacketAnimationView;
@property(nonatomic) unsigned long long redPacketCount; // @synthesize redPacketCount=_redPacketCount;
@property(retain, nonatomic) MMFinderLiveRedPacketViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)onAnimationCancel:(id)arg1;
- (void)onAnimationEnd:(id)arg1;
- (void)redPacketViewModel:(id)arg1 hiddenDidChange:(_Bool)arg2;
- (void)redPacketViewModel:(id)arg1 countDidChange:(unsigned long long)arg2;
- (void)redPacketViewModel:(id)arg1 remainingTimeStringDidChange:(id)arg2;
- (void)refreshWithHidden:(_Bool)arg1;
- (void)refreshCountLabelWithCountString:(id)arg1 animated:(_Bool)arg2;
- (void)refreshWithCount:(unsigned long long)arg1;
- (void)refreshWithRemainingTimeString:(id)arg1;
- (void)refreshWithRemainingTimeHidden:(_Bool)arg1;
- (double)startProgressForPacketPAG;
- (void)playAnimationView;
- (void)animateToStaticStyleWithCompletion:(CDUnknownBlockType)arg1;
- (void)animateToNormalStyle;
- (void)updateRedPacketSize:(struct CGSize)arg1;
- (void)resetRedPacketSize;
@property(readonly, nonatomic) PAGFile *multipleRepeatPAGFile; // @synthesize multipleRepeatPAGFile=_multipleRepeatPAGFile;
- (id)pathForMultipleRepeatPAGFile;
@property(readonly, nonatomic) PAGFile *oneRepeatPAGFile; // @synthesize oneRepeatPAGFile=_oneRepeatPAGFile;
- (id)pathForOneRepeatPAGFile;
@property(readonly, nonatomic) PAGFile *multiplePAGFile; // @synthesize multiplePAGFile=_multiplePAGFile;
@property(readonly, nonatomic) PAGFile *appearingPAGFile; // @synthesize appearingPAGFile=_appearingPAGFile;
- (void)initStaticViews;
- (void)openButtonClicked:(id)arg1;
- (void)initOpenButton;
- (void)initCountLabel;
- (void)initRemainingTimeLabel;
- (_Bool)redPacketAnimationRepeatEnabled;
- (void)initRedPacketAnimationView;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

