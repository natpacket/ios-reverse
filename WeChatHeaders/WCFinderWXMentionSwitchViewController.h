//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

@class WCTableViewManager, WCTableViewSectionManager;

@interface WCFinderWXMentionSwitchViewController : MMUIViewController
{
    WCTableViewManager *_tableViewManager;
    WCTableViewSectionManager *_msgSwitchSection;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCTableViewSectionManager *msgSwitchSection; // @synthesize msgSwitchSection=_msgSwitchSection;
@property(retain, nonatomic) WCTableViewManager *tableViewManager; // @synthesize tableViewManager=_tableViewManager;
- (void)showCommentMentionSwitchChanged:(id)arg1;
- (void)showLikeMentionSwitchChanged:(id)arg1;
- (void)reloadTableView;
- (id)makeSectionSeparator;
- (void)configureTableView;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;

@end

