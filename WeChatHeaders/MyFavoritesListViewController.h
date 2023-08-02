//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FavBaseListViewController.h"

#import "FavForwardLogicDelegate-Protocol.h"

@class NSString;
@protocol MyFavoritesListViewControllerDelegate;

@interface MyFavoritesListViewController : FavBaseListViewController <FavForwardLogicDelegate>
{
    id <MyFavoritesListViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MyFavoritesListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onSelectFavDataItem:(id)arg1 tableView:(id)arg2 atIndexPath:(id)arg3;
- (void)onSelectFavItem:(id)arg1 tableView:(id)arg2 atIndexPath:(id)arg3 fromScene:(unsigned int)arg4 favIndex:(unsigned int)arg5 searchText:(id)arg6 withCell:(id)arg7;
- (void)onSquareImgClicked:(id)arg1 withInfo:(id)arg2 withOffset:(unsigned int)arg3;
- (void)finderFeedFlowView:(id)arg1 updateCell:(id)arg2 atIndexPath:(id)arg3;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)OnForwardDone;
- (id)getFavForawrdViewController;
- (void)forwardData:(id)arg1;
- (void)onSelectRowAtIndexPath:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)OnCancelModalView:(id)arg1;
- (void)initNavigationBar;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
