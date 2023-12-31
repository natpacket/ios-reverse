//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "MMFinderLiveNoticeMoreViewItemDelegate-Protocol.h"

@class MMFinderLiveNoticeMoreViewItem, MMUIActivityIndicatorView, MMUILabel, NSString;

@interface MMFinderLiveNoticeMoreCell : UITableViewCell <MMFinderLiveNoticeMoreViewItemDelegate>
{
    MMFinderLiveNoticeMoreViewItem *_viewItem;
    MMUILabel *_tipsLabel;
    MMUIActivityIndicatorView *_activityIndicatorView;
}

+ (double)heightForViewItem:(id)arg1 inTableView:(id)arg2;
+ (id)defaultCellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) MMUILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) MMFinderLiveNoticeMoreViewItem *viewItem; // @synthesize viewItem=_viewItem;
- (void)moreViewItemDidUpdate:(id)arg1;
- (void)updateActivityIndicatorViewLoadingState;
- (void)layoutSubviews;
- (void)updateAllValues;
- (void)loadActivityIndicatorView;
- (void)loadTipsLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

