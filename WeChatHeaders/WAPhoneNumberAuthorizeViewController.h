//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAAuthorizeViewController.h"

#import "IWAPhoneNumberAuthorizePageSheet-Protocol.h"

@class NSString, WAAuthorizeResultInfo, WAPhoneNumberAuthorizeSheetInfo, WAPhoneNumberPageSheetViewModel;
@protocol WAPhoneNumberAuthorizeViewControllerDelegate;

@interface WAPhoneNumberAuthorizeViewController : WAAuthorizeViewController <IWAPhoneNumberAuthorizePageSheet>
{
    long long _selectedIndex;
    WAPhoneNumberPageSheetViewModel *_pnViewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAPhoneNumberPageSheetViewModel *pnViewModel; // @synthesize pnViewModel=_pnViewModel;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
- (id)subViewModel;
- (id)customSubviewClassList;
- (void)togglePhone:(id)arg1;
- (void)managePhoneNumber;
- (void)reloadData;
- (id)initWithInfo:(id)arg1;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType acceptAction;
@property(nonatomic) __weak id <WAPhoneNumberAuthorizeViewControllerDelegate> authDelegate; // @dynamic authDelegate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) WAPhoneNumberAuthorizeSheetInfo *info; // @dynamic info;
@property(copy, nonatomic) CDUnknownBlockType rejectAction;
@property(readonly, nonatomic) WAAuthorizeResultInfo *resultInfo;
@property(readonly) Class superclass;

@end

