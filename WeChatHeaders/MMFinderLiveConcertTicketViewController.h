//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ForwardMessageLogicDelegate-Protocol.h"
#import "MMFinderLiveConcertTicketViewDelegate-Protocol.h"
#import "MMScrollActionSheetDelegate-Protocol.h"
#import "RecentForwardScrollViewDelegate-Protocol.h"
#import "WCCommitViewResultDelegate-Protocol.h"

@class ForwardMessageLogicController, MMFinderLiveConcertTicketStyleItem, MMFinderLiveConcertTicketView, MMFinderLiveConcertTicketViewControllerReportingContext, MMScrollActionSheet, MMUIButton, NSString, UIImageView, UIView;
@protocol MMFinderLiveConcertTicketViewControllerDelegate;

@interface MMFinderLiveConcertTicketViewController : MMUIViewController <MMFinderLiveConcertTicketViewDelegate, MMScrollActionSheetDelegate, RecentForwardScrollViewDelegate, ForwardMessageLogicDelegate, WCCommitViewResultDelegate>
{
    MMFinderLiveConcertTicketStyleItem *_styleItem;
    id <MMFinderLiveConcertTicketViewControllerDelegate> _delegate;
    NSString *_anchorDisplayName;
    UIImageView *_backgroundView;
    MMFinderLiveConcertTicketView *_ticketView;
    MMUIButton *_shareButton;
    MMUIButton *_nextStyleButton;
    UIView *_bottomButtonsSeparator;
    MMUIButton *_saveImageButton;
    MMScrollActionSheet *_shareActionSheet;
    ForwardMessageLogicController *_forwardLogic;
    MMFinderLiveConcertTicketViewControllerReportingContext *_reportingContext;
    unsigned long long _sourceScene;
    MMUIButton *_itemButton;
    NSString *_currentItemUrl;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *currentItemUrl; // @synthesize currentItemUrl=_currentItemUrl;
@property(retain, nonatomic) MMUIButton *itemButton; // @synthesize itemButton=_itemButton;
@property(nonatomic) unsigned long long sourceScene; // @synthesize sourceScene=_sourceScene;
@property(retain, nonatomic) MMFinderLiveConcertTicketViewControllerReportingContext *reportingContext; // @synthesize reportingContext=_reportingContext;
@property(retain, nonatomic) ForwardMessageLogicController *forwardLogic; // @synthesize forwardLogic=_forwardLogic;
@property(retain, nonatomic) MMScrollActionSheet *shareActionSheet; // @synthesize shareActionSheet=_shareActionSheet;
@property(retain, nonatomic) MMUIButton *saveImageButton; // @synthesize saveImageButton=_saveImageButton;
@property(retain, nonatomic) UIView *bottomButtonsSeparator; // @synthesize bottomButtonsSeparator=_bottomButtonsSeparator;
@property(retain, nonatomic) MMUIButton *nextStyleButton; // @synthesize nextStyleButton=_nextStyleButton;
@property(retain, nonatomic) MMUIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) MMFinderLiveConcertTicketView *ticketView; // @synthesize ticketView=_ticketView;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NSString *anchorDisplayName; // @synthesize anchorDisplayName=_anchorDisplayName;
@property(nonatomic) __weak id <MMFinderLiveConcertTicketViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMFinderLiveConcertTicketStyleItem *styleItem; // @synthesize styleItem=_styleItem;
- (_Bool)needPageItem;
- (void)shareToMoment;
- (void)shareToChat:(id)arg1;
- (void)initializeShareActionSheet;
- (void)initializeComponents;
- (void)forwardViewController:(id)arg1 didFinishForwardingWithDataItem:(id)arg2;
- (void)forwardViewControllerDidCancel:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)relayoutScrollSheet;
- (void)clickRFItemCallBack:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)onTicketViewLoadFailed:(id)arg1;
- (void)onTicketViewReadyForDisplay:(id)arg1;
- (void)onItemButtonTapped;
- (void)onSaveImageButtonTapped;
- (void)onNextStyleButtonTapped;
- (void)onShareButtonTapped;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)updateWithTicketStyleItem:(id)arg1 hasOtherStyles:(_Bool)arg2;
- (id)initWithAnchorDisplayName:(id)arg1 sourceScene:(unsigned long long)arg2 reportingContext:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
