//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMPageSheetBaseViewController.h"

@class MMTableViewInfo, UIView;

@interface PersonalInformationDeviceViewController : MMPageSheetBaseViewController
{
    UIView *_contentHeaderView;
    MMTableViewInfo *_tableViewInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTableViewInfo *tableViewInfo; // @synthesize tableViewInfo=_tableViewInfo;
@property(retain, nonatomic) UIView *contentHeaderView; // @synthesize contentHeaderView=_contentHeaderView;
- (id)genDeviceInfoDateTimeStringByUInt:(unsigned int)arg1 retDayLength:(unsigned long long *)arg2;
- (void)makeNoContentCell:(id)arg1;
- (double)getCellHeightForDevice:(id)arg1;
- (void)makeCell:(id)arg1 cellInfo:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)reloadData;
- (void)initHeaderView;
- (void)initTableView;
- (void)initView;
- (void)viewDidLoad;
- (id)init;

@end

