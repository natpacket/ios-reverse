//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "PBMessageObserverDelegate-Protocol.h"

@class MMTableViewInfo, SafeDeviceData, WCTableViewNormalCellManager;

@interface LoginDeviceInfoViewController : MMUIViewController <PBMessageObserverDelegate>
{
    SafeDeviceData *m_info;
    MMTableViewInfo *m_tableViewInfo;
    WCTableViewNormalCellManager *_editNameCellInfo;
    WCTableViewNormalCellManager *_delCellInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCTableViewNormalCellManager *delCellInfo; // @synthesize delCellInfo=_delCellInfo;
@property(retain, nonatomic) WCTableViewNormalCellManager *editNameCellInfo; // @synthesize editNameCellInfo=_editNameCellInfo;
- (unsigned long long)logid;
- (void)registerYReportSdk;
- (id)reportInfoDict;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturnDelDevice:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturnUpdateDevice:(id)arg1 Event:(unsigned int)arg2;
- (void)setDeviceName:(id)arg1;
- (void)editName;
- (void)delCurrentDevice;
- (void)showQuitTip;
- (void)reloadTableData;
- (void)viewDidLoad;
- (id)initWithDeviceIno:(id)arg1;

@end
