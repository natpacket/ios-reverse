//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "WCFilterBasePanelDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, UIView, WCFilterBasePanel;
@protocol WCFilterViewDelegate;

@interface WCFilterView : MMUIView <WCFilterBasePanelDelegate>
{
    NSMutableArray *m_sections;
    MMUIView *m_titlePanel;
    NSMutableDictionary *m_selectedIndexes;
    int m_extendedIndex;
    _Bool m_duringAnimation;
    WCFilterBasePanel *m_extendedPanel;
    MMUIView *m_containView;
    MMUIView *m_animateView;
    MMUIView *m_maskView;
    struct CGRect m_preFrame;
    UIView *m_preSuperView;
    _Bool _autoDismissAfterSelect;
    _Bool _useEmphasizeColor;
    id <WCFilterViewDelegate> _delegate;
    unsigned long long _popType;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool useEmphasizeColor; // @synthesize useEmphasizeColor=_useEmphasizeColor;
@property(nonatomic) _Bool autoDismissAfterSelect; // @synthesize autoDismissAfterSelect=_autoDismissAfterSelect;
@property(nonatomic) unsigned long long popType; // @synthesize popType=_popType;
@property(nonatomic) __weak id <WCFilterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onCleanBtnClick;
- (void)onItemClick:(unsigned int)arg1;
- (void)syncSelection;
- (void)onDismissSelectionPanel;
- (void)onDismissSelectionPanelUpdateTitle;
- (void)dismissCurrentPanelComplete:(_Bool)arg1;
- (void)dismissCurrentPanel:(_Bool)arg1 updateTitle:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)onClickBtn:(id)arg1;
- (void)clearAllSelection;
- (void)updateFilterSection:(id)arg1 atIndex:(unsigned int)arg2;
- (void)updateTitleInButton:(id)arg1;
- (id)getSelectedItems;
- (id)getSelectedIndexes;
- (void)dismissSelectionPanel;
- (void)setFrame:(struct CGRect)arg1;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 andFilterSections:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

