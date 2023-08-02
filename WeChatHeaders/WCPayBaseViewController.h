//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCBizBaseViewController.h"

#import "MMTableViewInfoDelegate-Protocol.h"
#import "WCBaseInfoItemDelegate-Protocol.h"

@class NSString, WCPayControlData;
@protocol WCPayBaseViewControllerDelegate, WCPayBaseViewControllerRemoveDelegate;

@interface WCPayBaseViewController : WCBizBaseViewController <MMTableViewInfoDelegate, WCBaseInfoItemDelegate>
{
    WCPayControlData *m_data;
    id <WCPayBaseViewControllerDelegate> _payBaseDelegate;
    id <WCPayBaseViewControllerRemoveDelegate> _removeDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayBaseViewControllerRemoveDelegate> removeDelegate; // @synthesize removeDelegate=_removeDelegate;
- (void)refreshViewWithData:(id)arg1;
- (void)setupWithData:(id)arg1;
- (void)dealloc;
- (void)setPayBaseDelegate:(id)arg1;
- (void)OnBack;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)init;
- (id)data;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

