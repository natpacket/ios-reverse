//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMPageSheetBaseView.h"

#import "MMPageSheetBottomViewDelegate-Protocol.h"

@class NSString, UIView;
@protocol VoiceRecordSelectLanguageViewDelegate;

@interface VoiceRecordSelectLanguageView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>
{
    unsigned int _selectedLanguageType;
    id <VoiceRecordSelectLanguageViewDelegate> _delegate;
    UIView *_selectedPanelView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *selectedPanelView; // @synthesize selectedPanelView=_selectedPanelView;
@property(nonatomic) unsigned int selectedLanguageType; // @synthesize selectedLanguageType=_selectedLanguageType;
@property(nonatomic) __weak id <VoiceRecordSelectLanguageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (void)onTapSelectLanguageButton:(id)arg1;
- (void)configSelectedPanelView;
- (void)configPageSheet;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

