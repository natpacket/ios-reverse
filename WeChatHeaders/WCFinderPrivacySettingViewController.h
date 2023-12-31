//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

@class WCFinderContact, WCFinderPersonalSettingParams, WCTableViewManager, WCTableViewNormalCellManager;

@interface WCFinderPrivacySettingViewController : MMUIViewController
{
    WCFinderPersonalSettingParams *_params;
    WCFinderContact *_contact;
    WCTableViewManager *_tableViewManager;
    WCTableViewNormalCellManager *_mpRefCell;
    WCTableViewNormalCellManager *_miniappReferenceCell;
    WCTableViewNormalCellManager *_musicRefCell;
    WCTableViewNormalCellManager *_mjRefCell;
    WCTableViewNormalCellManager *_audienceMuteCell;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCTableViewNormalCellManager *audienceMuteCell; // @synthesize audienceMuteCell=_audienceMuteCell;
@property(retain, nonatomic) WCTableViewNormalCellManager *mjRefCell; // @synthesize mjRefCell=_mjRefCell;
@property(retain, nonatomic) WCTableViewNormalCellManager *musicRefCell; // @synthesize musicRefCell=_musicRefCell;
@property(retain, nonatomic) WCTableViewNormalCellManager *miniappReferenceCell; // @synthesize miniappReferenceCell=_miniappReferenceCell;
@property(retain, nonatomic) WCTableViewNormalCellManager *mpRefCell; // @synthesize mpRefCell=_mpRefCell;
@property(retain, nonatomic) WCTableViewManager *tableViewManager; // @synthesize tableViewManager=_tableViewManager;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) WCFinderPersonalSettingParams *params; // @synthesize params=_params;
- (void)registerYReportSdk;
- (unsigned long long)feedViewControllerScene;
- (void)reportSwitchChangedWithEid:(id)arg1 reportType:(long long)arg2 open:(_Bool)arg3;
- (void)clickPrivacyExportAction;
- (void)miniappReferenceSectionSwitchChanged:(id)arg1;
- (id)audienceMuteSectionFooterTitle:(_Bool)arg1;
- (void)audienceMuteSwitchChanged:(id)arg1;
- (void)privateAcountSwitchChanged:(id)arg1;
- (void)mjRefSwitchDidChange:(id)arg1;
- (void)musicRefSwitchDidChange:(id)arg1;
- (void)mpRefSwitchDidChange:(id)arg1;
- (void)clickUnDisplayMentioned:(id)arg1;
- (void)clickFollowSendMsgCell:(id)arg1;
- (void)clickBlackListCell;
- (void)configRefCell:(id)arg1;
- (id)makeSectionSeparator;
- (void)reloadTableView;
- (void)addReferencePermissionsSection;
- (void)addInteractivePermissionsSection;
- (void)configureTableView;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithContact:(id)arg1 params:(id)arg2;

@end

