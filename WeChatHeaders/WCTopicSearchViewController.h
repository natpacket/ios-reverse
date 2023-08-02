//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WSHalfScreenWebSearchBaseViewController.h"

#import "ForwardMessageLogicDelegate-Protocol.h"

@class ForwardMessageLogicController, GetSearchShareResponse_SearchShareContext, NSString, WCTopicSearchActionLogic, WCTopicSearchContext;
@protocol WCTopicSearchViewControllerDelegate;

@interface WCTopicSearchViewController : WSHalfScreenWebSearchBaseViewController <ForwardMessageLogicDelegate>
{
    _Bool _hasEndTranscationInVC;
    id <WCTopicSearchViewControllerDelegate> _delegate;
    WCTopicSearchContext *_context;
    ForwardMessageLogicController *_forwardMessageLogicController;
    WCTopicSearchActionLogic *_shareActionLogic;
    GetSearchShareResponse_SearchShareContext *_shareContext;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasEndTranscationInVC; // @synthesize hasEndTranscationInVC=_hasEndTranscationInVC;
@property(retain, nonatomic) GetSearchShareResponse_SearchShareContext *shareContext; // @synthesize shareContext=_shareContext;
@property(retain, nonatomic) WCTopicSearchActionLogic *shareActionLogic; // @synthesize shareActionLogic=_shareActionLogic;
@property(retain, nonatomic) ForwardMessageLogicController *forwardMessageLogicController; // @synthesize forwardMessageLogicController=_forwardMessageLogicController;
@property(retain, nonatomic) WCTopicSearchContext *context; // @synthesize context=_context;
@property(nonatomic) __weak id <WCTopicSearchViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reportShareMsgAction:(long long)arg1;
- (void)reportAppendInputQueryActionWithSessionId:(id)arg1 requestId:(id)arg2 searchId:(id)arg3;
- (void)reportSearchVCCompleteAction;
- (void)reportSearchVCCanceledAction;
- (void)reportSearchVCAppearAction;
- (void)onSearchVCDisappearAction;
- (void)onSearchVCAppearAction;
- (unsigned long long)localJSBizType;
- (void)doForwardMessageSended;
- (id)getCurrentViewController;
- (void)onSetSearchTagResult:(id)arg1;
- (void)onAppendSearchTagQuery:(id)arg1;
- (id)defaultNavTitle;
- (unsigned long long)searchScene;
- (id)initedUrlParams;
- (id)stayTimeReporter;
- (id)initWithDelegate:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

