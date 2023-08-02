//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ILinkEventExt-Protocol.h"
#import "MMPageSheetBottomViewDelegate-Protocol.h"

@class MMPageSheetAdapter, NSString, UIView;
@protocol WCPayLQTDepositProtocolPageSheetDelegate;

@interface WCPayLQTDepositProtocolPageSheet : NSObject <MMPageSheetBottomViewDelegate, ILinkEventExt>
{
    id <WCPayLQTDepositProtocolPageSheetDelegate> _delegate;
    NSString *_protocolContent;
    NSString *_protocolUrl;
    MMPageSheetAdapter *_pageAdapter;
    UIView *_pageSheetDetailView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *pageSheetDetailView; // @synthesize pageSheetDetailView=_pageSheetDetailView;
@property(retain, nonatomic) MMPageSheetAdapter *pageAdapter; // @synthesize pageAdapter=_pageAdapter;
@property(retain, nonatomic) NSString *protocolUrl; // @synthesize protocolUrl=_protocolUrl;
@property(retain, nonatomic) NSString *protocolContent; // @synthesize protocolContent=_protocolContent;
@property(nonatomic) __weak id <WCPayLQTDepositProtocolPageSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (double)bottomViewBottomMargin;
- (double)bottomViewTopMargin;
- (id)titleForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)dismissPageSheet:(_Bool)arg1;
- (void)showPageSheet;
- (void)setupDetailViewContent;
- (_Bool)shouldSetupDetailViewContent;
- (id)initWithDelegate:(id)arg1 protocolContent:(id)arg2 protocolUrl:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
