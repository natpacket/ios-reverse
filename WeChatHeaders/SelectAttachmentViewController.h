//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IAppDataExt-Protocol.h"
#import "MMNewTipsMgrExt-Protocol.h"
#import "MMTransparentButtonDelegate-Protocol.h"
#import "SelectAttachmentViewDataSource-Protocol.h"
#import "SelectAttachmentViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString;
@protocol SelectAttachmentViewControllerDelegate;

@interface SelectAttachmentViewController : MMUIViewController <MMNewTipsMgrExt, SelectAttachmentViewDelegate, SelectAttachmentViewDataSource, MMTransparentButtonDelegate, IAppDataExt>
{
    int _iCurSelection;
    id <SelectAttachmentViewControllerDelegate> m_delegate;
    NSArray *m_svcApps;
    NSMutableArray *_arrAttachementObjectItems;
    long long m_inputToolWeAppStartIndex;
    long long m_inputToolWeAppNotShowIndex;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *m_svcApps; // @synthesize m_svcApps;
@property(nonatomic) __weak id <SelectAttachmentViewControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void)onTipsShowInfoChangeWithPathKey:(id)arg1;
- (void)reportHBShow;
- (void)setSelectAttachmentViewAccessibility:(_Bool)arg1;
- (void)onShowAttachmentAtPageIndex:(unsigned long long)arg1 pageSize:(unsigned long long)arg2;
- (void)onShowInputToolWeAppArAtPageIndex:(unsigned long long)arg1 pageNumber:(unsigned long long)arg2;
- (void)adjustViewAndNavBarRect;
- (void)OnAppSettingChanged;
- (void)OnNewAppStatusChanged;
- (void)OnAppIconChanged:(id)arg1;
- (void)OnAppRegisterInfoChanged;
- (void)MMTransparentButton_touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)MMTransparentButton_touchesBegan:(id)arg1 withEvent:(id)arg2;
- (double)getRealSafeBottomInset;
- (id)viewForAttachmentAtIndex:(unsigned int)arg1;
- (void)OnAttachmentClicked:(id)arg1;
- (unsigned long long)numberOfCols;
- (unsigned long long)numberOfRows;
- (unsigned long long)numberOfAttachment;
- (id)getDescAtIndex:(unsigned int)arg1;
- (id)getTextAtIndex:(unsigned int)arg1;
- (id)getImageAtIndex:(unsigned int)arg1;
- (double)getSelectAttachmentViewHeight;
- (id)getDynamicWeAppItemAtIndex:(unsigned int)arg1;
- (void)changeToInputToolWeAppNotShowPageWithHadAttachmentRedDot:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)resetView;
- (void)updateView;
- (void)dealloc;
- (id)init;
- (void)initObjectItem;
- (void)initData;
- (_Bool)shouldShowQuickReplyPush:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

