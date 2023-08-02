//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ElderModeExt-Protocol.h"

@class ElderModeLogic, MMListContentManager, NSString, UIScrollView, UIStackView;

@interface ElderModeViewController : MMUIViewController <ElderModeExt>
{
    ElderModeLogic *_elderModeLogic;
    UIScrollView *_scrollView;
    UIStackView *_contentStack;
    MMListContentManager *_textToSpeechSectionManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMListContentManager *textToSpeechSectionManager; // @synthesize textToSpeechSectionManager=_textToSpeechSectionManager;
@property(retain, nonatomic) UIStackView *contentStack; // @synthesize contentStack=_contentStack;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) ElderModeLogic *elderModeLogic; // @synthesize elderModeLogic=_elderModeLogic;
- (void)onElderModeSetSuccess;
- (void)onElderModeSetFail;
- (void)setElderModeOn:(_Bool)arg1;
- (void)openElderMode;
- (void)closeElderMode;
- (void)onTextToSpeechSwitchChanged:(id)arg1;
- (void)addSpacerOfMinHeight:(double)arg1;
- (void)loadModeOnComponents;
- (void)loadModeOffComponents;
- (id)managerForOnMode;
- (id)logoHeadView;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

