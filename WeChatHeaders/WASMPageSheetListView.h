//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAAuthPageSheetBaseView.h"

@class MMTableView, MMToastViewController, ZZFLEXAngel;

@interface WASMPageSheetListView : WAAuthPageSheetBaseView
{
    MMTableView *_tableView;
    ZZFLEXAngel *_angel;
    MMToastViewController *_weakCurrentToast;
}

+ (double)viewHeightByDataModel:(id)arg1 hostView:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak MMToastViewController *weakCurrentToast; // @synthesize weakCurrentToast=_weakCurrentToast;
@property(retain, nonatomic) ZZFLEXAngel *angel; // @synthesize angel=_angel;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setViewDataModel:(id)arg1;

@end

