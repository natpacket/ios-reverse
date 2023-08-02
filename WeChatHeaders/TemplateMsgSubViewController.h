//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseMsgContentViewController.h"

#import "TemplateMsgSearchHelperDelegate-Protocol.h"

@class MMHeadImageView, MMUILabel, NSString, TemplateMsgSearchHelper, UIButton, UIView;

@interface TemplateMsgSubViewController : BaseMsgContentViewController <TemplateMsgSearchHelperDelegate>
{
    NSString *_templateSessionId;
    UIView *_headerBarView;
    UIView *_headerLineView;
    UIButton *_headerBarButton;
    MMHeadImageView *_headView;
    MMUILabel *_nickNameLabel;
    MMUILabel *_typeLabel;
    TemplateMsgSearchHelper *_searchHelper;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TemplateMsgSearchHelper *searchHelper; // @synthesize searchHelper=_searchHelper;
@property(retain, nonatomic) MMUILabel *typeLabel; // @synthesize typeLabel=_typeLabel;
@property(retain, nonatomic) MMUILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) MMHeadImageView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) UIButton *headerBarButton; // @synthesize headerBarButton=_headerBarButton;
@property(retain, nonatomic) UIView *headerLineView; // @synthesize headerLineView=_headerLineView;
@property(retain, nonatomic) UIView *headerBarView; // @synthesize headerBarView=_headerBarView;
@property(retain, nonatomic) NSString *templateSessionId; // @synthesize templateSessionId=_templateSessionId;
- (void)updateTitleView:(id)arg1 ignoreAnimation:(_Bool)arg2;
- (void)didSelectSearchResultForMessageWrap:(id)arg1 indexPath:(id)arg2 arrKeyword:(id)arg3;
- (id)getChatContact;
- (void)msgSearchBarDoSearch;
- (void)msgSearchDidDismiss;
- (void)msgSearchBarCancel;
- (void)msgSearchBarActive;
- (void)makeNotifyMsgExpose;
- (void)onTableEndScroll;
- (void)onSearchButton:(id)arg1;
- (void)reloadTabeView;
- (void)onSettingButton:(id)arg1;
- (void)didReceiveMemoryWarning;
- (double)getTipsHeight;
- (void)viewWillPop:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (_Bool)shouldInteractivePop;
- (void)onClickHeaderBar:(id)arg1;
- (void)initHeaderBar;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

