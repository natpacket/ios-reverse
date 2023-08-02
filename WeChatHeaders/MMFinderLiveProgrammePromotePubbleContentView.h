//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMFinderLivePromotePubbleContentView.h"

@class FinderLiveProgrammePromoteInfo, MMLiveIconButton, MMUIButton, MMUILabel, UIImageView, UIView, WCFinderBaseCgi;

@interface MMFinderLiveProgrammePromotePubbleContentView : MMFinderLivePromotePubbleContentView
{
    _Bool _isLastSubscribed;
    UIImageView *_iconImageView;
    MMUILabel *_titleLabel;
    MMUILabel *_startTimeLabel;
    UIView *_splitView;
    MMUILabel *_detailLabel;
    MMLiveIconButton *_actionButton;
    FinderLiveProgrammePromoteInfo *_programInfo;
    MMUIButton *_detailButton;
    WCFinderBaseCgi *_subscribeCGI;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderBaseCgi *subscribeCGI; // @synthesize subscribeCGI=_subscribeCGI;
@property(retain, nonatomic) MMUIButton *detailButton; // @synthesize detailButton=_detailButton;
@property(nonatomic) _Bool isLastSubscribed; // @synthesize isLastSubscribed=_isLastSubscribed;
@property(retain, nonatomic) FinderLiveProgrammePromoteInfo *programInfo; // @synthesize programInfo=_programInfo;
@property(retain, nonatomic) MMLiveIconButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) MMUILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UIView *splitView; // @synthesize splitView=_splitView;
@property(retain, nonatomic) MMUILabel *startTimeLabel; // @synthesize startTimeLabel=_startTimeLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void)updateLabelsOriginY;
- (void)layoutDetailLabel;
- (void)layoutSplitView;
- (void)layoutStartTimeLabel;
- (void)layoutTitleLabel;
- (void)layoutActionButton;
- (void)layoutDetailButton;
- (void)layoutIconImgView;
- (void)changeSubscribeStatus;
- (void)onDetailButtonClick:(id)arg1;
- (void)onSubscribeAction:(id)arg1;
- (void)handleLastSubscribeState;
- (void)updateActionButtonStyle;
- (void)onDismissed;
- (void)onClosed;
- (void)onShowed;
- (id)getCurrentPromoteBuffer;
- (void)updatepromoteBuffer:(id)arg1;
- (void)updateFromSyncPromoteResp:(id)arg1;
- (void)updatePromoteItem:(id)arg1;
- (_Bool)isCurrentPromoteItem:(id)arg1;
- (void)refreshData;
- (void)layoutUI;
- (void)convertPromoteMsgInfo:(id)arg1;

@end

